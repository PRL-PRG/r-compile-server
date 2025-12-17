fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.hasCodeTools` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg isTRUE:cls, reg __hasCodeTools:*, reg __hasCodeTools1:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg _assignOverBinding:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg list_files:cls, reg system_file:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg length:cls, reg r8:V, reg r9:V, reg p2:p(V +), reg _methodsNamespace:*, reg _methodsNamespace1:V, reg p3:p(V +), reg r12:V, reg __hasCodeTools2:*, reg __hasCodeTools3:V |
    mkenv;
    isTRUE = ldf isTRUE;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      __hasCodeTools = ld `..hasCodeTools`;
      __hasCodeTools1 = force? __hasCodeTools;
      checkMissing(__hasCodeTools1);
      return __hasCodeTools1;
    };
    r1 = dyn isTRUE(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L4() else L0();
  L0():
    goto L1();
  L1():
    __hasCodeTools2 = ld `..hasCodeTools`;
    check L8() else D4();
  L4():
    _assignOverBinding = ldf `.assignOverBinding`;
    check L5() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 14 [__hasCodeTools2];
  L5():
    p2 = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      r9 = `>`(r4, 0.0);
      return r9;
    L1():
      list_files = ldf `list.files`;
      p1 = prom<V +>{
        system_file = ldf `system.file`;
        r5 = dyn system_file[package]("codetools");
        return r5;
      };
      r7 = dyn list_files(p1);
      length = ldf length in base;
      r8 = dyn length(r7);
      goto L0(r8);
    L2():
      r3 = dyn base(<lang list.files(system.file(package="codetools"))>);
      goto L0(r3);
    };
    p3 = prom<V +>{
      _methodsNamespace = ld `.methodsNamespace`;
      _methodsNamespace1 = force? _methodsNamespace;
      checkMissing(_methodsNamespace1);
      return _methodsNamespace1;
    };
    r12 = dyn _assignOverBinding("..hasCodeTools", p2, p3, FALSE);
    check L6() else D3();
  L8():
    __hasCodeTools3 = force? __hasCodeTools2;
    checkMissing(__hasCodeTools3);
    popenv;
    return __hasCodeTools3;
  D3():
    deopt 11 [r12];
  L6():
    goto L1();
  }
}