fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.decode_numeric_version` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg Map:cls, reg r3:cls, reg p:p(V +), reg x3:*, reg x4:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x5:*, reg x6:V, reg attr1:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x7:*, reg x8:V, reg names:cls, reg r13:V, reg l:*, reg names__:cls, reg r14:V, reg unique:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg x9:*, reg x10:V, reg attr2:cls, reg r19:V, reg c:cls, reg r20:V, reg p3:p(V +), reg r22:V, reg l1:*, reg class__:cls, reg r23:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st width = r1;
    Map = ldf Map;
    check L6() else D2();
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>, "width");
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 9 [];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r2 = dyn attr(x2, "width");
    check L5() else D1();
  L6():
    p = prom<V +>{
      r3 = clos inner938562484;
      return r3;
    };
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p2 = prom<V +>{
      sym1 = ldf attr;
      base1 = ldf attr in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      attr1 = ldf attr in base;
      r8 = dyn attr1(x6, "lens");
      goto L0(r8);
    L2():
      r6 = dyn base1(<sym x>, "lens");
      goto L0(r6);
    };
    r10 = dyn Map(p, p1, p2);
    check L7() else D3();
  D1():
    deopt 6 [r2];
  D3():
    deopt 13 [r10];
  L5():
    goto L0(r2);
  L7():
    st y = r10;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L8() else L9();
  L1(r12):
    l = ld y;
    names__ = ldf `names<-`;
    check L12() else D6();
  L8():
    x7 = ld x;
    check L10() else D4();
  L9():
    r11 = dyn base2(<sym x>);
    goto L1(r11);
  D4():
    deopt 17 [x7];
  D6():
    deopt 22 [r12, l, r12];
  L10():
    x8 = force? x7;
    checkMissing(x8);
    names = ldf names in base;
    r13 = dyn names(x8);
    check L11() else D5();
  L12():
    r14 = dyn names__(l, NULL, r12);
    check L13() else D7();
  D5():
    deopt 20 [r13];
  D7():
    deopt 24 [r12, r14];
  L11():
    goto L1(r13);
  L13():
    st y = r14;
    unique = ldf unique;
    check L14() else D8();
  D8():
    deopt 27 [];
  L14():
    p3 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r16):
      return r16;
    L2():
      sym4 = ldf attr;
      base4 = ldf attr in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L4() else L5();
    L3():
      r15 = dyn base3(<lang attr(x, ".classes")>, "numeric_version");
      goto L0(r15);
    L1(r18):
      c = ldf c in base;
      r20 = dyn c(r18, "numeric_version");
      goto L0(r20);
    L4():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      attr2 = ldf attr in base;
      r19 = dyn attr2(x10, ".classes");
      goto L1(r19);
    L5():
      r17 = dyn base4(<sym x>, ".classes");
      goto L1(r17);
    };
    r22 = dyn unique(p3);
    check L15() else D9();
  D9():
    deopt 29 [r22];
  L15():
    l1 = ld y;
    class__ = ldf `class<-`;
    check L16() else D10();
  D10():
    deopt 31 [r22, l1, r22];
  L16():
    r23 = dyn class__(l1, NULL, r22);
    check L17() else D11();
  D11():
    deopt 33 [r22, r23];
  L17():
    st y = r23;
    y = ld y;
    check L18() else D12();
  D12():
    deopt 35 [y];
  L18():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}
fun inner938562484(elt, len) {
  (reg elt:*, reg len:*) -+> V { var elt:*, var len:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg elt1:*, reg elt2:V, reg is_na:cls, reg r2:V, reg c:L, reg integer:cls, reg r3:V, reg seq:cls, reg len1:*, reg len2:V, reg p:p(V +), reg width:*, reg width1:V, reg p1:p(V +), reg r8:V, reg seq1:cls, reg width2:*, reg width3:V, reg p2:p(V +), reg len3:*, reg len4:V, reg p3:p(V +), reg width4:*, reg width5:V, reg p4:p(V +), reg r12:V, reg strtoi:cls, reg substring:cls, reg elt3:*, reg elt4:V, reg p5:p(V +), reg first:*, reg first1:V, reg p6:p(V +), reg last:*, reg last1:V, reg p7:p(V +), reg r16:V, reg p8:p(V +), reg r18:V |
    mkenv;
    st elt = elt;
    st len = len;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1();
  L3():
    elt1 = ld elt;
    check L5() else D0();
  L4():
    r = dyn base(<sym elt>);
    goto L0(r);
  D0():
    deopt 2 [elt1];
  L1():
    seq = ldf seq;
    check L12() else D4();
  L5():
    elt2 = force? elt1;
    checkMissing(elt2);
    is_na = ldf `is.na` in base;
    r2 = dyn is_na(elt2);
    check L6() else D1();
  L7():
    integer = ldf integer;
    check L8() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D4():
    deopt 13 [];
  L6():
    goto L0(r2);
  L8():
    r3 = dyn integer();
    check L9() else D3();
  L12():
    p = prom<V +>{
      len1 = ld len;
      len2 = force? len1;
      checkMissing(len2);
      return len2;
    };
    p1 = prom<V +>{
      width = ld width;
      width1 = force? width;
      checkMissing(width1);
      return width1;
    };
    r8 = dyn seq[from, `length.out`, by](1, p, p1);
    check L13() else D5();
  D3():
    deopt 8 [r3];
  D5():
    deopt 20 [r8];
  L9():
    popenv;
    return r3;
  L13():
    st first = r8;
    seq1 = ldf seq;
    check L14() else D6();
  D6():
    deopt 23 [];
  L14():
    p2 = prom<V +>{
      width2 = ld width;
      width3 = force? width2;
      checkMissing(width3);
      return width3;
    };
    p3 = prom<V +>{
      len3 = ld len;
      len4 = force? len3;
      checkMissing(len4);
      return len4;
    };
    p4 = prom<V +>{
      width4 = ld width;
      width5 = force? width4;
      checkMissing(width5);
      return width5;
    };
    r12 = dyn seq1[from, `length.out`, by](p2, p3, p4);
    check L15() else D7();
  D7():
    deopt 30 [r12];
  L15():
    st last = r12;
    strtoi = ldf strtoi;
    check L16() else D8();
  D8():
    deopt 33 [];
  L16():
    p8 = prom<V +>{
      substring = ldf substring;
      p5 = prom<V +>{
        elt3 = ld elt;
        elt4 = force? elt3;
        checkMissing(elt4);
        return elt4;
      };
      p6 = prom<V +>{
        first = ld first;
        first1 = force? first;
        checkMissing(first1);
        return first1;
      };
      p7 = prom<V +>{
        last = ld last;
        last1 = force? last;
        checkMissing(last1);
        return last1;
      };
      r16 = dyn substring(p5, p6, p7);
      return r16;
    };
    r18 = dyn strtoi(p8, 8);
    check L17() else D9();
  D9():
    deopt 36 [r18];
  L17():
    popenv;
    return r18;
  }
}