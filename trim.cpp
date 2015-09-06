
/**
 * trim the space charactors in the begin and end of string s
 *
 * @author Tony Zhang
 * @date 20150906
 */
string trim(string s){
	int i;
	for ( i = 0; i < s.length(); i++) {
		if (s[i] != ' ') {
			break;
		}
	}
	
	int j;
	for (j = (int)s.length() - 1; j > -1; j--) {
		if (s[j] != ' ') {
			break;
		}
	}
	
	//	cout << i << " | " << j << "\n";
	
	string s_tmp;
	if (i > j) {
		s_tmp =  "";
	}else{
		s_tmp = s.substr(i, (j - i + 1));
	}
	
	//	cout << s_tmp << "|***\n";
	
	return s_tmp;
}
