fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner426905755;
    st removeGeneric = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner426905755(f, where) {
  (reg f:*, reg where:*) -+> V { var f:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg findFunction:cls, reg f1:*, reg f2:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r6:V, reg allEv:*, reg allEv1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg get:cls, reg f3:*, reg f4:V, reg p4:p(V +), reg maybeEv:*, reg maybeEv1:V, reg p5:p(V +), reg r9:V, reg is:cls, reg fdef:*, reg fdef1:V, reg p6:p(V +), reg r11:V, reg c1:L, reg is1:cls, reg fdef2:*, reg fdef3:V, reg p7:p(V +), reg r14:V, reg found:*, reg found1:V, reg c2:L, reg _removeMethodsMetaTable:cls, reg fdef4:*, reg fdef5:V, reg p8:p(V +), reg where3:*, reg where4:V, reg p9:p(V +), reg r17:V, reg methodsPackageMetaName:cls, reg __:cls, reg r18:V, reg p10:p(V +), reg __1:cls, reg r20:V, reg p11:p(V +), reg r22:V, reg exists:cls, reg oldMetaName:*, reg oldMetaName1:V, reg p12:p(V +), reg where5:*, reg where6:V, reg p13:p(V +), reg r25:V, reg c3:L, reg rm:cls, reg oldMetaName2:*, reg oldMetaName3:V, reg p14:p(V +), reg where7:*, reg where8:V, reg p15:p(V +), reg r28:V, reg _uncacheGeneric:cls, reg f5:*, reg f6:V, reg p16:p(V +), reg fdef6:*, reg fdef7:V, reg p17:p(V +), reg r32:V, reg rm1:cls, reg __2:cls, reg r33:V, reg p18:p(V +), reg where9:*, reg where10:V, reg p19:p(V +), reg r36:V, reg sym:cls, reg base:cls, reg guard:L, reg r38:V, reg r39:V, reg f7:*, reg f8:V, reg c4:L, reg r40:V, reg c5:L, reg deparse:cls, reg f9:*, reg f10:V, reg p20:p(V +), reg r42:V, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg f11:*, reg f12:V, reg p21:p(V +), reg r45:V, reg p22:p(V +), reg r47:V, reg p23:p(V +), reg r49:V, reg found2:*, reg found3:V |
    mkenv;
    st f = f;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L1(p1);
  L1(where_orDefault):
    st where = where_orDefault;
    st fdef = NULL;
    findFunction = ldf findFunction;
    check L14() else D0();
  D0():
    deopt 4 [];
  L14():
    p2 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r6 = dyn findFunction[, where](p2, p3);
    check L15() else D1();
  D1():
    deopt 8 [r6];
  L15():
    st allEv = r6;
    allEv = ld allEv;
    check L16() else D2();
  D2():
    deopt 10 [allEv];
  L16():
    allEv1 = force? allEv;
    checkMissing(allEv1);
    s = toForSeq(allEv1);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L17() else L6();
  L4():
    is1 = ldf is;
    check L25() else D7();
  L6():
    x = `[[`(s, i2, NULL, TRUE);
    st maybeEv = x;
    get = ldf get;
    check L18() else D3();
  L17():
    goto L4();
  D3():
    deopt 13 [i2];
  D7():
    deopt 31 [];
  L18():
    p4 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    p5 = prom<V +>{
      maybeEv = ld maybeEv;
      maybeEv1 = force? maybeEv;
      checkMissing(maybeEv1);
      return maybeEv1;
    };
    r9 = dyn get(p4, p5);
    check L19() else D4();
  L25():
    p7 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    r14 = dyn is1(p7, "genericFunction");
    check L26() else D8();
  D4():
    deopt 16 [i2, r9];
  D8():
    deopt 34 [r14];
  L19():
    st fdef = r9;
    is = ldf is;
    check L20() else D5();
  L26():
    st found = r14;
    found = ld found;
    check L27() else D9();
  D5():
    deopt 19 [i2];
  D9():
    deopt 36 [found];
  L20():
    p6 = prom<V +>{
      fdef = ld fdef;
      fdef1 = force? fdef;
      checkMissing(fdef1);
      return fdef1;
    };
    r11 = dyn is(p6, "genericFunction");
    check L21() else D6();
  L27():
    found1 = force? found;
    checkMissing(found1);
    c2 = `as.logical`(found1);
    if c2 then L28() else L7();
  D6():
    deopt 22 [i2, r11];
  L7():
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L44() else L45();
  L10():
    found2 = ld found;
    check L53() else D27();
  L21():
    c1 = `as.logical`(r11);
    if c1 then L22() else L3();
  L28():
    _removeMethodsMetaTable = ldf `.removeMethodsMetaTable`;
    check L29() else D10();
  D10():
    deopt 39 [];
  D27():
    deopt 96 [found2];
  L3():
    goto L2(i2);
  L11(r39):
    r40 = `!`(r39);
    c5 = `as.logical`(r40);
    if c5 then L47() else L12();
  L22():
    goto L4();
  L29():
    p8 = prom<V +>{
      fdef4 = ld fdef;
      fdef5 = force? fdef4;
      checkMissing(fdef5);
      return fdef5;
    };
    p9 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r17 = dyn _removeMethodsMetaTable(p8, p9);
    check L30() else D11();
  L44():
    f7 = ld f;
    check L46() else D22();
  L45():
    r38 = dyn base(<sym f>);
    goto L11(r38);
  L53():
    found3 = force? found2;
    checkMissing(found3);
    popenv;
    return found3;
  D11():
    deopt 42 [r17];
  D22():
    deopt 79 [f7];
  L12():
    goto L13();
  L13():
    warning = ldf warning;
    check L51() else D25();
  L30():
    methodsPackageMetaName = ldf methodsPackageMetaName;
    check L31() else D12();
  L46():
    f8 = force? f7;
    checkMissing(f8);
    c4 = `is.character`(f8);
    goto L11(c4);
  L47():
    deparse = ldf deparse;
    check L48() else D23();
  D12():
    deopt 44 [];
  D23():
    deopt 84 [];
  D25():
    deopt 91 [];
  L31():
    p10 = prom<V +>{
      __ = ldf `@` in base;
      r18 = dyn __(<sym fdef>, <sym generic>);
      return r18;
    };
    p11 = prom<V +>{
      __1 = ldf `@` in base;
      r20 = dyn __1(<sym fdef>, <sym package>);
      return r20;
    };
    r22 = dyn methodsPackageMetaName("M", p10, p11);
    check L32() else D13();
  L48():
    p20 = prom<V +>{
      f9 = ld f;
      f10 = force? f9;
      checkMissing(f10);
      return f10;
    };
    r42 = dyn deparse(p20);
    check L49() else D24();
  L51():
    p23 = prom<V +>{
      gettextf = ldf gettextf;
      p22 = prom<V +>{
        sQuote = ldf sQuote;
        p21 = prom<V +>{
          f11 = ld f;
          f12 = force? f11;
          checkMissing(f12);
          return f12;
        };
        r45 = dyn sQuote(p21);
        return r45;
      };
      r47 = dyn gettextf("generic function %s not found for removal", p22);
      return r47;
    };
    r49 = dyn warning[, domain](p23, NA_LGL);
    check L52() else D26();
  D13():
    deopt 48 [r22];
  D24():
    deopt 86 [r42];
  D26():
    deopt 95 [r49];
  L32():
    st oldMetaName = r22;
    exists = ldf exists;
    check L33() else D14();
  L49():
    st f = r42;
    goto L13();
  L52():
    goto L10();
  D14():
    deopt 51 [];
  L33():
    p12 = prom<V +>{
      oldMetaName = ld oldMetaName;
      oldMetaName1 = force? oldMetaName;
      checkMissing(oldMetaName1);
      return oldMetaName1;
    };
    p13 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r25 = dyn exists[, , inherits](p12, p13, FALSE);
    check L34() else D15();
  D15():
    deopt 56 [r25];
  L34():
    c3 = `as.logical`(r25);
    if c3 then L35() else L8();
  L8():
    goto L9();
  L9():
    _uncacheGeneric = ldf `.uncacheGeneric`;
    check L39() else D18();
  L35():
    rm = ldf rm;
    check L36() else D16();
  D16():
    deopt 58 [];
  D18():
    deopt 67 [];
  L36():
    p14 = prom<V +>{
      oldMetaName2 = ld oldMetaName;
      oldMetaName3 = force? oldMetaName2;
      checkMissing(oldMetaName3);
      return oldMetaName3;
    };
    p15 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r28 = dyn rm[list, pos](p14, p15);
    check L37() else D17();
  L39():
    p16 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    p17 = prom<V +>{
      fdef6 = ld fdef;
      fdef7 = force? fdef6;
      checkMissing(fdef7);
      return fdef7;
    };
    r32 = dyn _uncacheGeneric(p16, p17);
    check L40() else D19();
  D17():
    deopt 63 [r28];
  D19():
    deopt 70 [r32];
  L37():
    goto L9();
  L40():
    rm1 = ldf rm;
    check L41() else D20();
  D20():
    deopt 72 [];
  L41():
    p18 = prom<V +>{
      __2 = ldf `@` in base;
      r33 = dyn __2(<sym fdef>, <sym generic>);
      return r33;
    };
    p19 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      return where10;
    };
    r36 = dyn rm1[list, pos](p18, p19);
    check L42() else D21();
  D21():
    deopt 77 [r36];
  L42():
    goto L10();
  }
}