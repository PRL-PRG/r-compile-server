fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3828489859;
    st makeMethodsList = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3828489859(object, level) {
  (reg object:*, reg level:*) -+> V { var object:*, var level:*, reg level_isMissing:L, reg level_orDefault:*, reg _MlistDefunct:cls, reg r:V, reg allNames:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r2:V, reg _noMlists:cls, reg r3:V, reg c:L, reg _in_:cls, reg mnames:*, reg mnames1:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg mnames2:*, reg mnames3:V, reg c2:L, reg mnames5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg keep:*, reg keep1:V, reg __:cls, reg r10:V, reg object3:*, reg object4:V, reg c3:L, reg object6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg keep2:*, reg keep3:V, reg __1:cls, reg r11:V, reg new:cls, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg mnames6:*, reg mnames7:V, reg match:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg i:*, reg i1:V, reg is_na:cls, reg r18:V, reg r19:V, reg c4:L, reg l:*, reg c5:L, reg r21:S, reg l2:*, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg i2:*, reg i3:V, reg ____:cls, reg r24:V, reg mnames8:*, reg mnames9:V, reg l3:*, reg names__:cls, reg r25:V, reg anyDuplicated:cls, reg mnames11:*, reg mnames12:V, reg p3:p(V +), reg r27:V, reg c6:L, reg stop:cls, reg gettextf:cls, reg level1:*, reg level2:V, reg p4:p(V +), reg paste:cls, reg unique:cls, reg mnames13:*, reg mnames14:V, reg c7:L, reg mnames16:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg duplicated:cls, reg mnames17:*, reg mnames18:V, reg p5:p(V +), reg r30:V, reg __2:cls, reg r31:V, reg p6:p(V +), reg r33:V, reg p7:p(V +), reg r35:V, reg p8:p(V +), reg r37:V, reg p9:p(V +), reg r39:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r41:V, reg r42:V, reg object7:*, reg object8:V, reg r43:I, reg s:V, reg l4:I, reg i4:I, reg i5:I, reg i6:I, reg c8:L, reg x:V, reg object9:*, reg object10:V, reg c9:L, reg i10:I, reg object12:V, reg dr8:V, reg dc4:L, reg dx9:V, reg i12:I, reg dx10:V, reg i13:*, reg i14:V, reg __3:cls, reg r44:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg i17:I, reg r46:V, reg eli:*, reg eli1:V, reg is_function:cls, reg r47:V, reg c10:L, reg i18:I, reg c11:V, reg is:cls, reg eli2:*, reg eli3:V, reg p10:p(V +), reg r49:V, reg c13:L, reg c14:V, reg c16:L, reg i23:I, reg is1:cls, reg eli4:*, reg eli5:V, reg p11:p(V +), reg r52:V, reg c17:L, reg i24:I, reg c18:V, reg is2:cls, reg eli6:*, reg eli7:V, reg p12:p(V +), reg r54:V, reg c20:L, reg c21:V, reg c23:L, reg Recall:cls, reg eli8:*, reg eli9:V, reg p13:p(V +), reg level3:*, reg level4:V, reg r56:V, reg p14:p(V +), reg r58:V, reg l5:*, reg c24:L, reg i30:I, reg r60:V, reg l7:*, reg dr10:V, reg dc5:L, reg dx11:V, reg i32:I, reg r62:V, reg dx12:V, reg i33:*, reg i34:V, reg ____1:cls, reg r63:V, reg stop1:cls, reg gettextf1:cls, reg i35:*, reg i36:V, reg p15:p(V +), reg level5:*, reg level6:V, reg p16:p(V +), reg dQuote:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r66:V, reg r67:V, reg eli10:*, reg eli11:V, reg class:cls, reg r68:V, reg p17:p(V +), reg r70:V, reg p18:p(V +), reg r72:V, reg p19:p(V +), reg r74:V, reg object13:*, reg object14:V, reg l8:*, reg slot__:cls, reg r75:V, reg value:*, reg value1:V |
    mkenv;
    st object = object;
    level_isMissing = missing.0(level);
    if level_isMissing then L0(1.0) else L0(level);
  L0(level_orDefault):
    st level = level_orDefault;
    _MlistDefunct = ldf `.MlistDefunct`;
    check L23() else D0();
  D0():
    deopt 1 [];
  L23():
    r = dyn _MlistDefunct("makeMethodsList()");
    check L24() else D1();
  D1():
    deopt 3 [r];
  L24():
    allNames = ldf allNames;
    check L25() else D2();
  D2():
    deopt 5 [];
  L25():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r2 = dyn allNames(p);
    check L26() else D3();
  D3():
    deopt 7 [r2];
  L26():
    st mnames = r2;
    _noMlists = ldf `.noMlists`;
    check L27() else D4();
  D4():
    deopt 10 [];
  L27():
    r3 = dyn _noMlists();
    check L28() else D5();
  D5():
    deopt 11 [r3];
  L28():
    c = `as.logical`(r3);
    if c then L29() else L1();
  L1():
    goto L4();
  L4():
    new = ldf new;
    check L43() else D12();
  L29():
    _in_ = ldf `%in%`;
    check L30() else D6();
  D6():
    deopt 13 [];
  D12():
    deopt 33 [];
  L30():
    p1 = prom<V +>{
      mnames = ld mnames;
      mnames1 = force? mnames;
      checkMissing(mnames1);
      return mnames1;
    };
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c1 = ldf c in base;
      r7 = dyn c1("", "ANY");
      goto L0(r7);
    L2():
      r5 = dyn base("", "ANY");
      goto L0(r5);
    };
    r9 = dyn _in_(p1, p2);
    check L31() else D7();
  L43():
    r12 = dyn new("MethodsList");
    check L44() else D13();
  D7():
    deopt 16 [r9];
  D13():
    deopt 35 [r12];
  L31():
    st keep = r9;
    mnames2 = ld mnames;
    check L32() else D8();
  L44():
    st value = r12;
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L45() else L46();
  D8():
    deopt 18 [mnames2];
  L5(r14):
    st i = r14;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L32():
    mnames3 = force? mnames2;
    checkMissing(mnames3);
    c2 = `is.object`(mnames3);
    if c2 then L33() else L34(mnames3);
  L45():
    mnames6 = ld mnames;
    check L47() else D14();
  L46():
    r13 = dyn base1("", <sym mnames>);
    goto L5(r13);
  D14():
    deopt 40 [mnames6];
  L2(dx1):
    st mnames = dx1;
    object3 = ld object;
    check L37() else D10();
  L6(r17):
    r19 = `!`(r17);
    c4 = `as.logical`(r19);
    if c4 then L53() else L7();
  L33():
    dr = tryDispatchBuiltin.1("[", mnames3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(dr);
  L34(mnames5):
    keep = ld keep;
    check L36() else D9();
  L47():
    mnames7 = force? mnames6;
    checkMissing(mnames7);
    match = ldf match in base;
    r15 = dyn match("", mnames7, NA_INT, NULL);
    check L48() else D15();
  L49():
    i = ld i;
    check L51() else D16();
  L50():
    r16 = dyn base2(<sym i>);
    goto L6(r16);
  D9():
    deopt 20 [mnames5, keep];
  D10():
    deopt 24 [object3];
  D15():
    deopt 45 [r15];
  D16():
    deopt 49 [i];
  L7():
    goto L9();
  L9():
    anyDuplicated = ldf anyDuplicated;
    check L62() else D22();
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L36():
    keep1 = force? keep;
    __ = ldf `[` in base;
    r10 = dyn __(mnames5, keep1);
    goto L2(r10);
  L37():
    object4 = force? object3;
    checkMissing(object4);
    c3 = `is.object`(object4);
    if c3 then L38() else L39(object4);
  L48():
    goto L5(r15);
  L51():
    i1 = force? i;
    checkMissing(i1);
    is_na = ldf `is.na` in base;
    r18 = dyn is_na(i1);
    check L52() else D17();
  L53():
    l = ld mnames;
    c5 = `is.object`(l);
    if c5 then L54() else L55("ANY", l);
  D17():
    deopt 52 [r18];
  D22():
    deopt 71 [];
  L3(dx3):
    st object = dx3;
    goto L4();
  L8(dx6):
    st mnames = dx6;
    mnames8 = ld mnames;
    check L58() else D19();
  L38():
    dr2 = tryDispatchBuiltin.1("[", object4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L40() else L39(dr2);
  L39(object6):
    keep2 = ld keep;
    check L41() else D11();
  L52():
    goto L6(r18);
  L54():
    dr4 = tryDispatchBuiltin.0("[[<-", l, "ANY");
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L56() else L55("ANY", dr4);
  L55(r21, l2):
    i2 = ld i;
    check L57() else D18();
  L62():
    p3 = prom<V +>{
      mnames11 = ld mnames;
      mnames12 = force? mnames11;
      checkMissing(mnames12);
      return mnames12;
    };
    r27 = dyn anyDuplicated(p3);
    check L63() else D23();
  D11():
    deopt 26 [object6, keep2];
  D18():
    deopt 57 [r21, l2, "ANY", i2];
  D19():
    deopt 61 [mnames8];
  D23():
    deopt 73 [r27];
  L40():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L41():
    keep3 = force? keep2;
    __1 = ldf `[` in base;
    r11 = dyn __1(object6, keep3);
    goto L3(r11);
  L56():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L8(dx5);
  L57():
    i3 = force? i2;
    ____ = ldf `[[<-` in base;
    r24 = dyn ____(l2, "ANY", i3);
    goto L8(r24);
  L58():
    mnames9 = force? mnames8;
    checkMissing(mnames9);
    l3 = ld object;
    names__ = ldf `names<-`;
    check L59() else D20();
  L63():
    c6 = `as.logical`(r27);
    if c6 then L64() else L10();
  D20():
    deopt 64 [mnames9, l3, mnames9];
  L10():
    goto L11();
  L11():
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L68() else L69();
  L59():
    r25 = dyn names__(l3, NULL, mnames9);
    check L60() else D21();
  L64():
    stop = ldf stop;
    check L65() else D24();
  D21():
    deopt 66 [mnames9, r25];
  D24():
    deopt 75 [];
  L12(r42):
    s = toForSeq(r42);
    l4 = length(s);
    i4 = 0;
    goto L13(i4);
  L60():
    st object = r25;
    goto L9();
  L65():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        level1 = ld level;
        level2 = force? level1;
        checkMissing(level2);
        return level2;
      };
      p8 = prom<V +>{
        paste = ldf paste;
        p7 = prom<V +>{
          unique = ldf unique;
          p6 = prom<V +>{
            mnames13 = ld mnames;
            mnames14 = force? mnames13;
            checkMissing(mnames14);
            c7 = `is.object`(mnames14);
            if c7 then L1() else L2(mnames14);
          L0(dx8):
            return dx8;
          L1():
            dr6 = tryDispatchBuiltin.1("[", mnames14);
            dc3 = getTryDispatchBuiltinDispatched(dr6);
            if dc3 then L3() else L2(dr6);
          L2(mnames16):
            duplicated = ldf duplicated;
            p5 = prom<V +>{
              mnames17 = ld mnames;
              mnames18 = force? mnames17;
              checkMissing(mnames18);
              return mnames18;
            };
            r30 = dyn duplicated(p5);
            __2 = ldf `[` in base;
            r31 = dyn __2(mnames16, r30);
            goto L0(r31);
          L3():
            dx7 = getTryDispatchBuiltinValue(dr6);
            goto L0(dx7);
          };
          r33 = dyn unique(p6);
          return r33;
        };
        r35 = dyn paste[, , , collapse]("\"", p7, "\"", ", ");
        return r35;
      };
      r37 = dyn gettextf("duplicate element names in 'MethodsList' at level %d: %s", p4, p8);
      return r37;
    };
    r39 = dyn stop[, domain](p9, NA_LGL);
    check L66() else D25();
  L68():
    object7 = ld object;
    check L70() else D26();
  L69():
    r41 = dyn base3(<sym object>);
    goto L12(r41);
  D25():
    deopt 79 [r39];
  D26():
    deopt 83 [object7];
  L13(i5):
    i6 = `+`.1(i5, 1);
    c8 = `<`.1(l4, i6);
    if c8 then L71() else L22();
  L66():
    goto L11();
  L70():
    object8 = force? object7;
    checkMissing(object8);
    r43 = seq_along(object8);
    goto L12(r43);
  L22():
    x = `[[`(s, i6, NULL, TRUE);
    st i = x;
    object9 = ld object;
    check L72() else D27();
  L71():
    object13 = ld object;
    check L103() else D42();
  D27():
    deopt 86 [i6, object9];
  D42():
    deopt 137 [object13];
  L72():
    object10 = force? object9;
    checkMissing(object10);
    c9 = `is.object`(object10);
    if c9 then L73() else L74(i6, object10);
  L103():
    object14 = force? object13;
    checkMissing(object14);
    l8 = ld value;
    slot__ = ldf `slot<-`;
    check L104() else D43();
  D43():
    deopt 140 [object14, l8, object14];
  L14(i12, dx10):
    st eli = dx10;
    sym4 = ldf `is.function`;
    base4 = ldf `is.function` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L77() else L78();
  L73():
    dr8 = tryDispatchBuiltin.1("[[", object10);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L75() else L74(i6, dr8);
  L74(i10, object12):
    i13 = ld i;
    check L76() else D28();
  L104():
    r75 = dyn slot__(l8, NULL, "methods", object14);
    check L105() else D44();
  D28():
    deopt 88 [i10, object12, i13];
  D44():
    deopt 143 [object14, r75];
  L15(i17, r46):
    c10 = `as.logical`(r46);
    if c10 then L16(i17, c10) else L81();
  L75():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L14(i6, dx9);
  L76():
    i14 = force? i13;
    __3 = ldf `[[` in base;
    r44 = dyn __3(object12, i14);
    goto L14(i10, r44);
  L77():
    eli = ld eli;
    check L79() else D29();
  L78():
    r45 = dyn base4(<sym eli>);
    goto L15(i12, r45);
  L105():
    st value = r75;
    value = ld value;
    check L106() else D45();
  D29():
    deopt 94 [i12, eli];
  D45():
    deopt 145 [value];
  L16(i18, c11):
    c16 = `as.logical`(c11);
    if c16 then L85() else L17();
  L79():
    eli1 = force? eli;
    checkMissing(eli1);
    is_function = ldf `is.function` in base;
    r47 = dyn is_function(eli1);
    check L80() else D30();
  L81():
    is = ldf is;
    check L82() else D31();
  L106():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  D30():
    deopt 97 [i12, r47];
  D31():
    deopt 99 [i17, c10];
  L17():
    is1 = ldf is;
    check L87() else D33();
  L18(i23):
    goto L13(i23);
  L80():
    goto L15(i12, r47);
  L82():
    p10 = prom<V +>{
      eli2 = ld eli;
      eli3 = force? eli2;
      checkMissing(eli3);
      return eli3;
    };
    r49 = dyn is(p10, "MethodsList");
    check L83() else D32();
  L85():
    goto L18(i18);
  D32():
    deopt 102 [i17, c10, r49];
  D33():
    deopt 107 [i18];
  L83():
    c13 = `as.logical`(r49);
    c14 = `||`(c10, c13);
    goto L16(i17, c14);
  L87():
    p11 = prom<V +>{
      eli4 = ld eli;
      eli5 = force? eli4;
      checkMissing(eli5);
      return eli5;
    };
    r52 = dyn is1(p11, "list");
    check L88() else D34();
  D34():
    deopt 110 [i18, r52];
  L88():
    c17 = `as.logical`(r52);
    if c17 then L19(i18, c17) else L89();
  L19(i24, c18):
    c23 = `as.logical`(c18);
    if c23 then L93() else L20();
  L89():
    is2 = ldf is;
    check L90() else D35();
  D35():
    deopt 112 [i18, c17];
  L20():
    stop1 = ldf stop;
    check L101() else D40();
  L90():
    p12 = prom<V +>{
      eli6 = ld eli;
      eli7 = force? eli6;
      checkMissing(eli7);
      return eli7;
    };
    r54 = dyn is2(p12, "named");
    check L91() else D36();
  L93():
    Recall = ldf Recall;
    check L94() else D37();
  D36():
    deopt 115 [i18, c17, r54];
  D37():
    deopt 118 [i24];
  D40():
    deopt 129 [i24];
  L91():
    c20 = `as.logical`(r54);
    c21 = `||`(c17, c20);
    goto L19(i18, c21);
  L94():
    p13 = prom<V +>{
      eli8 = ld eli;
      eli9 = force? eli8;
      checkMissing(eli9);
      return eli9;
    };
    p14 = prom<V +>{
      level3 = ld level;
      level4 = force? level3;
      checkMissing(level4);
      r56 = `+`(level4, 1.0);
      return r56;
    };
    r58 = dyn Recall(p13, NULL, p14);
    check L95() else D38();
  L101():
    p19 = prom<V +>{
      gettextf1 = ldf gettextf;
      p15 = prom<V +>{
        i35 = ld i;
        i36 = force? i35;
        checkMissing(i36);
        return i36;
      };
      p16 = prom<V +>{
        level5 = ld level;
        level6 = force? level5;
        checkMissing(level6);
        return level6;
      };
      p18 = prom<V +>{
        dQuote = ldf dQuote;
        p17 = prom<V +>{
          sym5 = ldf class;
          base5 = ldf class in base;
          guard5 = `==`.4(sym5, base5);
          if guard5 then L1() else L2();
        L0(r67):
          return r67;
        L1():
          eli10 = ld eli;
          eli11 = force? eli10;
          checkMissing(eli11);
          class = ldf class in base;
          r68 = dyn class(eli11);
          goto L0(r68);
        L2():
          r66 = dyn base5(<sym eli>);
          goto L0(r66);
        };
        r70 = dyn dQuote(p17);
        return r70;
      };
      r72 = dyn gettextf1("element %d at level %d (class %s) cannot be interpreted as a function or named list", p15, p16, p18);
      return r72;
    };
    r74 = dyn stop1[, domain](p19, NA_LGL);
    check L102() else D41();
  D38():
    deopt 122 [i24, r58];
  D41():
    deopt 133 [i24, r74];
  L95():
    l5 = ld object;
    c24 = `is.object`(l5);
    if c24 then L96() else L97(i24, r58, l5);
  L102():
    goto L18(i24);
  L21(i32, r62, dx12):
    st object = dx12;
    goto L18(i32);
  L96():
    dr10 = tryDispatchBuiltin.0("[[<-", l5, r58);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L98() else L97(i24, r58, dr10);
  L97(i30, r60, l7):
    i33 = ld i;
    check L99() else D39();
  D39():
    deopt 124 [i30, r60, l7, r58, i33];
  L98():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L21(i24, r58, dx11);
  L99():
    i34 = force? i33;
    ____1 = ldf `[[<-` in base;
    r63 = dyn ____1(l7, r58, i34);
    goto L21(i30, r60, r63);
  }
}