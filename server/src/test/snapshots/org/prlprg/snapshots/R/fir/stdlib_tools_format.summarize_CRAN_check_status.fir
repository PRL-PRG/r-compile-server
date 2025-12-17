fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1049023821;
    st `format.summarize_CRAN_check_status` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1049023821(x, header, `...`) {
  (reg x:*, reg header:*, reg ddd:dots) -+> V { var x:*, var header:*, reg header_isMissing:L, reg header_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg header1:*, reg header2:V, reg is_na:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg length:cls, reg r5:V, reg r6:V, reg header3:*, reg header4:V, reg c1:L, reg sprintf:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x3:*, reg x4:V, reg names:cls, reg r10:V, reg p:p(V +), reg r12:V, reg sprintf1:cls, reg s:*, reg s1:V, reg p1:p(V +), reg gsub:cls, reg s2:*, reg s3:V, reg p2:p(V +), reg r15:V, reg p3:p(V +), reg x5:*, reg x6:V, reg p4:p(V +), reg r18:V, reg x7:*, reg x8:V |
    mkenv;
    st x = x;
    header_isMissing = missing.0(header);
    if header_isMissing then L0(NA_LGL) else L0(header);
  L0(header_orDefault):
    st header = header_orDefault;
    st `...` = ddd;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(r1):
    c = `as.logical`(r1);
    if c then L11() else L2();
  L7():
    header1 = ld header;
    check L9() else D0();
  L8():
    r = dyn base(<sym header>);
    goto L1(r);
  D0():
    deopt 2 [header1];
  L2():
    goto L4();
  L4():
    header3 = ld header;
    check L17() else D4();
  L9():
    header2 = force? header1;
    checkMissing(header2);
    is_na = ldf `is.na` in base;
    r2 = dyn is_na(header2);
    check L10() else D1();
  L11():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  D1():
    deopt 5 [r2];
  D4():
    deopt 17 [header3];
  L3(r4):
    r6 = `>`(r4, 1);
    st header = r6;
    goto L4();
  L10():
    goto L1(r2);
  L12():
    x1 = ld x;
    check L14() else D2();
  L13():
    r3 = dyn base1(<sym x>);
    goto L3(r3);
  L17():
    header4 = force? header3;
    checkMissing(header4);
    c1 = `as.logical`(header4);
    if c1 then L18() else L5();
  D2():
    deopt 8 [x1];
  L5():
    goto L6();
  L6():
    x7 = ld x;
    check L24() else D9();
  L14():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r5 = dyn length(x2);
    check L15() else D3();
  L18():
    sprintf = ldf sprintf;
    check L19() else D5();
  D3():
    deopt 11 [r5];
  D5():
    deopt 20 [];
  D9():
    deopt 35 [x7];
  L15():
    goto L3(r5);
  L19():
    p = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      names = ldf names in base;
      r10 = dyn names(x4);
      goto L0(r10);
    L2():
      r8 = dyn base2(<sym x>);
      goto L0(r8);
    };
    r12 = dyn sprintf("Package: %s", p);
    check L20() else D6();
  L24():
    x8 = force? x7;
    checkMissing(x8);
    popenv;
    return x8;
  D6():
    deopt 23 [r12];
  L20():
    st s = r12;
    sprintf1 = ldf sprintf;
    check L21() else D7();
  D7():
    deopt 26 [];
  L21():
    p1 = prom<V +>{
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      return s1;
    };
    p3 = prom<V +>{
      gsub = ldf gsub;
      p2 = prom<V +>{
        s2 = ld s;
        s3 = force? s2;
        checkMissing(s3);
        return s3;
      };
      r15 = dyn gsub(".", "*", p2);
      return r15;
    };
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r18 = dyn sprintf1("%s\n%s\n\n%s", p1, p3, p4);
    check L22() else D8();
  D8():
    deopt 31 [r18];
  L22():
    st x = r18;
    goto L6();
  }
}