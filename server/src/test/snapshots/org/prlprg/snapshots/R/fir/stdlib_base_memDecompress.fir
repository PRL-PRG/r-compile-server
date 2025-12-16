fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-605061333`;
    st memDecompress = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-605061333`(from, type, asChar) {
  (reg from:*, reg type:*, reg asChar:*) -+> V { var from:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var asChar:*, reg asChar_isMissing:L, reg asChar_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg match_arg:cls, reg type1:*, reg type2:V, reg p1:p(V +), reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg c1:cls, reg r10:V, reg match:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg from1:*, reg from2:V, reg type3:*, reg type4:V, reg memDecompress:cls, reg r14:V, reg asChar1:*, reg asChar2:V, reg c2:L, reg rawToChar:cls, reg ans:*, reg ans1:V, reg p2:p(V +), reg r16:V, reg ans2:*, reg ans3:V |
    mkenv;
    st from = from;
    type_isMissing = missing.0(type);
    if type_isMissing then L0() else L1(type);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("unknown", "gzip", "bzip2", "xz", "none");
      goto L0(r2);
    L2():
      r = dyn base("unknown", "gzip", "bzip2", "xz", "none");
      goto L0(r);
    };
    goto L1(p);
  L1(type_orDefault):
    st type = type_orDefault;
    asChar_isMissing = missing.0(asChar);
    if asChar_isMissing then L2(FALSE) else L2(asChar);
  L2(asChar_orDefault):
    st asChar = asChar_orDefault;
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L3(r5):
    st type = r5;
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L15() else L16();
  L7():
    match_arg = ldf `match.arg`;
    check L9() else D0();
  L8():
    r4 = dyn base1(<lang match.arg(type)>, <lang c("none", "gzip", "bzip2", "xz", "unknown")>);
    goto L3(r4);
  D0():
    deopt 3 [];
  L5(r13):
    st ans = r13;
    asChar1 = ld asChar;
    check L20() else D7();
  L9():
    p1 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r7 = dyn match_arg(p1);
    check L10() else D1();
  L15():
    from1 = ld from;
    check L17() else D4();
  L16():
    r12 = dyn base3(<lang memDecompress(from, type)>);
    goto L5(r12);
  D1():
    deopt 5 [r7];
  D4():
    deopt 22 [from1];
  D7():
    deopt 29 [asChar1];
  L10():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L17():
    from2 = force? from1;
    checkMissing(from2);
    type3 = ld type;
    check L18() else D5();
  L20():
    asChar2 = force? asChar1;
    checkMissing(asChar2);
    c2 = `as.logical`(asChar2);
    if c2 then L21() else L6();
  D5():
    deopt 24 [type3];
  L4(r9):
    match = ldf match in base;
    r11 = dyn match(r7, r9, NA_INT, NULL);
    check L14() else D3();
  L6():
    ans2 = ld ans;
    check L25() else D10();
  L11():
    c1 = ldf c in base;
    r10 = dyn c1("none", "gzip", "bzip2", "xz", "unknown");
    check L13() else D2();
  L12():
    r8 = dyn base2("none", "gzip", "bzip2", "xz", "unknown");
    goto L4(r8);
  L18():
    type4 = force? type3;
    checkMissing(type4);
    memDecompress = ldf memDecompress in base;
    r14 = dyn memDecompress(from2, type4);
    check L19() else D6();
  L21():
    rawToChar = ldf rawToChar;
    check L22() else D8();
  D2():
    deopt 14 [r10];
  D3():
    deopt 18 [r11];
  D6():
    deopt 27 [r14];
  D8():
    deopt 32 [];
  D10():
    deopt 35 [ans2];
  L13():
    goto L4(r10);
  L14():
    goto L3(r11);
  L19():
    goto L5(r14);
  L22():
    p2 = prom<V +>{
      ans = ld ans;
      ans1 = force? ans;
      checkMissing(ans1);
      return ans1;
    };
    r16 = dyn rawToChar(p2);
    check L23() else D9();
  L25():
    ans3 = force? ans2;
    checkMissing(ans3);
    popenv;
    return ans3;
  D9():
    deopt 34 [r16];
  L23():
    popenv;
    return r16;
  }
}