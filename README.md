![Tec de Monterrey](images/logotecmty.png)
# Act 1.3 - Comprehensive Activity on Basic Concepts and Fundamental Algorithms (Competency Evidence)

## <span style="color: rgb(26, 99, 169);">What Do I Have to Do?</span>
In this repository, you will find the input files as well as the expected outputs to test your implementation. You will also find a "main.cpp" file. You must implement your solution in this file. At the top of the file, include your personal information in comments. For example:
```
// =========================================================
// File: main.cpp
// Author: Edward Elric - A00123456
// Date: 01/01/2021
// =========================================================
```
<span style="text-decoration: underline;">Individually</span>, develop the solution for the following problem:

A measure of "disorder" in a sequence is the number of pairs of entries that are out of order relative to each other. For example, in the sequence of letters “DAABEC,” this measure is 5, since D is greater than four letters to its right, and E is greater than one letter to its right. This measure is called the number of inversions in the sequence. The sequence "AACEDGG" has only one inversion (E and D) and is almost sorted, while the sequence "ZWQM" has 6 inversions (it is as disordered as possible, exactly the opposite of sorted).

You are responsible for cataloging a sequence of DNA strings (sequences containing only the four letters A, C, G, and T). However, you want to catalog them not alphabetically but by "rank," from "most ordered" to "least ordered." All strings are of the same length.

## <span style="color: rgb(26, 99, 169);">**Input**</span>
The first line contains two integers: a positive integer *n* (0 < *n* <= 50), which gives the length of the strings; and a positive integer *m* (0 < *m* <= 100), giving the number of strings. These are followed by *m* lines, each containing a string of length *n*.

## <span style="color: rgb(26, 99, 169);">**Output**</span>
Generate the list of input strings, sorted from "most ordered" to "least ordered." If two or more strings are equally ordered, list them in the same order as they appear in the input file.

## <span style="color: rgb(26, 99, 169);">**Sample Input**</span>
```
10 6
AACATGAAGG
TTTTGGCCAA
TTTGGCCAAA
GATCAGATTT
CCCGGGGGGA
ATCGATGCAT
```
## <span style="color: rgb(26, 99, 169);">**Sample Output**</span>
```
CCCGGGGGGA
AACATGAAGG
GATCAGATTT
ATCGATGCAT
TTTTGGCCAA
TTTGGCCAAA
```

To test your implementation, compile your program with the command:
```
g++ -std=c++11 main.cpp -o app
```
Then, test your solution with each of the input files provided in this repository (`input1.txt`, `input2.txt`, `input3.txt`, `input4.txt`). The expected results are in the files `output1.txt`, `output2.txt`, `output3.txt`, and `output4.txt`. To perform the tests, you can use the following commands. For example, to test with the file "input1.txt":
```
./app < input1.txt > mysolution1.txt
diff mysolution1.txt output1.txt
```
If the second command produces no output, you know your results are as expected.

Finally, conduct individual research and reflection on the importance and efficiency of different sorting and searching algorithms in a problem situation like this, generating a document titled **"ReflexAct1.3.pdf"**.

## <span style="color: rgb(26, 99, 169);">**How Is My Evidence Evaluated?**</span>

- **80%** - For each functionality, the evaluation will be:
    - **Excellent (80%)** - correctly passes all test cases.
    - **Very Good (60%)** - correctly passes 75% of test cases.
    - **Good (40%)** - correctly passes 50% of test cases.
    - **Insufficient (20%)** - correctly passes less than 50% of test cases.

- **10%** - The code must follow the coding standards specified in the document: <span class="instructure_file_holder link_holder">[coding_standard_link](estandar.pdf)</span>.
- **10%** - Function names in the application must be respected.

## <span style="color: rgb(26, 99, 169);">**Where Do I Submit It?**</span>
This activity is part of your final course grade as well as the portfolio of evidence for the competencies to be developed in the course. Therefore, individually:
* Submit the corresponding files for the sorting and searching algorithms in the appropriate section of this platform, along with the individual reflection document (**ReflexAct1.3.pdf**).
* Create a personal folder named **TC1031(Final_Portfolio)** to prepare for the portfolio of competencies submission at the end of the course. This folder must contain 5 subfolders:
    * **Act1.3** - place your files that solved <span style="text-decoration: underline;">activity 1.3</span> along with the individual reflection document (**ReflexAct1.3.pdf**).
    * Act2.3
    * Act3.4
    * Act4.3
    * Act5.2
