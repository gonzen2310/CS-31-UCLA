#include <iostream>
using namespace std;

int main()
{
	int postsReviewed;
	int fakePosts;
	int realPosts;

	cout << "How many internet posts were reviewed? ";
	cin >> postsReviewed;
	cout << "How many of these posts were fake news items? ";
	cin >> fakePosts;
	cout << "How many of these posts were real news items? ";
	cin >> realPosts;

	double pctFake = 1000.0 * fakePosts / postsReviewed; //Extra 0. (Typo)
	double pctReal = 100.0 * realPosts / postsReviewed;
	int ratio = (100.0 * fakePosts) / (100.0 *realPosts); //should be double


	cout.setf(ios::fixed);
	cout.precision(1);

	cout << endl;
	cout << pctFake << "% were fake." << endl;
	cout << pctReal << "% were real." << endl;

	if (pctFake > pctReal)
		cout << "It was more fake than real." << endl;
	else if (pctFake < pctReal)
		cout << "It was more real than fake." << endl;
	else if (pctFake == pctReal)
		cout << "Neither real nor fake" << endl;

	cout << "There are " << ratio << " real posts for every fake post" << endl; // Word order or operation order

	return(0);
}