fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner930206318;
    st `.restoreClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner930206318(def, where) {
  (reg def:*, reg where:*) -+> V { var def:*, var where:*, reg __:cls, reg r:V, reg message:cls, reg gettextf:cls, reg dQuote:cls, reg cl:*, reg cl1:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V, reg isClass:cls, reg cl2:*, reg cl3:V, reg p3:p(V +), reg where1:*, reg where2:V, reg p4:p(V +), reg r9:V, reg c:L, reg removeClass:cls, reg cl4:*, reg cl5:V, reg p5:p(V +), reg where3:*, reg where4:V, reg p6:p(V +), reg r12:V, reg assignClassDef:cls, reg cl6:*, reg cl7:V, reg p7:p(V +), reg def1:*, reg def2:V, reg p8:p(V +), reg where5:*, reg where6:V, reg p9:p(V +), reg r17:V |
    mkenv;
    st def = def;
    st where = where;
    __ = ldf `@` in base;
    r = dyn __(<sym def>, <sym className>);
    st cl = r;
    message = ldf message;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        dQuote = ldf dQuote;
        p = prom<V +>{
          cl = ld cl;
          cl1 = force? cl;
          checkMissing(cl1);
          return cl1;
        };
        r2 = dyn dQuote(p);
        return r2;
      };
      r4 = dyn gettextf("restoring definition of class %s", p1);
      return r4;
    };
    r6 = dyn message[, domain](p2, NA_LGL);
    check L3() else D1();
  D1():
    deopt 8 [r6];
  L3():
    isClass = ldf isClass;
    check L4() else D2();
  D2():
    deopt 10 [];
  L4():
    p3 = prom<V +>{
      cl2 = ld cl;
      cl3 = force? cl2;
      checkMissing(cl3);
      return cl3;
    };
    p4 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r9 = dyn isClass[, where](p3, p4);
    check L5() else D3();
  D3():
    deopt 14 [r9];
  L5():
    c = `as.logical`(r9);
    if c then L6() else L0();
  L0():
    goto L1();
  L1():
    assignClassDef = ldf assignClassDef;
    check L10() else D6();
  L6():
    removeClass = ldf removeClass;
    check L7() else D4();
  D4():
    deopt 16 [];
  D6():
    deopt 24 [];
  L7():
    p5 = prom<V +>{
      cl4 = ld cl;
      cl5 = force? cl4;
      checkMissing(cl5);
      return cl5;
    };
    p6 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r12 = dyn removeClass[, where](p5, p6);
    check L8() else D5();
  L10():
    p7 = prom<V +>{
      cl6 = ld cl;
      cl7 = force? cl6;
      checkMissing(cl7);
      return cl7;
    };
    p8 = prom<V +>{
      def1 = ld def;
      def2 = force? def1;
      checkMissing(def2);
      return def2;
    };
    p9 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r17 = dyn assignClassDef[, , where](p7, p8, p9);
    check L11() else D7();
  D5():
    deopt 20 [r12];
  D7():
    deopt 29 [r17];
  L8():
    goto L1();
  L11():
    popenv;
    return r17;
  }
}