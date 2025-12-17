fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4135507135;
    st `unlist.relistable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4135507135(x, recursive, `use.names`) {
  (reg x:*, reg recursive:*, reg use_names:*) -+> V { var x:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, var `use.names`:*, reg use_names_isMissing:L, reg use_names_orDefault:*, reg recursive1:*, reg recursive2:V, reg r:V, reg c:L, reg warning:cls, reg r1:V, reg x1:*, reg x2:V, reg setdiff:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg class:cls, reg r5:V, reg p:p(V +), reg r7:V, reg l:*, reg class__:cls, reg r8:V, reg unlist:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg recursive3:*, reg recursive4:V, reg p2:p(V +), reg use_names1:*, reg use_names2:V, reg p3:p(V +), reg r12:V, reg skeleton:*, reg skeleton1:V, reg l1:*, reg attr__:cls, reg r13:V, reg result:*, reg result1:V |
    mkenv;
    st x = x;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(TRUE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    use_names_isMissing = missing.0(use_names);
    if use_names_isMissing then L1(TRUE) else L1(use_names);
  L1(use_names_orDefault):
    st `use.names` = use_names_orDefault;
    recursive1 = ld recursive;
    check L4() else D0();
  D0():
    deopt 0 [recursive1];
  L4():
    recursive2 = force? recursive1;
    checkMissing(recursive2);
    r = `!`(recursive2);
    c = `as.logical`(r);
    if c then L5() else L2();
  L2():
    goto L3();
  L3():
    x1 = ld x;
    check L9() else D3();
  L5():
    warning = ldf warning;
    check L6() else D1();
  D1():
    deopt 4 [];
  D3():
    deopt 9 [x1];
  L6():
    r1 = dyn warning("relist() requires recursively unlisted objects.");
    check L7() else D2();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    st skeleton = x2;
    setdiff = ldf setdiff;
    check L10() else D4();
  D2():
    deopt 6 [r1];
  D4():
    deopt 13 [];
  L7():
    goto L3();
  L10():
    p = prom<V +>{
      sym = ldf class;
      base = ldf class in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      class = ldf class in base;
      r5 = dyn class(x4);
      goto L0(r5);
    L2():
      r3 = dyn base(<sym x>);
      goto L0(r3);
    };
    r7 = dyn setdiff(p, "relistable");
    check L11() else D5();
  D5():
    deopt 16 [r7];
  L11():
    l = ld x;
    class__ = ldf `class<-`;
    check L12() else D6();
  D6():
    deopt 18 [r7, l, r7];
  L12():
    r8 = dyn class__(l, NULL, r7);
    check L13() else D7();
  D7():
    deopt 20 [r7, r8];
  L13():
    st x = r8;
    unlist = ldf unlist;
    check L14() else D8();
  D8():
    deopt 23 [];
  L14():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p2 = prom<V +>{
      recursive3 = ld recursive;
      recursive4 = force? recursive3;
      checkMissing(recursive4);
      return recursive4;
    };
    p3 = prom<V +>{
      use_names1 = ld `use.names`;
      use_names2 = force? use_names1;
      checkMissing(use_names2);
      return use_names2;
    };
    r12 = dyn unlist(p1, p2, p3);
    check L15() else D9();
  D9():
    deopt 27 [r12];
  L15():
    st result = r12;
    skeleton = ld skeleton;
    check L16() else D10();
  D10():
    deopt 29 [skeleton];
  L16():
    skeleton1 = force? skeleton;
    checkMissing(skeleton1);
    l1 = ld result;
    attr__ = ldf `attr<-`;
    check L17() else D11();
  D11():
    deopt 32 [skeleton1, l1, skeleton1];
  L17():
    r13 = dyn attr__(l1, NULL, "skeleton", skeleton1);
    check L18() else D12();
  D12():
    deopt 35 [skeleton1, r13];
  L18():
    st result = r13;
    result = ld result;
    check L19() else D13();
  D13():
    deopt 37 [result];
  L19():
    result1 = force? result;
    checkMissing(result1);
    popenv;
    return result1;
  }
}