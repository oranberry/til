// What statement is correct for reading a row of data?  
// Assume student_id is an int variable, course_id is a string variable, and status is a string variable.
fscanf(pFile, "%s %d %s", &course_id, &student_id, &status);
fscanf(pFile, "%s %d %s", &course_id, student_id, &status);
fscanf(pFile, "%s %d %s", course_id, student_id, status);
fscanf(pFile, "%s %d %s", course_id, &student_id, status);
