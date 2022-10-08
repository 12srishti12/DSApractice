vector<int> gradingStudents(vector<int> grades) {
    for(int i=0;i<grades.size();i++){
        if(grades[i]<38) continue;
        if(grades[i]>=38){
            int c=0;
            c=grades[i]/5;
            c=c*5+5;
            if(c-grades[i]<3){
                grades[i]=c;
            }
        }
    }
    return grades;
}

