/*

Đề bài: 
    - Loại bỏ các email bị trùng nhau và sắp xếp lại theo thứ tự từ điển.
    - Email không phân biệt chữ hoa/ thường. In ra email viết thường.

Input: 
    - Gồm không quá 300 dòng, mỗi dòng một địa chỉ email.
    - Độ dài mỗi email không quá 100 kí tự.

*/

#include <stdio.h>
#include <string.h>


int main() {

	// Mảng xâu để lưu danh sách tất cả các email hợp lệ
    char emails[301][101]; 
    
    //Xâu tạm để lưu email người dùng
    char temp[101];

	//Biến đếm số lượng email hợp lệ
    int cnt_email = 0;

    // Đọc hết luồng dữ liệu nhập vào, kết thúc khi gặp kí tự EOF (End of file)
    while (fgets(temp, 101, stdin)) {

        //Chuyển tất cả các kí tự về in thường
        for (int i = 0 ; temp[i] != '\0' ; i ++) {

            //Nếu là kí tự in hoa thì chuyển về in thường
            if (temp[i] >= 'A' && temp[i] <= 'Z') 
                temp[i] = temp[i] - 'A' + 'a';

            // Loại bỏ kí tự xuống dòng
            if (temp[i] == '\n') temp[i] = '\0';
        }
        

        //Kiểm tra trùng lặp và thêm vào danh sách email
        int ok = 1;

        for (int i = 0 ; i < cnt_email; i ++) 
            if (strcmp(temp, emails[i]) == 0){
                ok = 0;
                break;
            } 

        if (ok) {
        	strcpy(emails[cnt_email], temp);
			cnt_email ++;
		}
            

    }

    // Sắp xếp đổi chỗ trực tiếp
    for (int i = 0 ; i < cnt_email - 1; i ++) 
        for (int j = i + 1 ; j < cnt_email ; j ++) 
            if (strcmp(emails[i], emails[j]) > 0) {
                strcpy(temp, emails[i]);
                strcpy(emails[i], emails[j]);
                strcpy(emails[j], temp);
            }
        
    
    // In ra danh sách emails sau khi đã sắp xếp
    for (int i = 0 ; i < cnt_email ; i ++) {
        printf("%s\n", emails[i]);
    }

    return 0;
}