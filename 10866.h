#pragma once
#include <iostream>
#include <string>

using namespace std;

//링크드리스트 연습용으로 

struct listdeque {
	int data;
	struct listdeque* link;
};

struct headdeque {
	listdeque* head;
};

class Deque {
public:
	headdeque* createdeque() {
		headdeque* h = new headdeque;
		h->head = NULL;
		return h;
	}
	void empty(headdeque* h) {
		if (h->head == NULL) {
			cout << 1 << "\n";
		}
		else cout << 0 << "\n";
	}
	void adddeque(headdeque* h, int x) {
		listdeque* newdeque = new listdeque;
		listdeque* lastdeque;
		newdeque->data = x;
		newdeque->link = NULL;

		if (h->head == NULL) {
			h->head = newdeque;
			return;
		}
		lastdeque = h->head;
		while (lastdeque->link != NULL) lastdeque = lastdeque->link;
		lastdeque->link = newdeque;
	}
	void addfirstdeque(headdeque* h, int x) {
		listdeque* newdeque = new listdeque;

		newdeque->data = x;
		newdeque->link = h->head;
		h->head = newdeque;

		if (h->head == NULL) {
			h->head = newdeque;
			return;
		}


	}

	void deletedeque(headdeque* h) {
		listdeque* prevdeque;
		listdeque* deldeque;
		
		if (h->head == NULL) return;
		if (h->head->link == NULL) {
			cout << h->head->data << "\n";
			delete h->head;
			h->head = NULL;
			return;
		}
		else {
			prevdeque = h -> head;
			deldeque = h->head->link;
			while (deldeque->link != NULL) {
				prevdeque = deldeque;
				deldeque = prevdeque->link;
			}
			cout << deldeque->data << "\n";
			free(deldeque);
			prevdeque->link = NULL;



		}
	}
	void deletefirstdecue(headdeque* h) {
		listdeque* deldeque;
		deldeque = h->head;
		h->head=deldeque->link;
		cout << deldeque->data << "\n";
		free(deldeque);
	}
	void first(headdeque* h) {
		listdeque* firstdeque;
		firstdeque = h->head;
		cout << firstdeque->data << "\n";
	}
	void last(headdeque* h) {
		if (h->head->link == NULL) {
			cout << h->head->data << "\n";
			return;
		}
		listdeque* prevdeque;
		listdeque* lastdeque;
		prevdeque = h->head;
		lastdeque = h->head->link;
		
		while (lastdeque->link != NULL) {
			prevdeque = lastdeque;
			lastdeque = prevdeque->link;
		}
		cout << lastdeque->data << "\n";
	}

};


void run10866() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	Deque d;
	headdeque* l;
	l = d.createdeque();

	string ord;
	int X;
	int N;
	int count = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> ord;
		if (ord[0] == 'p') {
			if (ord[1] == 'u') {
				if (ord[5] == 'f') {
					cin >> X;
					d.addfirstdeque(l, X);
					count++;
				}
				else {
					cin >> X;
					d.adddeque(l, X);
					count++;
				}
			}
			else {
				if (ord[4] == 'f') {
					if (count == 0) {
						cout << "-1\n";
						continue;
					}
					d.deletefirstdecue(l);
					count--;
				}
				else {
					if (count == 0) {
						cout << "-1\n";
						continue;
					}
					d.deletedeque(l);
					count--;
				}
			}
		}

		else if (ord[0] == 's') {
			cout << count << "\n";
		}
		else if (ord[0] == 'e') {
			d.empty(l);
		}
		else if (ord[0] == 'f') {
			if (count == 0) {
				cout << "-1\n";
				continue;
			}
			d.first(l);
		}
		else if (ord[0] == 'b') {
			if (count == 0) {
				cout << "-1\n";
				continue;
			}
			d.last(l);
		}

	}


}