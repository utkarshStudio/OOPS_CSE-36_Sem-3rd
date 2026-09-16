
    return s;
}
void Example :: display(Example E){
    cout<<E.a<<endl;
}

int main() {
    Example A,B,C,R;
    A.geta(10);
    B.geta(20);
    R = C.Sum(A,B);
    cout<<"Sum : ";
    R.display(R);

    return 0;
}