fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1355295490;
    st srcfilealias = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1355295490(filename, srcfile) {
  (reg filename:*, reg srcfile:*) -+> V { var filename:*, var srcfile:*, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg filename1:*, reg filename2:V, reg c:L, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg filename3:*, reg filename4:V, reg length:cls, reg r5:V, reg r6:V, reg p1:p(V +), reg r8:V, reg new_env:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg emptyenv:cls, reg r11:V, reg p2:p(V +), reg r13:V, reg filename5:*, reg filename6:V, reg l:*, reg c1:L, reg filename8:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r14:V, reg srcfile1:*, reg srcfile2:V, reg l3:*, reg c2:L, reg srcfile4:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg c3:cls, reg r18:V, reg l6:*, reg class__:cls, reg r19:V, reg e:*, reg e1:V |
    mkenv;
    st filename = filename;
    st srcfile = srcfile;
    stopifnot = ldf stopifnot;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sym = ldf `is.character`;
      base = ldf `is.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      filename1 = ld filename;
      filename2 = force? filename1;
      checkMissing(filename2);
      c = `is.character`(filename2);
      goto L0(c);
    L2():
      r = dyn base(<sym filename>);
      goto L0(r);
    };
    p1 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r4):
      r6 = `==`(r4, 1);
      return r6;
    L1():
      filename3 = ld filename;
      filename4 = force? filename3;
      checkMissing(filename4);
      length = ldf length in base;
      r5 = dyn length(filename4);
      goto L0(r5);
    L2():
      r3 = dyn base1(<sym filename>);
      goto L0(r3);
    };
    r8 = dyn stopifnot(p, p1);
    check L2() else D1();
  D1():
    deopt 4 [r8];
  L2():
    new_env = ldf `new.env`;
    check L3() else D2();
  D2():
    deopt 6 [];
  L3():
    p2 = prom<V +>{
      sym2 = ldf emptyenv;
      base2 = ldf emptyenv in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      emptyenv = ldf emptyenv in base;
      r11 = dyn emptyenv();
      goto L0(r11);
    L2():
      r9 = dyn base2();
      goto L0(r9);
    };
    r13 = dyn new_env[parent](p2);
    check L4() else D3();
  D3():
    deopt 9 [r13];
  L4():
    st e = r13;
    filename5 = ld filename;
    check L5() else D4();
  D4():
    deopt 11 [filename5];
  L5():
    filename6 = force? filename5;
    checkMissing(filename6);
    l = ld e;
    c1 = `is.object`(l);
    if c1 then L7() else L8(filename6, l);
  L6(dx1):
    st e = dx1;
    srcfile1 = ld srcfile;
    check L10() else D5();
  L7():
    dr = tryDispatchBuiltin.0("$<-", l, filename6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(filename6, dr);
  L8(filename8, l2):
    r14 = `$<-`(l2, <sym filename>, filename6);
    goto L6(r14);
  D5():
    deopt 16 [srcfile1];
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L10():
    srcfile2 = force? srcfile1;
    checkMissing(srcfile2);
    l3 = ld e;
    c2 = `is.object`(l3);
    if c2 then L12() else L13(srcfile2, l3);
  L11(dx3):
    st e = dx3;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L15() else L16();
  L12():
    dr2 = tryDispatchBuiltin.0("$<-", l3, srcfile2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13(srcfile2, dr2);
  L13(srcfile4, l5):
    r15 = `$<-`(l5, <sym original>, srcfile2);
    goto L11(r15);
  L0(r17):
    l6 = ld e;
    class__ = ldf `class<-`;
    check L18() else D7();
  L14():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx2);
  L15():
    c3 = ldf c in base;
    r18 = dyn c3("srcfilealias", "srcfile");
    check L17() else D6();
  L16():
    r16 = dyn base3("srcfilealias", "srcfile");
    goto L0(r16);
  D6():
    deopt 26 [r18];
  D7():
    deopt 28 [r17, l6, r17];
  L17():
    goto L0(r18);
  L18():
    r19 = dyn class__(l6, NULL, r17);
    check L19() else D8();
  D8():
    deopt 30 [r17, r19];
  L19():
    st e = r19;
    e = ld e;
    check L20() else D9();
  D9():
    deopt 32 [e];
  L20():
    e1 = force? e;
    checkMissing(e1);
    popenv;
    return e1;
  }
}