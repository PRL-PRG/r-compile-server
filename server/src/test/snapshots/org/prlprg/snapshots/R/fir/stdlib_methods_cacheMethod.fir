fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1725865323;
    st cacheMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1725865323(f, sig, def, args, fdef, inherited) {
  (reg f:*, reg sig:*, reg def:*, reg args:*, reg fdef:*, reg inherited:*) -+> V { var f:*, var sig:*, var def:*, var args:*, reg args_isMissing:L, reg args_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sig1:*, reg sig2:V, reg names:cls, reg r2:V, reg p:p(V +), var fdef:*, var inherited:*, reg inherited_isMissing:L, reg inherited_orDefault:*, reg environment:cls, reg fdef1:*, reg fdef2:V, reg p1:p(V +), reg r5:V, reg _cacheMethodInTable:cls, reg fdef3:*, reg fdef4:V, reg p2:p(V +), reg sig3:*, reg sig4:V, reg p3:p(V +), reg def1:*, reg def2:V, reg p4:p(V +), reg _getMethodsTable:cls, reg fdef5:*, reg fdef6:V, reg p5:p(V +), reg ev:*, reg ev1:V, reg p6:p(V +), reg inherited1:*, reg inherited2:V, reg p7:p(V +), reg r12:V, reg p8:p(V +), reg r14:V, reg inherited3:*, reg inherited4:V, reg r15:V, reg c:L, reg _cacheMethodInTable1:cls, reg fdef7:*, reg fdef8:V, reg p9:p(V +), reg sig5:*, reg sig6:V, reg p10:p(V +), reg def3:*, reg def4:V, reg p11:p(V +), reg _getMethodsTable1:cls, reg fdef9:*, reg fdef10:V, reg p12:p(V +), reg ev2:*, reg ev3:V, reg p13:p(V +), reg r21:V, reg p14:p(V +), reg r23:V |
    mkenv;
    st f = f;
    st sig = sig;
    st def = def;
    args_isMissing = missing.0(args);
    if args_isMissing then L0() else L1(args);
  L0():
    p = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      sig1 = ld sig;
      sig2 = force? sig1;
      checkMissing(sig2);
      names = ldf names in base;
      r2 = dyn names(sig2);
      goto L0(r2);
    L2():
      r = dyn base(<sym sig>);
      goto L0(r);
    };
    goto L1(p);
  L1(args_orDefault):
    st args = args_orDefault;
    st fdef = fdef;
    inherited_isMissing = missing.0(inherited);
    if inherited_isMissing then L2(FALSE) else L2(inherited);
  L2(inherited_orDefault):
    st inherited = inherited_orDefault;
    environment = ldf environment;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p1 = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r5 = dyn environment(p1);
    check L5() else D1();
  D1():
    deopt 3 [r5];
  L5():
    st ev = r5;
    _cacheMethodInTable = ldf `.cacheMethodInTable`;
    check L6() else D2();
  D2():
    deopt 6 [];
  L6():
    p2 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    p3 = prom<V +>{
      sig3 = ld sig;
      sig4 = force? sig3;
      checkMissing(sig4);
      return sig4;
    };
    p4 = prom<V +>{
      def1 = ld def;
      def2 = force? def1;
      checkMissing(def2);
      return def2;
    };
    p8 = prom<V +>{
      _getMethodsTable = ldf `.getMethodsTable`;
      p5 = prom<V +>{
        fdef5 = ld fdef;
        fdef6 = force? fdef5;
        checkMissing(fdef6);
        return fdef6;
      };
      p6 = prom<V +>{
        ev = ld ev;
        ev1 = force? ev;
        checkMissing(ev1);
        return ev1;
      };
      p7 = prom<V +>{
        inherited1 = ld inherited;
        inherited2 = force? inherited1;
        checkMissing(inherited2);
        return inherited2;
      };
      r12 = dyn _getMethodsTable[, , inherited](p5, p6, p7);
      return r12;
    };
    r14 = dyn _cacheMethodInTable(p2, p3, p4, p8);
    check L7() else D3();
  D3():
    deopt 11 [r14];
  L7():
    inherited3 = ld inherited;
    check L8() else D4();
  D4():
    deopt 12 [inherited3];
  L8():
    inherited4 = force? inherited3;
    checkMissing(inherited4);
    r15 = `!`(inherited4);
    c = `as.logical`(r15);
    if c then L9() else L3();
  L3():
    invisible.0();
    popenv;
    return NULL;
  L9():
    _cacheMethodInTable1 = ldf `.cacheMethodInTable`;
    check L10() else D5();
  D5():
    deopt 16 [];
  L10():
    p9 = prom<V +>{
      fdef7 = ld fdef;
      fdef8 = force? fdef7;
      checkMissing(fdef8);
      return fdef8;
    };
    p10 = prom<V +>{
      sig5 = ld sig;
      sig6 = force? sig5;
      checkMissing(sig6);
      return sig6;
    };
    p11 = prom<V +>{
      def3 = ld def;
      def4 = force? def3;
      checkMissing(def4);
      return def4;
    };
    p14 = prom<V +>{
      _getMethodsTable1 = ldf `.getMethodsTable`;
      p12 = prom<V +>{
        fdef9 = ld fdef;
        fdef10 = force? fdef9;
        checkMissing(fdef10);
        return fdef10;
      };
      p13 = prom<V +>{
        ev2 = ld ev;
        ev3 = force? ev2;
        checkMissing(ev3);
        return ev3;
      };
      r21 = dyn _getMethodsTable1[, , inherited](p12, p13, TRUE);
      return r21;
    };
    r23 = dyn _cacheMethodInTable1(p9, p10, p11, p14);
    check L11() else D6();
  D6():
    deopt 21 [r23];
  L11():
    popenv;
    return r23;
  }
}