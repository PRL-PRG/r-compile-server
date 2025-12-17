fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner879509502;
    st `.MlistDefunct` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner879509502(this, instead) {
  (reg this:*, reg instead:*) -+> V { var this:*, reg this_isMissing:L, reg this_orDefault:*, var instead:*, reg __:cls, reg r:V, reg r1:cls, reg paste0:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg this1:*, reg this2:V, reg c1:L, reg c2:L, reg gettextf:cls, reg dQuote:cls, reg this3:*, reg this4:V, reg p:p(V +), reg r8:V, reg p1:p(V +), reg r10:V, reg gettextf1:cls, reg deparse:cls, reg this5:*, reg this6:V, reg p2:p(V +), reg r12:V, reg p3:p(V +), reg r14:V, reg p4:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg missing1:cls, reg r18:V, reg r19:V, reg c3:L, reg gettextf2:cls, reg dQuote1:cls, reg instead1:*, reg instead2:V, reg p5:p(V +), reg r21:V, reg p6:p(V +), reg r23:V, reg p7:p(V +), reg r25:V, reg p8:p(V +), reg r27:V |
    mkenv;
    this_isMissing = missing.0(this);
    if this_isMissing then L0("<default>") else L0(this);
  L0(this_orDefault):
    st this = this_orDefault;
    st instead = instead;
    __ = ldf `::`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn __("base", ".Defunct");
    check L2() else D1();
  D1():
    deopt 4 [r];
  L2():
    checkFun.0(r);
    r1 = r as cls;
    p8 = prom<V +>{
      paste0 = ldf paste0;
      p4 = prom<V +>{
        sym = ldf missing;
        base = ldf missing in base;
        guard = `==`.4(sym, base);
        if guard then L4() else L5();
      L0(r3):
        c = `as.logical`(r3);
        if c then L6() else L1();
      L4():
        missing = ldf missing in base;
        r4 = dyn missing(<sym this>);
        goto L0(r4);
      L5():
        r2 = dyn base(<sym this>);
        goto L0(r2);
      L1():
        sym1 = ldf `is.character`;
        base1 = ldf `is.character` in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L8() else L9();
      L6():
        return "Use of the \"MethodsList\" meta data objects is defunct.";
      L2(r6):
        c2 = `as.logical`(r6);
        if c2 then L10() else L3();
      L8():
        this1 = ld this;
        this2 = force? this1;
        checkMissing(this2);
        c1 = `is.character`(this2);
        goto L2(c1);
      L9():
        r5 = dyn base1(<sym this>);
        goto L2(r5);
      L3():
        gettextf1 = ldf gettextf;
        p3 = prom<V +>{
          deparse = ldf deparse;
          p2 = prom<V +>{
            this5 = ld this;
            this6 = force? this5;
            checkMissing(this6);
            return this6;
          };
          r12 = dyn deparse(p2);
          return r12;
        };
        r14 = dyn gettextf1("In %s: use of \"MethodsList\" metadata objects is defunct.", p3);
        return r14;
      L10():
        gettextf = ldf gettextf;
        p1 = prom<V +>{
          dQuote = ldf dQuote;
          p = prom<V +>{
            this3 = ld this;
            this4 = force? this3;
            checkMissing(this4);
            return this4;
          };
          r8 = dyn dQuote(p);
          return r8;
        };
        r10 = dyn gettextf("%s, along with other use of the \"MethodsList\" metadata objects, is defunct.", p1);
        return r10;
      };
      p7 = prom<V +>{
        sym2 = ldf missing;
        base2 = ldf missing in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L2() else L3();
      L0(r17):
        r19 = `!`(r17);
        c3 = `as.logical`(r19);
        if c3 then L4() else L1();
      L2():
        missing1 = ldf missing in base;
        r18 = dyn missing1(<sym instead>);
        goto L0(r18);
      L3():
        r16 = dyn base2(<sym instead>);
        goto L0(r16);
      L1():
        invisible.0();
        return NULL;
      L4():
        gettextf2 = ldf gettextf;
        p6 = prom<V +>{
          dQuote1 = ldf dQuote;
          p5 = prom<V +>{
            instead1 = ld instead;
            instead2 = force? instead1;
            checkMissing(instead2);
            return instead2;
          };
          r21 = dyn dQuote1(p5);
          return r21;
        };
        r23 = dyn gettextf2("Use %s instead. ", p6);
        return r23;
      };
      r25 = dyn paste0(p4, " ", p7, "See ?MethodsList.");
      return r25;
    };
    r27 = dyn r1[msg](p8);
    check L3() else D2();
  D2():
    deopt 8 [r27];
  L3():
    popenv;
    return r27;
  }
}