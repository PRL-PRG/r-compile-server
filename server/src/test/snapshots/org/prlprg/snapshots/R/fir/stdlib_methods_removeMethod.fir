fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1666920068;
    st removeMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1666920068(f, signature, where) {
  (reg f:*, reg signature:*, reg where:*) -+> V { var f:*, var signature:*, reg signature_isMissing:L, reg signature_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg f1:*, reg f2:V, reg is_function:cls, reg r8:V, reg c:L, reg is:cls, reg f3:*, reg f4:V, reg p3:p(V +), reg r10:V, reg c1:L, reg f5:*, reg f6:V, reg __:cls, reg r11:V, reg r12:V, reg is_primitive:cls, reg f7:*, reg f8:V, reg p4:p(V +), reg r14:V, reg c2:L, reg _primname:cls, reg f9:*, reg f10:V, reg p5:p(V +), reg r16:V, reg genericForBasic:cls, reg f11:*, reg f12:V, reg p6:p(V +), reg r18:V, reg stop:cls, reg r19:V, reg getGeneric:cls, reg f13:*, reg f14:V, reg p7:p(V +), reg where1:*, reg where2:V, reg p8:p(V +), reg r23:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg r25:V, reg fdef:*, reg fdef1:V, reg c3:V, reg c4:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg f15:*, reg f16:V, reg p9:p(V +), reg r27:V, reg p10:p(V +), reg r29:V, reg p11:p(V +), reg r31:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r34:V, reg r35:V, reg getMethod:cls, reg fdef2:*, reg fdef3:V, reg p12:p(V +), reg signature1:*, reg signature2:V, reg p13:p(V +), reg r38:V, reg c5:V, reg c6:L, reg warning1:cls, reg gettextf1:cls, reg sQuote1:cls, reg __1:cls, reg r39:V, reg p14:p(V +), reg r41:V, reg p15:p(V +), reg paste:cls, reg _dQ:cls, reg signature3:*, reg signature4:V, reg p16:p(V +), reg r44:V, reg p17:p(V +), reg r46:V, reg p18:p(V +), reg r48:V, reg p19:p(V +), reg r50:V, reg setMethod:cls, reg f17:*, reg f18:V, reg p20:p(V +), reg signature5:*, reg signature6:V, reg p21:p(V +), reg where3:*, reg where4:V, reg p22:p(V +), reg r56:V |
    mkenv;
    st f = f;
    signature_isMissing = missing.0(signature);
    if signature_isMissing then L0() else L1(signature);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(signature_orDefault):
    st signature = signature_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L2() else L3(where);
  L2():
    p2 = prom<V +>{
      topenv = ldf topenv;
      p1 = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r2 = dyn parent_frame();
        return r2;
      };
      r4 = dyn topenv(p1);
      return r4;
    };
    goto L3(p2);
  L3(where_orDefault):
    st where = where_orDefault;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L4(r7):
    c = `as.logical`(r7);
    if c then L20() else L5();
  L16():
    f1 = ld f;
    check L18() else D0();
  L17():
    r6 = dyn base(<sym f>);
    goto L4(r6);
  D0():
    deopt 2 [f1];
  L5():
    getGeneric = ldf getGeneric;
    check L37() else D13();
  L9():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L18():
    f2 = force? f1;
    checkMissing(f2);
    is_function = ldf `is.function` in base;
    r8 = dyn is_function(f2);
    check L19() else D1();
  L20():
    is = ldf is;
    check L21() else D2();
  D1():
    deopt 5 [r8];
  D2():
    deopt 7 [];
  D13():
    deopt 38 [];
  L10(r25):
    c4 = `as.logical`(r25);
    if c4 then L42() else L11();
  L19():
    goto L4(r8);
  L21():
    p3 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r10 = dyn is(p3, "genericFunction");
    check L22() else D3();
  L37():
    p7 = prom<V +>{
      f13 = ld f;
      f14 = force? f13;
      checkMissing(f14);
      return f14;
    };
    p8 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r23 = dyn getGeneric[, where](p7, p8);
    check L38() else D14();
  L39():
    fdef = ld fdef;
    check L41() else D15();
  L40():
    r24 = dyn base1(<sym fdef>);
    goto L10(r24);
  D3():
    deopt 10 [r10];
  D14():
    deopt 42 [r23];
  D15():
    deopt 45 [fdef];
  L11():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L47() else L48();
  L22():
    c1 = `as.logical`(r10);
    if c1 then L23() else L6();
  L38():
    st fdef = r23;
    goto L9();
  L41():
    fdef1 = force? fdef;
    checkMissing(fdef1);
    c3 = `==`(fdef1, NULL);
    goto L10(c3);
  L42():
    warning = ldf warning;
    check L43() else D16();
  D16():
    deopt 49 [];
  L6():
    is_primitive = ldf `is.primitive`;
    check L26() else D5();
  L7(r12):
    goto L9();
  L13(r35):
    c6 = `as.logical`(r35);
    if c6 then L51() else L14();
  L23():
    f5 = ld f;
    check L24() else D4();
  L43():
    p11 = prom<V +>{
      gettextf = ldf gettextf;
      p10 = prom<V +>{
        sQuote = ldf sQuote;
        p9 = prom<V +>{
          f15 = ld f;
          f16 = force? f15;
          checkMissing(f16);
          return f16;
        };
        r27 = dyn sQuote(p9);
        return r27;
      };
      r29 = dyn gettextf("no generic function %s found", p10);
      return r29;
    };
    r31 = dyn warning[, domain](p11, NA_LGL);
    check L44() else D17();
  L47():
    getMethod = ldf getMethod;
    check L49() else D18();
  L48():
    r34 = dyn base2(<lang getMethod(fdef, signature, optional=TRUE)>);
    goto L13(r34);
  D4():
    deopt 11 [f5];
  D5():
    deopt 18 [];
  D17():
    deopt 53 [r31];
  D18():
    deopt 61 [];
  L14():
    setMethod = ldf setMethod;
    check L56() else D22();
  L24():
    f6 = force? f5;
    checkMissing(f6);
    st fdef = f6;
    __ = ldf `@` in base;
    r11 = dyn __(<sym f>, <sym generic>);
    st f = r11;
    goto L7(r11);
  L26():
    p4 = prom<V +>{
      f7 = ld f;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    r14 = dyn is_primitive(p4);
    check L27() else D6();
  L44():
    popenv;
    return FALSE;
  L49():
    p12 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    p13 = prom<V +>{
      signature1 = ld signature;
      signature2 = force? signature1;
      checkMissing(signature2);
      return signature2;
    };
    r38 = dyn getMethod[, , optional](p12, p13, TRUE);
    check L50() else D19();
  L51():
    warning1 = ldf warning;
    check L52() else D20();
  D6():
    deopt 20 [r14];
  D19():
    deopt 66 [r38];
  D20():
    deopt 69 [];
  D22():
    deopt 80 [];
  L27():
    c2 = `as.logical`(r14);
    if c2 then L28() else L8();
  L50():
    c5 = `==`(r38, NULL);
    goto L13(c5);
  L52():
    p19 = prom<V +>{
      gettextf1 = ldf gettextf;
      p15 = prom<V +>{
        sQuote1 = ldf sQuote;
        p14 = prom<V +>{
          __1 = ldf `@` in base;
          r39 = dyn __1(<sym fdef>, <sym generic>);
          return r39;
        };
        r41 = dyn sQuote1(p14);
        return r41;
      };
      p18 = prom<V +>{
        paste = ldf paste;
        p17 = prom<V +>{
          _dQ = ldf `.dQ`;
          p16 = prom<V +>{
            signature3 = ld signature;
            signature4 = force? signature3;
            checkMissing(signature4);
            return signature4;
          };
          r44 = dyn _dQ(p16);
          return r44;
        };
        r46 = dyn paste[, collapse](p17, ", ");
        return r46;
      };
      r48 = dyn gettextf1("no method found for function %s and signature %s", p15, p18);
      return r48;
    };
    r50 = dyn warning1[, domain](p19, NA_LGL);
    check L53() else D21();
  L56():
    p20 = prom<V +>{
      f17 = ld f;
      f18 = force? f17;
      checkMissing(f18);
      return f18;
    };
    p21 = prom<V +>{
      signature5 = ld signature;
      signature6 = force? signature5;
      checkMissing(signature6);
      return signature6;
    };
    p22 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r56 = dyn setMethod[, , , where](p20, p21, NULL, p22);
    check L57() else D23();
  D21():
    deopt 73 [r50];
  D23():
    deopt 86 [r56];
  L8():
    stop = ldf stop;
    check L34() else D11();
  L28():
    _primname = ldf `.primname`;
    check L29() else D7();
  L53():
    popenv;
    return FALSE;
  L57():
    popenv;
    return TRUE;
  D7():
    deopt 22 [];
  D11():
    deopt 34 [];
  L29():
    p5 = prom<V +>{
      f9 = ld f;
      f10 = force? f9;
      checkMissing(f10);
      return f10;
    };
    r16 = dyn _primname(p5);
    check L30() else D8();
  L34():
    r19 = dyn stop("function supplied as argument 'f' must be a generic");
    check L35() else D12();
  D8():
    deopt 24 [r16];
  D12():
    deopt 36 [r19];
  L30():
    st f = r16;
    genericForBasic = ldf genericForBasic;
    check L31() else D9();
  L35():
    goto L7(r19);
  D9():
    deopt 27 [];
  L31():
    p6 = prom<V +>{
      f11 = ld f;
      f12 = force? f11;
      checkMissing(f12);
      return f12;
    };
    r18 = dyn genericForBasic[, mustFind](p6, FALSE);
    check L32() else D10();
  D10():
    deopt 31 [r18];
  L32():
    st fdef = r18;
    goto L7(r18);
  }
}