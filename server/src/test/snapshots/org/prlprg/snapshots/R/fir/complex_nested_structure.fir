fun main() {
  () -+> V { reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg s1:V, reg l1:I, reg i5:I, reg i6:I, reg i7:I, reg i8:I, reg c1:L, reg i9:I, reg x1:V, reg inner:*, reg inner1:V, reg r:V, reg c2:L, reg inner2:*, reg inner3:V, reg r2:V, reg c3:L, reg inner_sum:*, reg inner_sum1:V, reg inner4:*, reg inner5:V, reg r4:V, reg outer:*, reg outer1:V, reg r5:V, reg c4:L, reg result:*, reg result1:V, reg inner_sum2:*, reg inner_sum3:V, reg r7:V, reg result2:*, reg result3:V |
    mkenv;
    st result = 0.0;
    s = toForSeq(<int 1, 2, 3>);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L1() else L13();
  L1():
    result2 = ld result;
    check L30() else D7();
  L13():
    x = `[[`(s, i2, NULL, TRUE);
    st outer = x;
    st inner_sum = 0.0;
    s1 = toForSeq(<int 1, 2, 3, 4>);
    l1 = length(s1);
    i5 = 0;
    goto L5(i2, i5);
  D7():
    deopt 56 [result2];
  L5(i6, i7):
    i8 = `+`.1(i7, 1);
    c1 = `<`.1(l1, i8);
    if c1 then L4(i6) else L10();
  L30():
    result3 = force? result2;
    checkMissing(result3);
    popenv;
    return result3;
  L4(i9):
    outer = ld outer;
    check L24() else D4();
  L10():
    x1 = `[[`(s1, i8, NULL, TRUE);
    st inner = x1;
    inner = ld inner;
    check L14() else D0();
  D0():
    deopt 14 [i6, i8, inner];
  D4():
    deopt 39 [i9, outer];
  L14():
    inner1 = force? inner;
    checkMissing(inner1);
    r = `==`(inner1, 1.0);
    c2 = `as.logical`(r);
    if c2 then L15() else L6();
  L24():
    outer1 = force? outer;
    checkMissing(outer1);
    r5 = `==`(outer1, 3.0);
    c4 = `as.logical`(r5);
    if c4 then L25() else L11();
  L6():
    inner2 = ld inner;
    check L18() else D1();
  L11():
    result = ld result;
    check L28() else D5();
  L15():
    goto L5(i6, i8);
  L25():
    goto L1();
  D1():
    deopt 22 [i6, i8, inner2];
  D5():
    deopt 47 [i9, result];
  L18():
    inner3 = force? inner2;
    checkMissing(inner3);
    r2 = `==`(inner3, 4.0);
    c3 = `as.logical`(r2);
    if c3 then L19() else L8();
  L28():
    result1 = force? result;
    checkMissing(result1);
    inner_sum2 = ld inner_sum;
    check L29() else D6();
  D6():
    deopt 48 [i9, result1, inner_sum2];
  L8():
    inner_sum = ld inner_sum;
    check L22() else D2();
  L19():
    goto L4(i6);
  L29():
    inner_sum3 = force? inner_sum2;
    checkMissing(inner_sum3);
    r7 = `+`(result1, inner_sum3);
    st result = r7;
    goto L2(i9);
  D2():
    deopt 30 [i6, i8, inner_sum];
  L22():
    inner_sum1 = force? inner_sum;
    checkMissing(inner_sum1);
    inner4 = ld inner;
    check L23() else D3();
  D3():
    deopt 31 [i6, i8, inner_sum1, inner4];
  L23():
    inner5 = force? inner4;
    checkMissing(inner5);
    r4 = `+`(inner_sum1, inner5);
    st inner_sum = r4;
    goto L5(i6, i8);
  }
}