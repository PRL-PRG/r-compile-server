fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2541100196;
    st inferProperties = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2541100196(props, what) {
  (reg props:*, reg what:*) -+> V { var props:*, var what:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg props1:*, reg props2:V, reg c:L, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg props3:*, reg props4:V, reg names:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg propNames:*, reg propNames1:V, reg c2:V, reg c3:L, reg _validPropNames:cls, reg props5:*, reg props6:V, reg p:p(V +), reg r9:V, reg as_list:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg rep:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg propNames2:*, reg propNames3:V, reg l:*, reg names__:cls, reg r15:V, reg propNames4:V, reg _validPropNames1:cls, reg propNames5:*, reg propNames6:V, reg p2:p(V +), reg r17:V, reg as_list1:cls, reg props7:*, reg props8:V, reg p3:p(V +), reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg props9:*, reg props10:V, reg is_list:cls, reg r22:V, reg c4:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg props11:*, reg props12:V, reg length:cls, reg r25:V, reg r26:V, reg c5:L, reg _validPropNames2:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg r28:V, reg props13:*, reg props14:V, reg names1:cls, reg r29:V, reg p4:p(V +), reg r31:V, reg r32:V, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg what1:*, reg what2:V, reg p5:p(V +), reg r34:V, reg p6:p(V +), reg dQuote1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg fields:*, reg fields1:V, reg class:cls, reg r38:V, reg p7:p(V +), reg r40:V, reg p8:p(V +), reg r42:V, reg p9:p(V +), reg r44:V, reg props15:*, reg props16:V |
    mkenv;
    st props = props;
    st what = what;
    r = clos inner120243041;
    st `.validPropNames` = r;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r2):
    c1 = `as.logical`(r2);
    if c1 then L15() else L1();
  L12():
    props1 = ld props;
    check L14() else D0();
  L13():
    r1 = dyn base(<sym props>);
    goto L0(r1);
  D0():
    deopt 4 [props1];
  L1():
    sym4 = ldf `is.list`;
    base4 = ldf `is.list` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  L6():
    props15 = ld props;
    check L53() else D23();
  L14():
    props2 = force? props1;
    checkMissing(props2);
    c = `is.character`(props2);
    goto L0(c);
  L15():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  D23():
    deopt 70 [props15];
  L2(r4):
    st propNames = r4;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L7(r21):
    c4 = `as.logical`(r21);
    if c4 then L41() else L8();
  L16():
    props3 = ld props;
    check L18() else D1();
  L17():
    r3 = dyn base1(<sym props>);
    goto L2(r3);
  L37():
    props9 = ld props;
    check L39() else D15();
  L38():
    r20 = dyn base4(<sym props>);
    goto L7(r20);
  L53():
    props16 = force? props15;
    checkMissing(props16);
    popenv;
    return props16;
  D1():
    deopt 9 [props3];
  D15():
    deopt 46 [props9];
  L3(r7):
    c3 = `as.logical`(r7);
    if c3 then L23() else L4();
  L8():
    stop = ldf stop;
    check L51() else D21();
  L18():
    props4 = force? props3;
    checkMissing(props4);
    names = ldf names in base;
    r5 = dyn names(props4);
    check L19() else D2();
  L20():
    propNames = ld propNames;
    check L22() else D3();
  L21():
    r6 = dyn base2(<sym propNames>);
    goto L3(r6);
  L39():
    props10 = force? props9;
    checkMissing(props10);
    is_list = ldf `is.list` in base;
    r22 = dyn is_list(props10);
    check L40() else D16();
  L41():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L42() else L43();
  D2():
    deopt 12 [r5];
  D3():
    deopt 15 [propNames];
  D16():
    deopt 49 [r22];
  D21():
    deopt 65 [];
  L4():
    _validPropNames1 = ldf `.validPropNames`;
    check L32() else D11();
  L5(propNames4):
    goto L6();
  L9(r24):
    r26 = `>`(r24, 0.0);
    c5 = `as.logical`(r26);
    if c5 then L46() else L10();
  L19():
    goto L2(r5);
  L22():
    propNames1 = force? propNames;
    checkMissing(propNames1);
    c2 = `==`(propNames1, NULL);
    goto L3(c2);
  L23():
    _validPropNames = ldf `.validPropNames`;
    check L24() else D4();
  L40():
    goto L7(r22);
  L42():
    props11 = ld props;
    check L44() else D17();
  L43():
    r23 = dyn base5(<sym props>);
    goto L9(r23);
  L51():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p6 = prom<V +>{
        dQuote = ldf dQuote;
        p5 = prom<V +>{
          what1 = ld what;
          what2 = force? what1;
          checkMissing(what2);
          return what2;
        };
        r34 = dyn dQuote(p5);
        return r34;
      };
      p8 = prom<V +>{
        dQuote1 = ldf dQuote;
        p7 = prom<V +>{
          sym7 = ldf class;
          base7 = ldf class in base;
          guard7 = `==`.4(sym7, base7);
          if guard7 then L1() else L2();
        L0(r37):
          return r37;
        L1():
          fields = ld fields;
          fields1 = force? fields;
          checkMissing(fields1);
          class = ldf class in base;
          r38 = dyn class(fields1);
          goto L0(r38);
        L2():
          r36 = dyn base7(<sym fields>);
          goto L0(r36);
        };
        r40 = dyn dQuote1(p7);
        return r40;
      };
      r42 = dyn gettextf("argument %s must be a list or a character vector; got an object of class %s", p6, p8);
      return r42;
    };
    r44 = dyn stop[, domain](p9, NA_LGL);
    check L52() else D22();
  D4():
    deopt 19 [];
  D11():
    deopt 36 [];
  D17():
    deopt 52 [props11];
  D22():
    deopt 69 [r44];
  L10():
    goto L11(NULL);
  L11(r32):
    goto L6();
  L24():
    p = prom<V +>{
      props5 = ld props;
      props6 = force? props5;
      checkMissing(props6);
      return props6;
    };
    r9 = dyn _validPropNames(p);
    check L25() else D5();
  L32():
    p2 = prom<V +>{
      propNames5 = ld propNames;
      propNames6 = force? propNames5;
      checkMissing(propNames6);
      return propNames6;
    };
    r17 = dyn _validPropNames1(p2);
    check L33() else D12();
  L44():
    props12 = force? props11;
    checkMissing(props12);
    length = ldf length in base;
    r25 = dyn length(props12);
    check L45() else D18();
  L46():
    _validPropNames2 = ldf `.validPropNames`;
    check L47() else D19();
  L52():
    goto L6();
  D5():
    deopt 21 [r9];
  D12():
    deopt 38 [r17];
  D18():
    deopt 55 [r25];
  D19():
    deopt 59 [];
  L25():
    st propNames = r9;
    as_list = ldf `as.list`;
    check L26() else D6();
  L33():
    as_list1 = ldf `as.list`;
    check L34() else D13();
  L45():
    goto L9(r25);
  L47():
    p4 = prom<V +>{
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      props13 = ld props;
      props14 = force? props13;
      checkMissing(props14);
      names1 = ldf names in base;
      r29 = dyn names1(props14);
      goto L0(r29);
    L2():
      r27 = dyn base6(<sym props>);
      goto L0(r27);
    };
    r31 = dyn _validPropNames2(p4);
    check L48() else D20();
  D6():
    deopt 24 [];
  D13():
    deopt 40 [];
  D20():
    deopt 61 [r31];
  L26():
    p1 = prom<V +>{
      sym3 = ldf rep;
      base3 = ldf rep in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      rep = ldf rep in base;
      r12 = dyn rep("ANY", <lang length(props)>);
      goto L0(r12);
    L2():
      r10 = dyn base3("ANY", <lang length(props)>);
      goto L0(r10);
    };
    r14 = dyn as_list(p1);
    check L27() else D7();
  L34():
    p3 = prom<V +>{
      props7 = ld props;
      props8 = force? props7;
      checkMissing(props8);
      return props8;
    };
    r19 = dyn as_list1(p3);
    check L35() else D14();
  L48():
    goto L11(r31);
  D7():
    deopt 26 [r14];
  D14():
    deopt 42 [r19];
  L27():
    st props = r14;
    propNames2 = ld propNames;
    check L28() else D8();
  L35():
    st props = r19;
    goto L5(r19);
  D8():
    deopt 28 [propNames2];
  L28():
    propNames3 = force? propNames2;
    checkMissing(propNames3);
    l = ld props;
    names__ = ldf `names<-`;
    check L29() else D9();
  D9():
    deopt 31 [propNames3, l, propNames3];
  L29():
    r15 = dyn names__(l, NULL, propNames3);
    check L30() else D10();
  D10():
    deopt 33 [propNames3, r15];
  L30():
    st props = r15;
    goto L5(propNames3);
  }
}
fun inner120243041(propNames) {
  (reg propNames:*) -+> V { var propNames:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg props:*, reg props1:V, reg length:cls, reg r2:V, reg n:*, reg n1:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg propNames1:*, reg propNames2:V, reg c1:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg what:*, reg what1:V, reg p:p(V +), reg r10:V, reg p1:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg propNames3:*, reg propNames4:V, reg nzchar:cls, reg r17:V, reg all:cls, reg r18:V, reg r19:V, reg c3:L, reg stop1:cls, reg gettextf1:cls, reg what2:*, reg what3:V, reg p2:p(V +), reg paste:cls, reg sQuote:cls, reg propNames5:*, reg propNames6:V, reg p3:p(V +), reg r22:V, reg p4:p(V +), reg r24:V, reg p5:p(V +), reg r26:V, reg p6:p(V +), reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg duplicated:cls, reg propNames7:*, reg propNames8:V, reg p7:p(V +), reg r32:V, reg any:cls, reg r33:V, reg c4:L, reg stop2:cls, reg gettextf2:cls, reg what4:*, reg what5:V, reg p8:p(V +), reg paste1:cls, reg sQuote1:cls, reg propNames9:*, reg propNames10:V, reg p9:p(V +), reg r36:V, reg p10:p(V +), reg r38:V, reg p11:p(V +), reg r40:V, reg p12:p(V +), reg r42:V, reg propNames11:*, reg propNames12:V |
    mkenv;
    st propNames = propNames;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r1):
    st n = r1;
    n = ld n;
    check L14() else D2();
  L10():
    props = ld props;
    check L12() else D0();
  L11():
    r = dyn base(<sym props>);
    goto L0(r);
  D0():
    deopt 2 [props];
  D2():
    deopt 7 [n];
  L12():
    props1 = force? props;
    checkMissing(props1);
    length = ldf length in base;
    r2 = dyn length(props1);
    check L13() else D1();
  L14():
    n1 = force? n;
    checkMissing(n1);
    r3 = `!`(n1);
    c = `as.logical`(r3);
    if c then L15() else L1();
  D1():
    deopt 5 [r2];
  L1():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L13():
    goto L0(r2);
  L15():
    character = ldf character;
    check L16() else D3();
  D3():
    deopt 11 [];
  L3(r8):
    c2 = `as.logical`(r8);
    if c2 then L23() else L4();
  L16():
    r4 = dyn character();
    check L17() else D4();
  L20():
    propNames1 = ld propNames;
    check L22() else D5();
  L21():
    r7 = dyn base1(<sym propNames>);
    goto L3(r7);
  D4():
    deopt 12 [r4];
  D5():
    deopt 15 [propNames1];
  L2():
    propNames11 = ld propNames;
    check L47() else D18();
  L4():
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L17():
    popenv;
    return r4;
  L22():
    propNames2 = force? propNames1;
    checkMissing(propNames2);
    c1 = `==`(propNames2, NULL);
    goto L3(c1);
  L23():
    stop = ldf stop;
    check L24() else D6();
  D6():
    deopt 19 [];
  D18():
    deopt 63 [propNames11];
  L5(r14):
    r19 = `!`(r14);
    c3 = `as.logical`(r19);
    if c3 then L34() else L7();
  L24():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        what = ld what;
        what1 = force? what;
        checkMissing(what1);
        return what1;
      };
      r10 = dyn gettextf("No %s names supplied", p);
      return r10;
    };
    r12 = dyn stop[, domain, `call.`](p1, NA_LGL, FALSE);
    check L25() else D7();
  L27():
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L28():
    r13 = dyn base2(<lang nzchar(propNames)>);
    goto L5(r13);
  L47():
    propNames12 = force? propNames11;
    checkMissing(propNames12);
    popenv;
    return propNames12;
  D7():
    deopt 25 [r12];
  L6(r16):
    all = ldf all in base;
    r18 = dyn all(r16);
    check L33() else D10();
  L7():
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  L25():
    goto L2();
  L29():
    propNames3 = ld propNames;
    check L31() else D8();
  L30():
    r15 = dyn base3(<sym propNames>);
    goto L6(r15);
  L34():
    stop1 = ldf stop;
    check L35() else D11();
  D8():
    deopt 30 [propNames3];
  D10():
    deopt 35 [r18];
  D11():
    deopt 38 [];
  L8(r30):
    c4 = `as.logical`(r30);
    if c4 then L43() else L9();
  L31():
    propNames4 = force? propNames3;
    checkMissing(propNames4);
    nzchar = ldf nzchar in base;
    r17 = dyn nzchar(propNames4);
    check L32() else D9();
  L33():
    goto L5(r18);
  L35():
    p6 = prom<V +>{
      gettextf1 = ldf gettextf;
      p2 = prom<V +>{
        what2 = ld what;
        what3 = force? what2;
        checkMissing(what3);
        return what3;
      };
      p5 = prom<V +>{
        paste = ldf paste;
        p4 = prom<V +>{
          sQuote = ldf sQuote;
          p3 = prom<V +>{
            propNames5 = ld propNames;
            propNames6 = force? propNames5;
            checkMissing(propNames6);
            return propNames6;
          };
          r22 = dyn sQuote(p3);
          return r22;
        };
        r24 = dyn paste[, collapse](p4, ", ");
        return r24;
      };
      r26 = dyn gettextf1("All %s names must be nonempty in:\n(%s)", p2, p5);
      return r26;
    };
    r28 = dyn stop1[, domain, `call.`](p6, NA_LGL, FALSE);
    check L36() else D12();
  L38():
    duplicated = ldf duplicated;
    check L40() else D13();
  L39():
    r29 = dyn base4(<lang duplicated(propNames)>);
    goto L8(r29);
  D9():
    deopt 33 [r17];
  D12():
    deopt 44 [r28];
  D13():
    deopt 48 [];
  L9():
    goto L2();
  L32():
    goto L6(r17);
  L36():
    goto L2();
  L40():
    p7 = prom<V +>{
      propNames7 = ld propNames;
      propNames8 = force? propNames7;
      checkMissing(propNames8);
      return propNames8;
    };
    r32 = dyn duplicated(p7);
    check L41() else D14();
  L43():
    stop2 = ldf stop;
    check L44() else D16();
  D14():
    deopt 50 [r32];
  D16():
    deopt 54 [];
  L41():
    any = ldf any in base;
    r33 = dyn any(r32);
    check L42() else D15();
  L44():
    p12 = prom<V +>{
      gettextf2 = ldf gettextf;
      p8 = prom<V +>{
        what4 = ld what;
        what5 = force? what4;
        checkMissing(what5);
        return what5;
      };
      p11 = prom<V +>{
        paste1 = ldf paste;
        p10 = prom<V +>{
          sQuote1 = ldf sQuote;
          p9 = prom<V +>{
            propNames9 = ld propNames;
            propNames10 = force? propNames9;
            checkMissing(propNames10);
            return propNames10;
          };
          r36 = dyn sQuote1(p9);
          return r36;
        };
        r38 = dyn paste1[, collapse](p10, ", ");
        return r38;
      };
      r40 = dyn gettextf2("All %s names must be distinct in:\n(%s)", p8, p11);
      return r40;
    };
    r42 = dyn stop2[, domain, `call.`](p12, NA_LGL, FALSE);
    check L45() else D17();
  D15():
    deopt 52 [r33];
  D17():
    deopt 60 [r42];
  L42():
    goto L8(r33);
  L45():
    goto L2();
  }
}