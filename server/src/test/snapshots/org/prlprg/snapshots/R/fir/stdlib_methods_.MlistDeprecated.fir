fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner879509502;
    st `.MlistDeprecated` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner879509502(this, instead) {
  (reg this:*, reg instead:*) -+> V { var this:*, reg this_isMissing:L, reg this_orDefault:*, var instead:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg this1:*, reg this2:V, reg c:L, reg c1:L, reg exists:cls, reg this3:*, reg this4:V, reg p:p(V +), reg _MlistDepTable:*, reg _MlistDepTable1:V, reg p1:p(V +), reg r4:V, reg c2:L, reg assign:cls, reg this5:*, reg this6:V, reg p2:p(V +), reg _MlistDepTable2:*, reg _MlistDepTable3:V, reg p3:p(V +), reg r9:V, reg __:cls, reg r11:V, reg r12:cls, reg paste0:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg missing:cls, reg r15:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg this7:*, reg this8:V, reg c4:L, reg c5:L, reg gettextf:cls, reg dQuote:cls, reg this9:*, reg this10:V, reg p4:p(V +), reg r19:V, reg p5:p(V +), reg r21:V, reg gettextf1:cls, reg deparse:cls, reg this11:*, reg this12:V, reg p6:p(V +), reg r23:V, reg p7:p(V +), reg r25:V, reg p8:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg missing1:cls, reg r29:V, reg r30:V, reg c6:L, reg gettextf2:cls, reg dQuote1:cls, reg instead1:*, reg instead2:V, reg p9:p(V +), reg r32:V, reg p10:p(V +), reg r34:V, reg p11:p(V +), reg r36:V, reg p12:p(V +), reg r38:V |
    mkenv;
    this_isMissing = missing.0(this);
    if this_isMissing then L0("<default>") else L0(this);
  L0(this_orDefault):
    st this = this_orDefault;
    st instead = instead;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L9() else L2();
  L6():
    this1 = ld this;
    check L8() else D0();
  L7():
    r = dyn base(<sym this>);
    goto L1(r);
  D0():
    deopt 1 [this1];
  L2():
    goto L5();
  L5():
    __ = ldf `::`;
    check L18() else D5();
  L8():
    this2 = force? this1;
    checkMissing(this2);
    c = `is.character`(this2);
    goto L1(c);
  L9():
    exists = ldf exists;
    check L10() else D1();
  D1():
    deopt 5 [];
  D5():
    deopt 25 [];
  L10():
    p = prom<V +>{
      this3 = ld this;
      this4 = force? this3;
      checkMissing(this4);
      return this4;
    };
    p1 = prom<V +>{
      _MlistDepTable = ld `.MlistDepTable`;
      _MlistDepTable1 = force? _MlistDepTable;
      checkMissing(_MlistDepTable1);
      return _MlistDepTable1;
    };
    r4 = dyn exists[, envir, inherits](p, p1, FALSE);
    check L11() else D2();
  L18():
    r11 = dyn __("base", ".Deprecated");
    check L19() else D6();
  D2():
    deopt 11 [r4];
  D6():
    deopt 28 [r11];
  L11():
    c2 = `as.logical`(r4);
    if c2 then L12() else L3();
  L19():
    checkFun.0(r11);
    r12 = r11 as cls;
    p12 = prom<V +>{
      paste0 = ldf paste0;
      p8 = prom<V +>{
        sym1 = ldf missing;
        base1 = ldf missing in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L4() else L5();
      L0(r14):
        c3 = `as.logical`(r14);
        if c3 then L6() else L1();
      L4():
        missing = ldf missing in base;
        r15 = dyn missing(<sym this>);
        goto L0(r15);
      L5():
        r13 = dyn base1(<sym this>);
        goto L0(r13);
      L1():
        sym2 = ldf `is.character`;
        base2 = ldf `is.character` in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L8() else L9();
      L6():
        return "Use of the \"MethodsList\" meta data objects is deprecated.";
      L2(r17):
        c5 = `as.logical`(r17);
        if c5 then L10() else L3();
      L8():
        this7 = ld this;
        this8 = force? this7;
        checkMissing(this8);
        c4 = `is.character`(this8);
        goto L2(c4);
      L9():
        r16 = dyn base2(<sym this>);
        goto L2(r16);
      L3():
        gettextf1 = ldf gettextf;
        p7 = prom<V +>{
          deparse = ldf deparse;
          p6 = prom<V +>{
            this11 = ld this;
            this12 = force? this11;
            checkMissing(this12);
            return this12;
          };
          r23 = dyn deparse(p6);
          return r23;
        };
        r25 = dyn gettextf1("In %s: use of \"MethodsList\" metadata objects is deprecated.", p7);
        return r25;
      L10():
        gettextf = ldf gettextf;
        p5 = prom<V +>{
          dQuote = ldf dQuote;
          p4 = prom<V +>{
            this9 = ld this;
            this10 = force? this9;
            checkMissing(this10);
            return this10;
          };
          r19 = dyn dQuote(p4);
          return r19;
        };
        r21 = dyn gettextf("%s, along with other use of the \"MethodsList\" metadata objects, is deprecated.", p5);
        return r21;
      };
      p11 = prom<V +>{
        sym3 = ldf missing;
        base3 = ldf missing in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L2() else L3();
      L0(r28):
        r30 = `!`(r28);
        c6 = `as.logical`(r30);
        if c6 then L4() else L1();
      L2():
        missing1 = ldf missing in base;
        r29 = dyn missing1(<sym instead>);
        goto L0(r29);
      L3():
        r27 = dyn base3(<sym instead>);
        goto L0(r27);
      L1():
        invisible.0();
        return NULL;
      L4():
        gettextf2 = ldf gettextf;
        p10 = prom<V +>{
          dQuote1 = ldf dQuote;
          p9 = prom<V +>{
            instead1 = ld instead;
            instead2 = force? instead1;
            checkMissing(instead2);
            return instead2;
          };
          r32 = dyn dQuote1(p9);
          return r32;
        };
        r34 = dyn gettextf2("Use %s instead. ", p10);
        return r34;
      };
      r36 = dyn paste0(p8, "\n ", p11, "See ?MethodsList. (This warning is shown once per session.)");
      return r36;
    };
    r38 = dyn r12[msg](p12);
    check L20() else D7();
  D7():
    deopt 32 [r38];
  L3():
    assign = ldf assign;
    check L15() else D3();
  L12():
    popenv;
    return NULL;
  L20():
    popenv;
    return r38;
  D3():
    deopt 16 [];
  L15():
    p2 = prom<V +>{
      this5 = ld this;
      this6 = force? this5;
      checkMissing(this6);
      return this6;
    };
    p3 = prom<V +>{
      _MlistDepTable2 = ld `.MlistDepTable`;
      _MlistDepTable3 = force? _MlistDepTable2;
      checkMissing(_MlistDepTable3);
      return _MlistDepTable3;
    };
    r9 = dyn assign[, , envir](p2, TRUE, p3);
    check L16() else D4();
  D4():
    deopt 21 [r9];
  L16():
    goto L5();
  }
}