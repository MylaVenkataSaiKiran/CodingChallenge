int dataTypes(string type) {
	string s = type;
	if("Integer"==s or "Float"==s){
		return 4;
	}
	else if(("Long"==s) or ("Double"==s)){
		return 8;
	}
	else if(("Character"==s)){
		return 1;
	}
	return -1;
}
