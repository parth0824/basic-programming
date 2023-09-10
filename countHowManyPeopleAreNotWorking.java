// Assignment Coding Problem
// Problem Name: countHowManyPeopleAreNotWorking
// Problem Level: MEDIUM
// Problem Description: 
// #### 1. You are given structure of an organization in the form of a tree.
// #### 2. Data of each node contains name of a designation and data of its child nodes contains the name of designation reporting to it. The data of root node will always contain the string: "CEO", as it is the apex designation.
// #### 3. The designation "individual_contributors" have nobody reporting to them. This means they are no child nodes to designation containing the data "individual_contributors".
// #### 4.  There are levels of hierarchy. The level of CEO or root node is 1 and levels of its reporting designations or child nodes is 2 and so on. 
// #### 5. It is believed that only people at designation "individual_contributors" are working. If we go by this myth, can you tell us how many people are not working in the organization. 
// ##### Input Format:
//     The input has already been taken for you. You have to just complete the given function. 
// ##### Constraints:
//     Time Limit: 1 second
//     All the designations are comprised of lowercase letter. The length of string is in the range: [1, 30].
// ##### Output Format:
//     The output has already been taken for you. You have to only complete the given function. 
   
//  ##### Sample Input 1:
//     ceo 3 cto cfo individual contributors 2 individual_contributors individual_contributors 1 accountant 0 0 0 1 individual_contributors 0

// ##### Sample Output 1:
//     4
