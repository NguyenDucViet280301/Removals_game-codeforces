Alice và Bob mỗi người có một hoán vị của các số từ 1 đến n. Họ chơi một trò chơi với hai hoán vị này.

Ở mỗi lượt chơi, lần lượt:

Alice chọn và loại bỏ phần tử đầu tiên hoặc cuối cùng trong dãy của mình.
Bob cũng chọn và loại bỏ phần tử đầu tiên hoặc cuối cùng trong dãy của mình.
Trò chơi kết thúc sau n-1 lượt, lúc này mỗi dãy chỉ còn lại một phần tử: x ở dãy của Alice và y ở dãy của Bob.

Nếu x = y thì Bob thắng, ngược lại Alice thắng. Hãy tìm người chiến thắng nếu cả hai người chơi đều chơi tối ưu.

Đầu vào:

Dòng đầu tiên chứa số lượng bộ test t (1 ≤ t ≤ 10^4).
Mỗi bộ test bắt đầu bằng một số nguyên n (1 ≤ n ≤ 3.10^5).
Dòng tiếp theo chứa n số nguyên a1, a2, ..., an (1 ≤ ai ≤ n, tất cả các ai khác nhau) là hoán vị của Alice.
Dòng tiếp theo chứa n số nguyên b1, b2, ..., bn (1 ≤ bi ≤ n, tất cả các bi khác nhau) là hoán vị của Bob.
Đảm bảo tổng của tất cả các n không vượt quá 3.10^5.

Đầu ra:

Với mỗi bộ test, in ra một dòng duy nhất là tên người chiến thắng, giả sử cả hai người chơi đều chơi tối ưu. Nếu Alice thắng, in "Alice"; ngược lại, in "Bob".

Giải quyết:

Sẽ tạo 2 mảng cho Alice và Bob

So sánh 2 mảng:

      Nếu bằng nhau --> Bob win
      
      Nếu khác nhau --> Alice win
