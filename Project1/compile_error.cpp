// Code for Project 1
// Fake news results

#include <iostream>
using namespace std;   // pp. 37-38 in Savitch book explain this line

int main()
{
	int postsReviewed;
	int fakePosts;
	int realPosts;
	int unverifiedPosts == 0; // (=) instead of (==)

	cout << "How many internet posts were reviewed? ";
	cin >> postsReviewed;
	cout << "How many of these posts were fake news items? ";
	cin >> fakePosts;
	cout << "How many of these posts were real news items? ";
	cin >> realPosts;

	if (realPosts + fakePosts < postsReviewed) {
		unverifiedPosts = postsReviewed - (realPosts + fakePosts);
		cout << "There were " << unverifiedPosts << "Unverified Posts" << endl // (;) expected
	}
	else
		cout << "Total number of Unverified posts: " << unverifiedPost << endl; // misspelled variable


	double pctFake = 100.0 * fakePosts / postsReviewed;
	double pctReal = 100.0 * realPosts / postsReviewed;
	

	cout.setf(ios::fixed);       
	cout.precision(1);

	cout << endl;
	cout << pctFake << "% were fake." << endl;
	cout << pctReal << "% were real." << endl;

	if (pctFake > pctReal)
		cout << "It was more fake than real." << endl;
	else if (pctFake < pctFake)
		cout << "It was more real than fake." << endl;
	else if (pctFake == pctReal)
		cout < "There is the same number of real and fake posts" << endl; // (<<) expected

	cout << "There are " << ratio << " fake posts per each real post" << endl; //Undeclared value ==> double ratio = (100.0 * fakePosts) / (100.0 *realPosts);

	return(0);

	
}
