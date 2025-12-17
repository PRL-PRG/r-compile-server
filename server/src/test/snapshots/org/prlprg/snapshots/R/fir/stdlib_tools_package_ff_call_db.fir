fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st package_ff_call_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg r3:cls, reg _find_calls_in_package_code:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg predicate:*, reg predicate1:V, reg p1:p(V +), reg r6:V, reg unlist:cls, reg Filter:cls, reg length:*, reg length1:V, reg p2:p(V +), reg calls:*, reg calls1:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg calls2:*, reg calls3:V, reg length2:cls, reg r14:V, reg r15:V, reg c1:L, reg dir3:*, reg dir4:V, reg l:*, reg attr__:cls, reg r18:V, reg calls4:*, reg calls5:V |
    mkenv;
    st dir = dir;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st ff_call_names = r1;
    r3 = clos inner3708401697;
    st predicate = r3;
    _find_calls_in_package_code = ldf `.find_calls_in_package_code`;
    check L7() else D1();
  L4():
    c = ldf c in base;
    r2 = dyn c(".C", ".Call", ".Fortran", ".External", "base::.C", "base::.Call", "base::.Fortran", "base::.External", ".Call.graphics", ".External.graphics", ".External2");
    check L6() else D0();
  L5():
    r = dyn base(".C", ".Call", ".Fortran", ".External", "base::.C", "base::.Call", "base::.Fortran", "base::.External", ".Call.graphics", ".External.graphics", ".External2");
    goto L0(r);
  D0():
    deopt 14 [r2];
  D1():
    deopt 20 [];
  L6():
    goto L0(r2);
  L7():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p1 = prom<V +>{
      predicate = ld predicate;
      predicate1 = force? predicate;
      checkMissing(predicate1);
      return predicate1;
    };
    r6 = dyn _find_calls_in_package_code[, predicate, recursive](p, p1, TRUE);
    check L8() else D2();
  D2():
    deopt 26 [r6];
  L8():
    st calls = r6;
    unlist = ldf unlist;
    check L9() else D3();
  D3():
    deopt 29 [];
  L9():
    p4 = prom<V +>{
      Filter = ldf Filter;
      p2 = prom<V +>{
        length = ld length;
        length1 = force? length;
        checkMissing(length1);
        return length1;
      };
      p3 = prom<V +>{
        calls = ld calls;
        calls1 = force? calls;
        checkMissing(calls1);
        return calls1;
      };
      r9 = dyn Filter(p2, p3);
      return r9;
    };
    r11 = dyn unlist(p4);
    check L10() else D4();
  D4():
    deopt 31 [r11];
  L10():
    st calls = r11;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L1(r13):
    r15 = `!`(r13);
    c1 = `as.logical`(r15);
    if c1 then L15() else L2();
  L11():
    calls2 = ld calls;
    check L13() else D5();
  L12():
    r12 = dyn base1(<sym calls>);
    goto L1(r12);
  D5():
    deopt 35 [calls2];
  L2():
    dir3 = ld dir;
    check L18() else D7();
  L13():
    calls3 = force? calls2;
    checkMissing(calls3);
    length2 = ldf length in base;
    r14 = dyn length2(calls3);
    check L14() else D6();
  L15():
    popenv;
    return NULL;
  D6():
    deopt 38 [r14];
  D7():
    deopt 45 [dir3];
  L14():
    goto L1(r14);
  L18():
    dir4 = force? dir3;
    checkMissing(dir4);
    l = ld calls;
    attr__ = ldf `attr<-`;
    check L19() else D8();
  D8():
    deopt 48 [dir4, l, dir4];
  L19():
    r18 = dyn attr__(l, NULL, "dir", dir4);
    check L20() else D9();
  D9():
    deopt 51 [dir4, r18];
  L20():
    st calls = r18;
    calls4 = ld calls;
    check L21() else D10();
  D10():
    deopt 53 [calls4];
  L21():
    calls5 = force? calls4;
    checkMissing(calls5);
    popenv;
    return calls5;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c8:L, reg r7:V, reg deparse:cls, reg e3:*, reg e4:V, reg c9:L, reg e6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg p:p(V +), reg r10:V, reg c10:L, reg c12:L, reg r12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c14:L, reg dx3:V, reg __1:cls, reg r13:V, reg ff_call_names:*, reg ff_call_names1:V, reg match:cls, reg r14:V, reg is_na:cls, reg r15:V, reg r16:V, reg c15:L, reg c16:V |
    mkenv;
    st e = e;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r3 = `>`(r1, 1);
    c = `as.logical`(r3);
    if c then L9() else L1(c);
  L5():
    e1 = ld e;
    check L7() else D0();
  L6():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1(c2):
    popenv;
    return c2;
  L7():
    e2 = force? e1;
    checkMissing(e2);
    length = ldf length in base;
    r2 = dyn length(e2);
    check L8() else D1();
  L9():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  D1():
    deopt 5 [r2];
  L2(c5, r5):
    r16 = `!`(r5);
    c15 = `as.logical`(r16);
    c16 = `&&`(c5, c15);
    goto L1(c16);
  L8():
    goto L0(r2);
  L10():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L11():
    r4 = dyn base1(<lang match(`[`(deparse(`[[`(e, 1)), 1), ff_call_names)>);
    goto L2(c, r4);
  L3(c8, r7):
    is_na = ldf `is.na` in base;
    r15 = dyn is_na(r7);
    check L21() else D6();
  L12():
    deparse = ldf deparse;
    check L14() else D2();
  L13():
    r6 = dyn base2(<lang `[`(deparse(`[[`(e, 1)), 1)>, <sym ff_call_names>);
    goto L3(c, r6);
  D2():
    deopt 13 [c];
  D6():
    deopt 26 [c8, r15];
  L14():
    p = prom<V +>{
      e3 = ld e;
      e4 = force? e3;
      checkMissing(e4);
      c9 = `is.object`(e4);
      if c9 then L1() else L2(e4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", e4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(e6):
      __ = ldf `[[` in base;
      r8 = dyn __(e6, 1);
      goto L0(r8);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r10 = dyn deparse(p);
    check L15() else D3();
  L21():
    goto L2(c8, r15);
  D3():
    deopt 15 [c, r10];
  L15():
    c10 = `is.object`(r10);
    if c10 then L16() else L17(c, r10);
  L4(c14, dx3):
    ff_call_names = ld ff_call_names;
    check L19() else D4();
  L16():
    dr2 = tryDispatchBuiltin.1("[", r10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L18() else L17(c, dr2);
  L17(c12, r12):
    __1 = ldf `[` in base;
    r13 = dyn __1(r12, 1);
    goto L4(c12, r13);
  D4():
    deopt 19 [c14, ff_call_names];
  L18():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(c, dx2);
  L19():
    ff_call_names1 = force? ff_call_names;
    checkMissing(ff_call_names1);
    match = ldf match in base;
    r14 = dyn match(dx3, ff_call_names1, NA_INT, NULL);
    check L20() else D5();
  D5():
    deopt 24 [c14, r14];
  L20():
    goto L3(c14, r14);
  }
}