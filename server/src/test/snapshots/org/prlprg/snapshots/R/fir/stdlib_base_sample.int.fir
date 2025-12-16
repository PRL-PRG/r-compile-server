fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1477802688`;
    st `sample.int` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1477802688`(n, size, replace, prob, useHash) {
  (reg n:*, reg size:*, reg replace:*, reg prob:*, reg useHash:*) -+> V { var n:*, var size:*, reg size_isMissing:L, reg size_orDefault:*, reg n1:*, reg n2:V, reg p:p(V +), var replace:*, reg replace_isMissing:L, reg replace_orDefault:*, var prob:*, reg prob_isMissing:L, reg prob_orDefault:*, var useHash:*, reg useHash_isMissing:L, reg useHash_orDefault:*, reg n3:*, reg n4:V, reg r1:V, reg c:L, reg c2:V, reg replace1:*, reg replace2:V, reg r2:V, reg c3:L, reg c4:V, reg c6:L, reg c8:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg c11:L, reg r4:V, reg prob1:*, reg prob2:V, reg c12:V, reg c13:L, reg c14:V, reg c16:L, reg c18:V, reg size1:*, reg size2:V, reg n5:*, reg n6:V, reg r5:V, reg r6:V, reg c19:L, reg c20:V, reg p1:p(V +), reg stopifnot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg n7:*, reg n8:V, reg length:cls, reg r10:V, reg r11:V, reg p2:p(V +), reg r13:V, reg useHash1:*, reg useHash2:V, reg c22:L, reg stopifnot1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg prob3:*, reg prob4:V, reg c23:V, reg p3:p(V +), reg replace3:*, reg replace4:V, reg r17:V, reg p4:p(V +), reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg n9:*, reg n10:V, reg size3:*, reg size4:V, reg sample2:cls, reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg n11:*, reg n12:V, reg size5:*, reg size6:V, reg replace5:*, reg replace6:V, reg prob5:*, reg prob6:V, reg sample3:cls, reg r25:V |
    mkenv;
    st n = n;
    size_isMissing = missing.0(size);
    if size_isMissing then L0() else L1(size);
  L0():
    p = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    goto L1(p);
  L1(size_orDefault):
    st size = size_orDefault;
    replace_isMissing = missing.0(replace);
    if replace_isMissing then L2(FALSE) else L2(replace);
  L2(replace_orDefault):
    st replace = replace_orDefault;
    prob_isMissing = missing.0(prob);
    if prob_isMissing then L3(NULL) else L3(prob);
  L3(prob_orDefault):
    st prob = prob_orDefault;
    useHash_isMissing = missing.0(useHash);
    if useHash_isMissing then L4() else L5(useHash);
  L4():
    p1 = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      r1 = `>`(n4, 1.0E7);
      c = `as.logical`(r1);
      if c then L4() else L0(c);
    L0(c2):
      c6 = `as.logical`(c2);
      if c6 then L6() else L1(c6);
    L4():
      replace1 = ld replace;
      replace2 = force? replace1;
      checkMissing(replace2);
      r2 = `!`(replace2);
      c3 = `as.logical`(r2);
      c4 = `&&`(c, c3);
      goto L0(c4);
    L1(c8):
      c16 = `as.logical`(c8);
      if c16 then L10() else L3(c16);
    L6():
      sym = ldf `is.null`;
      base = ldf `is.null` in base;
      guard = `==`.4(sym, base);
      if guard then L7() else L8();
    L2(c11, r4):
      c13 = `as.logical`(r4);
      c14 = `&&`(c11, c13);
      goto L1(c14);
    L3(c18):
      visible.0();
      return c18;
    L7():
      prob1 = ld prob;
      prob2 = force? prob1;
      checkMissing(prob2);
      c12 = `==`(prob2, NULL);
      goto L2(c6, c12);
    L8():
      r3 = dyn base(<sym prob>);
      goto L2(c6, r3);
    L10():
      size1 = ld size;
      size2 = force? size1;
      checkMissing(size2);
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      r5 = `/`(n6, 2.0);
      r6 = `<=`(size2, r5);
      c19 = `as.logical`(r6);
      c20 = `&&`(c16, c19);
      goto L3(c20);
    };
    goto L5(p1);
  L5(useHash_orDefault):
    st useHash = useHash_orDefault;
    stopifnot = ldf stopifnot;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p2 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r9):
      r11 = `==`(r9, 1);
      return r11;
    L1():
      n7 = ld n;
      n8 = force? n7;
      checkMissing(n8);
      length = ldf length in base;
      r10 = dyn length(n8);
      goto L0(r10);
    L2():
      r8 = dyn base1(<sym n>);
      goto L0(r8);
    };
    r13 = dyn stopifnot(p2);
    check L10() else D1();
  D1():
    deopt 3 [r13];
  L10():
    useHash1 = ld useHash;
    check L11() else D2();
  D2():
    deopt 4 [useHash1];
  L11():
    useHash2 = force? useHash1;
    checkMissing(useHash2);
    c22 = `as.logical`(useHash2);
    if c22 then L12() else L6();
  L6():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L21() else L22();
  L12():
    stopifnot1 = ldf stopifnot;
    check L13() else D3();
  D3():
    deopt 7 [];
  L8(r24):
    popenv;
    return r24;
  L13():
    p3 = prom<V +>{
      sym2 = ldf `is.null`;
      base2 = ldf `is.null` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      prob3 = ld prob;
      prob4 = force? prob3;
      checkMissing(prob4);
      c23 = `==`(prob4, NULL);
      goto L0(c23);
    L2():
      r14 = dyn base2(<sym prob>);
      goto L0(r14);
    };
    p4 = prom<V +>{
      replace3 = ld replace;
      replace4 = force? replace3;
      checkMissing(replace4);
      r17 = `!`(replace4);
      return r17;
    };
    r19 = dyn stopifnot1(p3, p4);
    check L14() else D4();
  L21():
    n11 = ld n;
    check L23() else D8();
  L22():
    r23 = dyn base4(<lang sample(n, size, replace, prob)>);
    goto L8(r23);
  D4():
    deopt 10 [r19];
  D8():
    deopt 21 [n11];
  L14():
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L15() else L16();
  L23():
    n12 = force? n11;
    checkMissing(n12);
    size5 = ld size;
    check L24() else D9();
  D9():
    deopt 23 [size5];
  L7(r21):
    popenv;
    return r21;
  L15():
    n9 = ld n;
    check L17() else D5();
  L16():
    r20 = dyn base3(<lang sample2(n, size)>);
    goto L7(r20);
  L24():
    size6 = force? size5;
    checkMissing(size6);
    replace5 = ld replace;
    check L25() else D10();
  D5():
    deopt 13 [n9];
  D10():
    deopt 25 [replace5];
  L17():
    n10 = force? n9;
    checkMissing(n10);
    size3 = ld size;
    check L18() else D6();
  L25():
    replace6 = force? replace5;
    checkMissing(replace6);
    prob5 = ld prob;
    check L26() else D11();
  D6():
    deopt 15 [size3];
  D11():
    deopt 27 [prob5];
  L18():
    size4 = force? size3;
    checkMissing(size4);
    sample2 = ldf sample2 in base;
    r22 = dyn sample2(n10, size4);
    check L19() else D7();
  L26():
    prob6 = force? prob5;
    checkMissing(prob6);
    sample3 = ldf sample in base;
    r25 = dyn sample3(n12, size6, replace6, prob6);
    check L27() else D12();
  D7():
    deopt 18 [r22];
  D12():
    deopt 30 [r25];
  L19():
    goto L7(r22);
  L27():
    goto L8(r25);
  }
}