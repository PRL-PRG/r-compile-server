fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.subdir_tests` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg unlist:cls, reg lapply:cls, reg which:cls, reg lengths:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r4:V, reg r5:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg _fmt:*, reg _fmt1:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg as_character:cls, reg r13:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    r = clos inner3002224933;
    st `.fmt` = r;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r2):
    popenv;
    return r2;
  L1():
    unlist = ldf unlist;
    check L3() else D0();
  L2():
    r1 = dyn base(<lang unlist(lapply(which(`>`(lengths(x), 0)), .fmt))>);
    goto L0(r1);
  D0():
    deopt 6 [];
  L3():
    p4 = prom<V +>{
      lapply = ldf lapply;
      p2 = prom<V +>{
        which = ldf which;
        p1 = prom<V +>{
          lengths = ldf lengths;
          p = prom<V +>{
            x1 = ld x;
            x2 = force? x1;
            checkMissing(x2);
            return x2;
          };
          r4 = dyn lengths(p);
          r5 = `>`(r4, 0);
          return r5;
        };
        r7 = dyn which(p1);
        return r7;
      };
      p3 = prom<V +>{
        _fmt = ld `.fmt`;
        _fmt1 = force? _fmt;
        checkMissing(_fmt1);
        return _fmt1;
      };
      r10 = dyn lapply(p2, p3);
      return r10;
    };
    r12 = dyn unlist(p4);
    check L4() else D1();
  D1():
    deopt 8 [r12];
  L4():
    as_character = ldf `as.character` in base;
    r13 = dyn as_character(r12);
    check L5() else D2();
  D2():
    deopt 10 [r13];
  L5():
    goto L0(r13);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x:*, reg x1:V, reg names:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg sprintf:cls, reg tag:*, reg tag1:V, reg p:p(V +), reg r9:V, reg _pretty_format:cls, reg x2:*, reg x3:V, reg c1:L, reg x5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i3:*, reg i4:V, reg __1:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg c2:cls, reg r13:V |
    mkenv;
    st i = i;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `is.object`(r1);
    if c then L7() else L8(r1);
  L3():
    x = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x];
  L1(dx1):
    st tag = dx1;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L5():
    x1 = force? x;
    checkMissing(x1);
    names = ldf names in base;
    r2 = dyn names(x1);
    check L6() else D1();
  L7():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(r4):
    i1 = ld i;
    check L10() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 6 [r4, i1];
  L2(r7):
    popenv;
    return r7;
  L6():
    goto L0(r2);
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L10():
    i2 = force? i1;
    __ = ldf `[` in base;
    r5 = dyn __(r4, i2);
    goto L1(r5);
  L11():
    sprintf = ldf sprintf;
    check L13() else D3();
  L12():
    r6 = dyn base1(<lang sprintf("Subdirectory '%s' contains invalid file names:", tag)>, <lang .pretty_format(`[[`(x, i))>);
    goto L2(r6);
  D3():
    deopt 13 [];
  L13():
    p = prom<V +>{
      tag = ld tag;
      tag1 = force? tag;
      checkMissing(tag1);
      return tag1;
    };
    r9 = dyn sprintf("Subdirectory '%s' contains invalid file names:", p);
    check L14() else D4();
  D4():
    deopt 16 [r9];
  L14():
    _pretty_format = ldf `.pretty_format`;
    check L15() else D5();
  D5():
    deopt 18 [];
  L15():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      c1 = `is.object`(x3);
      if c1 then L1() else L2(x3);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", x3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x5):
      i3 = ld i;
      i4 = force? i3;
      __1 = ldf `[[` in base;
      r10 = dyn __1(x5, i4);
      goto L0(r10);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r12 = dyn _pretty_format(p1);
    check L16() else D6();
  D6():
    deopt 20 [r12];
  L16():
    c2 = ldf c in base;
    r13 = dyn c2(r9, r12);
    check L17() else D7();
  D7():
    deopt 22 [r13];
  L17():
    goto L2(r13);
  }
}