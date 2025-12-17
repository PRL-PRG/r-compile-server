fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.check_package_code_attach` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg r:cls, reg Filter:cls, reg length:*, reg length1:V, reg p:p(V +), reg _find_calls_in_package_code:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg predicate:*, reg predicate1:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg l:*, reg class__:cls, reg r7:V, reg calls:*, reg calls1:V |
    mkenv;
    st dir = dir;
    r = clos inner3708401697;
    st predicate = r;
    Filter = ldf Filter;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    p3 = prom<V +>{
      _find_calls_in_package_code = ldf `.find_calls_in_package_code`;
      p1 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      p2 = prom<V +>{
        predicate = ld predicate;
        predicate1 = force? predicate;
        checkMissing(predicate1);
        return predicate1;
      };
      r4 = dyn _find_calls_in_package_code[, , recursive](p1, p2, TRUE);
      return r4;
    };
    r6 = dyn Filter(p, p3);
    check L1() else D1();
  D1():
    deopt 7 [r6];
  L1():
    st calls = r6;
    l = ld calls;
    class__ = ldf `class<-`;
    check L2() else D2();
  D2():
    deopt 12 ["check_package_code_attach", l, "check_package_code_attach"];
  L2():
    r7 = dyn class__(l, NULL, "check_package_code_attach");
    check L3() else D3();
  D3():
    deopt 14 ["check_package_code_attach", r7];
  L3():
    st calls = r7;
    calls = ld calls;
    check L4() else D4();
  D4():
    deopt 16 [calls];
  L4():
    calls1 = force? calls;
    checkMissing(calls1);
    popenv;
    return calls1;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg as_character:cls, reg r5:V, reg length:cls, reg r6:V, reg r7:V, reg c1:L, reg c3:V, reg x:*, reg x1:V, reg r8:V, reg c4:L, reg c5:V |
    mkenv;
    st e = e;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r7 = `==`(r1, 1);
    c1 = `as.logical`(r7);
    if c1 then L14() else L3(c1);
  L4():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L5():
    r = dyn base(<lang `<-`(x, as.character(`[[`(e, 1)))>);
    goto L0(r);
  L1(r3):
    st x = r3;
    length = ldf length in base;
    r6 = dyn length(r3);
    check L13() else D2();
  L3(c3):
    visible.0();
    popenv;
    return c3;
  L6():
    e1 = ld e;
    check L8() else D0();
  L7():
    r2 = dyn base1(<lang `[[`(e, 1)>);
    goto L1(r2);
  L14():
    x = ld x;
    check L15() else D3();
  D0():
    deopt 4 [e1];
  D2():
    deopt 13 [r6];
  D3():
    deopt 16 [c1, x];
  L8():
    e2 = force? e1;
    checkMissing(e2);
    c = `is.object`(e2);
    if c then L9() else L10(e2);
  L13():
    goto L0(r6);
  L15():
    x1 = force? x;
    checkMissing(x1);
    r8 = `==`(x1, "attach");
    c4 = `as.logical`(r8);
    c5 = `&&`(c1, c4);
    goto L3(c5);
  L2(dx1):
    as_character = ldf `as.character` in base;
    r5 = dyn as_character(dx1);
    check L12() else D1();
  L9():
    dr = tryDispatchBuiltin.1("[[", e2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(e4):
    __ = ldf `[[` in base;
    r4 = dyn __(e4, 1);
    goto L2(r4);
  D1():
    deopt 10 [r5];
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L12():
    goto L1(r5);
  }
}