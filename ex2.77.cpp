/*
 * ��ͥ��ҵ 2.77
 *
 * д����������ԭ�͵ĺ����Ĵ��룺
 *
 * // Divide by power of two.  Assume 0 <= k < w-1
 * int divide_power2(int x, int k);
 *
 * �ú���Ҫ����ȷ��������� x/2^k������Ӧ����ѭλ�������������
 */
int divide_power2(int x, int k) {
	
	int bias = (x >> 31) & ((1 << k ) - 1);
	return (bias + x) >> k;
}

//int main() {
//	int x = divide_power2(-16, 2);
//	return 0;
//}
/*��ʽ�����ϣ�����Ĺؼ�����ô���ò��Ի������õ�ƫ��
����ϰ��2.42��������
��x<0����ôx>>31�õ�ȫ1�� ��& ((1 << k ) - 1) �õ�ƫ�ã�
��x>0����ôx>>31�õ�ȫ0�� ��& ((1 << k ) - 1) Ϊ0��
*/