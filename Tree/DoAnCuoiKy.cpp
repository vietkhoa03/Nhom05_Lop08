#include <iostream>
using namespace std;

struct NODE {
	string INFO;
	int LTAG, RTAG;
	NODE* LLINK, * RLINK;
	NODE* NEXT;
	NODE* PARENT;

	void initNodeThread(string INFO) {
		this->INFO = INFO;
		LLINK = RLINK = PARENT = nullptr;
		LTAG = RTAG = 0;
	}
	void initNodeUnThread(string INFO) {
		this->INFO = INFO;
		NEXT = LLINK = RLINK = nullptr;
	}
	void showInfo() { cout << INFO; }
};

struct LINKEDSTACK {
	NODE* TOP;

	void initStack() { TOP = nullptr; }
	bool isEmpty() { return TOP == nullptr; }
	bool insertStack(NODE* x) {
		if (this->isEmpty()) {
			TOP = x;
			return true;
		}

		x->NEXT = TOP;
		TOP = x;
		return true;
	}
	NODE* deleteStack() {
		if (this->isEmpty()) return nullptr;

		NODE* result = TOP;
		TOP = TOP->NEXT;
		result->NEXT = nullptr;

		return result;
	}
};

struct UnThreadBinaryTree {
	NODE* T;

	void initUnThread(NODE* T) { this->T = T; }
	void inOrder() {
		//left root right

		LINKEDSTACK A; A.initStack();
		NODE* P = T;
		while (P != nullptr || A.isEmpty() == false) {
			if (P != nullptr) {
				A.insertStack(P);
				P = P->LLINK;
			}
			else {
				P = A.deleteStack();
				P->showInfo();
				P = P->RLINK;
			}
		}
	}
	void preOrder() {
		//root left right

		LINKEDSTACK A; A.initStack();
		NODE* P = T;
		while (P != nullptr || A.isEmpty() == false) {
			if (P != nullptr) {
				P->showInfo();
				A.insertStack(P);
				P = P->LLINK;
			}
			else {
				P = A.deleteStack();
				P = P->RLINK;
			}
		}
	}
	void postOrder() {
		//left right root

		LINKEDSTACK A; A.initStack();
		NODE* P = T;
		NODE* Pre = nullptr;
		while (P != nullptr || A.isEmpty() == false) {
			if (P != nullptr) {
				A.insertStack(P);
				P = P->LLINK;
			}
			else {
				P = A.deleteStack();
				if (P->RLINK != nullptr && P->RLINK != Pre) {
					A.insertStack(P);
					P = P->RLINK;
					continue;
				}
				Pre = P;
				P->showInfo();
				P = nullptr;
			}
		}
	}
};

UnThreadBinaryTree* build_TreeUnThread() {
	UnThreadBinaryTree* tree = new UnThreadBinaryTree();

	NODE* A = new NODE(); A->initNodeUnThread("A");
	NODE* B = new NODE(); B->initNodeUnThread("B");
	NODE* C = new NODE(); C->initNodeUnThread("C");

	NODE* D = new NODE(); D->initNodeUnThread("D");
	NODE* E = new NODE(); E->initNodeUnThread("E");
	NODE* F = new NODE(); F->initNodeUnThread("F");

	NODE* G = new NODE(); G->initNodeUnThread("G");
	NODE* H = new NODE(); H->initNodeUnThread("H");
	NODE* J = new NODE(); J->initNodeUnThread("J");

	A->LLINK = B;
	A->RLINK = C;

	B->LLINK = D;

	C->LLINK = E;
	C->RLINK = F;

	E->RLINK = G;

	F->LLINK = H;
	F->RLINK = J;

	tree->initUnThread(A);
	return tree;
}

/*-----------------------------------------------------------------*/

struct ThreadBinaryTree {
	NODE* HEAD;

	void initThread() { this->HEAD = new NODE(); }
	NODE* next_inOrder(NODE* P) {
		//left root right
		if (P->RTAG)  return P->RLINK;
		P = P->RLINK;
		while (P->LTAG == 0) P = P->LLINK;
		return P;
	}
	NODE* next_preOrder(NODE* P) {
		//left root right
		if (P->LTAG == 0) return P->LLINK;
		return P->RLINK;
	}
	NODE* next_postOrder(NODE* P, NODE* Pre) {
		if (P->RTAG) return P->RLINK;
		if (P->PARENT->RLINK == Pre) return P->PARENT;
		if (P->PARENT->LLINK == Pre) {
			P = P->PARENT->RLINK;
			while (P->LLINK != Pre) {
				while (P->LTAG == 0) P = P->LLINK;
				if (P->RTAG == 0) P = P->RLINK;
			}
			return P;
		}
		P = P->RLINK;
		while (P->LTAG == 0) P = P->LLINK;
		return P;
	}

	void inOrder() {
		NODE* R = next_inOrder(HEAD);
		while (R != HEAD) {
			R->showInfo();
			R = next_inOrder(R);
		}
	}
	void preOrder() {
		NODE* R = next_preOrder(HEAD);
		while (R != HEAD) {
			R->showInfo();
			R = next_preOrder(R);
		}
	}
	void postOrder() {
		NODE* Pre = nullptr;
		NODE* R = next_postOrder(HEAD, Pre);
		while (R != HEAD) {
			Pre = R;
			R->showInfo();
			R = next_postOrder(R, Pre);
		}
	}
};

ThreadBinaryTree* build_TreeThread_inOrder() {
	ThreadBinaryTree* tree = new ThreadBinaryTree();
	tree->initThread();

	NODE* A = new NODE(); A->initNodeThread("A");
	NODE* B = new NODE(); B->initNodeThread("B");
	NODE* C = new NODE(); C->initNodeThread("C");

	NODE* D = new NODE(); D->initNodeThread("D");
	NODE* E = new NODE(); E->initNodeThread("E");
	NODE* F = new NODE(); F->initNodeThread("F");

	NODE* G = new NODE(); G->initNodeThread("G");
	NODE* H = new NODE(); H->initNodeThread("H");
	NODE* J = new NODE(); J->initNodeThread("J");

	A->LTAG = 0;
	A->RTAG = 0;
	A->LLINK = B;
	A->RLINK = C;

	B->LTAG = 0;
	B->RTAG = 1;
	B->LLINK = D;
	B->RLINK = A;

	C->LTAG = 0;
	C->RTAG = 0;
	C->LLINK = E;
	C->RLINK = F;

	D->LTAG = 1;
	D->RTAG = 1;
	D->LLINK = tree->HEAD;
	D->RLINK = B;

	E->LTAG = 1;
	E->RTAG = 0;
	E->LLINK = A;
	E->RLINK = G;

	F->LTAG = 0;
	F->RTAG = 0;
	F->LLINK = H;
	F->RLINK = J;

	G->LTAG = 1;
	G->RTAG = 1;
	G->LLINK = E;
	G->RLINK = C;

	H->LTAG = 1;
	H->RTAG = 1;
	H->LLINK = C;
	H->RLINK = F;

	J->LTAG = 1;
	J->RTAG = 1;
	J->LLINK = F;
	J->RLINK = tree->HEAD;

	tree->HEAD->INFO = "$";
	tree->HEAD->LLINK = A;
	tree->HEAD->RLINK = tree->HEAD;

	return tree;

}

ThreadBinaryTree* build_TreeThread_preOrder() {
	ThreadBinaryTree* tree = new ThreadBinaryTree();
	tree->initThread();

	NODE* A = new NODE(); A->initNodeThread("A");
	NODE* B = new NODE(); B->initNodeThread("B");
	NODE* C = new NODE(); C->initNodeThread("C");

	NODE* D = new NODE(); D->initNodeThread("D");
	NODE* E = new NODE(); E->initNodeThread("E");
	NODE* F = new NODE(); F->initNodeThread("F");

	NODE* G = new NODE(); G->initNodeThread("G");
	NODE* H = new NODE(); H->initNodeThread("H");
	NODE* J = new NODE(); J->initNodeThread("J");

	A->LTAG = 0;
	A->RTAG = 0;
	A->LLINK = B;
	A->RLINK = C;

	B->LTAG = 0;
	B->RTAG = 1;
	B->LLINK = D;
	B->RLINK = D;

	C->LTAG = 0;
	C->RTAG = 0;
	C->LLINK = E;
	C->RLINK = F;

	D->LTAG = 1;
	D->RTAG = 1;
	D->LLINK = B;
	D->RLINK = C;

	E->LTAG = 1;
	E->RTAG = 0;
	E->LLINK = C;
	E->RLINK = G;

	F->LTAG = 0;
	F->RTAG = 0;
	F->LLINK = H;
	F->RLINK = J;

	G->LTAG = 1;
	G->RTAG = 1;
	G->LLINK = E;
	G->RLINK = F;

	H->LTAG = 1;
	H->RTAG = 1;
	H->LLINK = F;
	H->RLINK = J;

	J->LTAG = 1;
	J->RTAG = 1;
	J->LLINK = H;
	J->RLINK = tree->HEAD;

	tree->HEAD->INFO = "*";
	tree->HEAD->LLINK = A;
	tree->HEAD->RLINK = tree->HEAD;

	return tree;
}

ThreadBinaryTree* build_TreeThread_postOrder() {
	ThreadBinaryTree* tree = new ThreadBinaryTree();
	tree->initThread();

	NODE* A = new NODE(); A->initNodeThread("A");
	NODE* B = new NODE(); B->initNodeThread("B");
	NODE* C = new NODE(); C->initNodeThread("C");

	NODE* D = new NODE(); D->initNodeThread("D");
	NODE* E = new NODE(); E->initNodeThread("E");
	NODE* F = new NODE(); F->initNodeThread("F");

	NODE* G = new NODE(); G->initNodeThread("G");
	NODE* H = new NODE(); H->initNodeThread("H");
	NODE* J = new NODE(); J->initNodeThread("J");

	A->LTAG = 0;
	A->RTAG = 0;
	A->LLINK = B;
	A->RLINK = C;
	A->PARENT = tree->HEAD;

	B->LTAG = 0;
	B->RTAG = 1;
	B->LLINK = D;
	B->RLINK = G;
	B->PARENT = A;

	C->LTAG = 0;
	C->RTAG = 0;
	C->LLINK = E;
	C->RLINK = F;
	C->PARENT = A;

	D->LTAG = 1;
	D->RTAG = 1;
	D->LLINK = tree->HEAD;
	D->RLINK = B;
	D->PARENT = B;

	E->LTAG = 1;
	E->RTAG = 0;
	E->LLINK = G;
	E->RLINK = G;
	E->PARENT = C;

	F->LTAG = 0;
	F->RTAG = 0;
	F->LLINK = H;
	F->RLINK = J;
	F->PARENT = C;

	G->LTAG = 1;
	G->RTAG = 1;
	G->LLINK = B;
	G->RLINK = E;
	G->PARENT = E;

	H->LTAG = 1;
	H->RTAG = 1;
	H->LLINK = E;
	H->RLINK = J;
	H->PARENT = F;

	J->LTAG = 1;
	J->RTAG = 1;
	J->LLINK = H;
	J->RLINK = F;
	J->PARENT = F;

	tree->HEAD->INFO = "#";
	tree->HEAD->LLINK = A;
	tree->HEAD->RLINK = tree->HEAD;
	tree->HEAD->PARENT = tree->HEAD;
	return tree;
}

int main() {
	UnThreadBinaryTree* tree = build_TreeUnThread();
	cout << "Unthread inOrder: "; tree->inOrder(); cout << endl;
	cout << "Unthread preOrder: "; tree->preOrder(); cout << endl;
	cout << "Unthread postOrder: "; tree->postOrder(); cout << endl;

	ThreadBinaryTree* tree1 = build_TreeThread_inOrder();
	cout << "Thread inOrder: "; tree1->inOrder(); cout << endl;
	ThreadBinaryTree* tree2 = build_TreeThread_preOrder();
	cout << "Thread preOrder: "; tree2->preOrder(); cout << endl;
	ThreadBinaryTree* tree3 = build_TreeThread_postOrder();
	cout << "Thread postOrder: "; tree3->postOrder(); cout << endl;
	return 0;
}
