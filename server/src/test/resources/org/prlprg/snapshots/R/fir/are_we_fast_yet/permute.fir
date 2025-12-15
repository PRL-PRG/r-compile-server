fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg permute:cls, reg p:p(V +), reg r3:V |
    mkenv;
    r = clos `inner-275505155`;
    st permute = r;
    r1 = clos inner2025749088;
    st swap = r1;
    permute = ldf permute;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7>;
    };
    r3 = dyn permute(4.0, p);
    check L1() else D1();
  D1():
    deopt 10 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun `inner-275505155`(n, list) {
  (reg n:*, reg list:*) -+> V { var n:*, var list:*, reg n1:*, reg n2:V, reg r:V, reg c:L, reg n3:*, reg n4:V, reg r3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg count:*, reg count1:V, reg permute:cls, reg n5:*, reg n6:V, reg r4:V, reg p:p(V +), reg swap:cls, reg list1:*, reg list2:V, reg p1:p(V +), reg i5:*, reg i6:V, reg p2:p(V +), reg n7:*, reg n8:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg r11:V, reg r12:V, reg count2:*, reg count3:V |
    mkenv;
    st n = n;
    st list = list;
    n1 = ld n;
    check L4() else D0();
  D0():
    deopt 0 [n1];
  L4():
    n2 = force? n1;
    checkMissing(n2);
    r = `==`(n2, 1.0);
    c = `as.logical`(r);
    if c then L5() else L0();
  L0():
    st count = 0.0;
    n3 = ld n;
    check L8() else D1();
  L5():
    popenv;
    return 1.0;
  D1():
    deopt 13 [1.0, n3];
  L8():
    n4 = force? n3;
    checkMissing(n4);
    r3 = `:`(1.0, n4);
    s = toForSeq(r3);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L9() else L3();
  L3():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    count = ld count;
    check L10() else D2();
  L9():
    count2 = ld count;
    check L13() else D5();
  D2():
    deopt 16 [i2, count];
  D5():
    deopt 27 [count2];
  L10():
    count1 = force? count;
    checkMissing(count1);
    permute = ldf permute;
    check L11() else D3();
  L13():
    count3 = force? count2;
    checkMissing(count3);
    popenv;
    return count3;
  D3():
    deopt 18 [i2, count1];
  L11():
    p = prom<V +>{
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      r4 = `-`(n6, 1.0);
      return r4;
    };
    p4 = prom<V +>{
      swap = ldf swap;
      p1 = prom<V +>{
        list1 = ld list;
        list2 = force? list1;
        checkMissing(list2);
        return list2;
      };
      p2 = prom<V +>{
        i5 = ld i;
        i6 = force? i5;
        checkMissing(i6);
        return i6;
      };
      p3 = prom<V +>{
        n7 = ld n;
        n8 = force? n7;
        checkMissing(n8);
        return n8;
      };
      r9 = dyn swap(p1, p2, p3);
      return r9;
    };
    r11 = dyn permute(p, p4);
    check L12() else D4();
  D4():
    deopt 21 [i2, count1, r11];
  L12():
    r12 = `+`(count1, r11);
    st count = r12;
    goto L2(i2);
  }
}
fun inner2025749088(list, i, j) {
  (reg list:*, reg i:*, reg j:*) -+> V { var list:*, var i:*, var j:*, reg list1:*, reg list2:V, reg c:L, reg list4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r:V, reg list5:*, reg list6:V, reg c1:L, reg list8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg j1:*, reg j2:V, reg __1:cls, reg r1:V, reg l:*, reg c2:L, reg dx5:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx7:V, reg dx9:V, reg i3:*, reg i4:V, reg ___:cls, reg r2:V, reg temp:*, reg temp1:V, reg l3:*, reg c3:L, reg temp3:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg j3:*, reg j4:V, reg ___1:cls, reg r3:V, reg list9:*, reg list10:V |
    mkenv;
    st list = list;
    st i = i;
    st j = j;
    list1 = ld list;
    check L4() else D0();
  D0():
    deopt 0 [list1];
  L4():
    list2 = force? list1;
    checkMissing(list2);
    c = `is.object`(list2);
    if c then L5() else L6(list2);
  L0(dx1):
    st temp = dx1;
    list5 = ld list;
    check L9() else D2();
  L5():
    dr = tryDispatchBuiltin.1("[", list2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(list4):
    i1 = ld i;
    check L8() else D1();
  D1():
    deopt 2 [list4, i1];
  D2():
    deopt 6 [list5];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    i2 = force? i1;
    __ = ldf `[` in base;
    r = dyn __(list4, i2);
    goto L0(r);
  L9():
    list6 = force? list5;
    checkMissing(list6);
    c1 = `is.object`(list6);
    if c1 then L10() else L11(list6);
  L1(dx3):
    l = ld list;
    c2 = `is.object`(l);
    if c2 then L14() else L15(dx3, l);
  L10():
    dr2 = tryDispatchBuiltin.1("[", list6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11(dr2);
  L11(list8):
    j1 = ld j;
    check L13() else D3();
  D3():
    deopt 8 [list8, j1];
  L2(dx9):
    st list = dx9;
    temp = ld temp;
    check L18() else D5();
  L12():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L13():
    j2 = force? j1;
    __1 = ldf `[` in base;
    r1 = dyn __1(list8, j2);
    goto L1(r1);
  L14():
    dr4 = tryDispatchBuiltin.0("[<-", l, dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L16() else L15(dx3, dr4);
  L15(dx5, l2):
    i3 = ld i;
    check L17() else D4();
  D4():
    deopt 12 [dx5, l2, dx3, i3];
  D5():
    deopt 16 [temp];
  L16():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L2(dx7);
  L17():
    i4 = force? i3;
    ___ = ldf `[<-` in base;
    r2 = dyn ___(l2, dx3, i4);
    goto L2(r2);
  L18():
    temp1 = force? temp;
    checkMissing(temp1);
    l3 = ld list;
    c3 = `is.object`(l3);
    if c3 then L19() else L20(temp1, l3);
  L3(dx11):
    st list = dx11;
    list9 = ld list;
    check L23() else D7();
  L19():
    dr6 = tryDispatchBuiltin.0("[<-", l3, temp1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L21() else L20(temp1, dr6);
  L20(temp3, l5):
    j3 = ld j;
    check L22() else D6();
  D6():
    deopt 19 [temp3, l5, temp1, j3];
  D7():
    deopt 23 [list9];
  L21():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L3(dx10);
  L22():
    j4 = force? j3;
    ___1 = ldf `[<-` in base;
    r3 = dyn ___1(l5, temp1, j4);
    goto L3(r3);
  L23():
    list10 = force? list9;
    checkMissing(list10);
    popenv;
    return list10;
  }
}