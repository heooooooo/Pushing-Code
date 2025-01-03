struct Rectangle {
    int height, length;
    Rectangle() : height(0), length(0) {}
    
    Rectangle(int initHeight, int initLength) : height(initHeight), length(initLength) {}

    int getPerimeter() {
        return 2 * (height + length);
    }
    
    void print() {
        for (int i = 0; i < height; i++){
            for (int j = 0; j < length; j++){
                if (i == 0 || j == 0 || (i + 1 == height) || (j + 1 == length)){
                    cout << "*";
                }
                else cout << " ";
            }
            cout << endl;
        }
    }
};

int compare(Rectangle a, Rectangle b) {
    if (a.getPerimeter() > b.getPerimeter()) return 1;
    else if (a.getPerimeter() == b.getPerimeter()) return 0;
    else return -1;
}