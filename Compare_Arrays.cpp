void Compare_Arrays()
{
	string s_arr[5]{"a", "b", "c", "d", "e"};
	string s_arr2[5]{"a", "b", "c", "d", "e"};

	auto *ps = s_arr, *ps2 = s_arr2;

	while (ps != end(s_arr) && ps2 != end(s_arr2) && *ps++ == *ps2++);

	if (ps == end(s_arr) && ps2 == end(s_arr2))
		cout << "Equal!" << endl;
	else
	{
	
		if (ps == end(s_arr) || ps2 == end(s_arr2)) {
			if (ps == end(s_arr))
				cout << "Array s_arr is less than s_arr2, as it's fewer in elements." << endl;
			else
				cout << "Array s_arr is greater than s_arr2, as it's more in elements." << endl;
		}
		else {
			if (*ps > *ps2)
				cout << "Array s_arr is greater than s_arr2 by greater element" << endl;
			else
				cout << "Array s_arr is less than s_arr2 by smaller element" << endl;
		}
	}
}
