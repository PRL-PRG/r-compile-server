fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner181789411;
    st `.mergeMethodsTable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner181789411(generic, table, newtable, add) {
  (reg generic:*, reg table:*, reg newtable:*, reg add:*) -+> V { var generic:*, var table:*, var newtable:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, reg environment:cls, reg generic1:*, reg generic2:V, reg p:p(V +), reg r1:V, reg exists:cls, reg fenv:*, reg fenv1:V, reg p1:p(V +), reg r3:V, reg r4:V, reg c:L, reg _setupMethodsTables:cls, reg generic3:*, reg generic4:V, reg p2:p(V +), reg r6:V, reg add1:*, reg add2:V, reg r8:V, reg c1:L, reg get:cls, reg fenv2:*, reg fenv3:V, reg p3:p(V +), reg r10:V, reg r11:V, reg get1:cls, reg fenv4:*, reg fenv5:V, reg p4:p(V +), reg r13:V, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg r15:V, reg rep:cls, reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg newtable1:*, reg newtable2:V, reg names:cls, reg r19:V, reg newMethods:*, reg newMethods1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg newtable3:*, reg newtable4:V, reg c3:L, reg i6:I, reg newtable6:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg what:*, reg what1:V, reg __:cls, reg r20:V, reg is_primitive:cls, reg obj:*, reg obj1:V, reg p5:p(V +), reg r22:V, reg c4:L, reg anySig:*, reg anySig1:V, reg i11:I, reg is:cls, reg obj2:*, reg obj3:V, reg p6:p(V +), reg r24:V, reg c5:L, reg __1:cls, reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg i16:I, reg r27:V, reg obj4:*, reg obj5:V, reg is_environment:cls, reg r28:V, reg c6:L, reg as_list:cls, reg obj6:*, reg obj7:V, reg p7:p(V +), reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg i21:I, reg r32:V, reg objsWhat:*, reg objsWhat1:V, reg length:cls, reg r33:V, reg r34:V, reg c7:L, reg vapply:cls, reg objsWhat2:*, reg objsWhat3:V, reg p8:p(V +), reg is1:*, reg is2:V, reg p9:p(V +), reg logical:cls, reg r38:V, reg p10:p(V +), reg r40:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg i28:I, reg r42:V, reg isDef:*, reg isDef1:V, reg any:cls, reg r43:V, reg c8:L, reg objsWhat4:*, reg objsWhat5:V, reg c9:L, reg i32:I, reg objsWhat7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i34:I, reg dx3:V, reg __2:cls, reg r44:V, reg r45:cls, reg which:cls, reg isDef2:*, reg isDef3:V, reg p11:p(V +), reg r47:V, reg p12:p(V +), reg r49:V, reg __3:cls, reg r50:V, reg __4:cls, reg r51:V, reg i35:I, reg r52:V, reg anySig3:*, reg anySig4:V, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg __5:cls, reg r53:V, reg p13:p(V +), reg r55:V, reg p14:p(V +), reg sQuote1:cls, reg what2:*, reg what3:V, reg p15:p(V +), reg r58:V, reg p16:p(V +), reg dQuote:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r60:V, reg r61:V, reg obj8:*, reg obj9:V, reg class:cls, reg r62:V, reg p17:p(V +), reg r64:V, reg p18:p(V +), reg r66:V, reg p19:p(V +), reg r68:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r69:V, reg i38:I, reg r70:V, reg sig:*, reg sig1:V, reg length1:cls, reg r71:V, reg ns:*, reg ns1:V, reg n:*, reg n1:V, reg r72:V, reg c10:L, reg i41:I, reg ns2:*, reg ns3:V, reg n2:*, reg n3:V, reg r74:V, reg c11:L, reg n4:*, reg n5:V, reg ns4:*, reg ns5:V, reg r75:V, reg packageSlot:cls, reg sig2:*, reg sig3:V, reg p20:p(V +), reg r77:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r78:V, reg i46:I, reg r79:V, reg sigPackage:*, reg sigPackage1:V, reg length2:cls, reg r80:V, reg ns6:*, reg ns7:V, reg r81:V, reg c12:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r82:V, reg i51:I, reg r83:V, reg sigPackage2:*, reg sigPackage3:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r84:V, reg i54:I, reg r85:V, reg rep1:cls, reg r86:V, reg c13:cls, reg r87:V, reg i55:I, reg _simpleSignature:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r89:V, reg r90:V, reg sig4:*, reg sig5:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r91:V, reg r92:V, reg rep2:cls, reg r93:V, reg c14:cls, reg r94:V, reg p21:p(V +), reg __6:cls, reg r96:V, reg c15:L, reg r98:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg n6:*, reg n7:V, reg r99:V, reg __7:cls, reg r100:V, reg p22:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r102:V, reg r103:V, reg sigPackage4:*, reg sigPackage5:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r104:V, reg r105:V, reg rep3:cls, reg r106:V, reg c16:cls, reg r107:V, reg p23:p(V +), reg r109:V, reg _xpdSignature:cls, reg obj10:*, reg obj11:V, reg p24:p(V +), reg sig6:*, reg sig7:V, reg p25:p(V +), reg n8:*, reg n9:V, reg ns8:*, reg ns9:V, reg r112:V, reg p26:p(V +), reg r114:V, reg _sigLabel:cls, reg sig8:*, reg sig9:V, reg p27:p(V +), reg r116:V, reg n10:*, reg n11:V, reg add3:*, reg add4:V, reg c17:L, reg __8:cls, reg r117:V, reg ns10:*, reg ns11:V, reg l1:*, reg length__:cls, reg r118:V, reg _resetTable:cls, reg table1:*, reg table2:V, reg p28:p(V +), reg ns12:*, reg ns13:V, reg p29:p(V +), reg signames:*, reg signames1:V, reg p30:p(V +), reg r122:V, reg ns14:*, reg ns15:V, reg l2:*, reg c18:L, reg i59:I, reg ns17:V, reg l4:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i61:I, reg dx7:V, reg ____:cls, reg r123:V, reg ns20:*, reg ns21:V, reg add5:*, reg add6:V, reg c19:L, reg exists1:cls, reg what4:*, reg what5:V, reg p31:p(V +), reg table3:*, reg table4:V, reg p32:p(V +), reg r126:V, reg c20:L, reg _newOrMultipleMethod:cls, reg obj12:*, reg obj13:V, reg p33:p(V +), reg what6:*, reg what7:V, reg p34:p(V +), reg table5:*, reg table6:V, reg p35:p(V +), reg r130:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r131:V, reg i68:I, reg r132:V, reg allTable:*, reg allTable1:V, reg c21:V, reg c22:L, reg get2:cls, reg fenv6:*, reg fenv7:V, reg p36:p(V +), reg r134:V, reg i71:I, reg obj14:*, reg obj15:V, reg l5:*, reg c23:L, reg i73:I, reg obj17:V, reg l7:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i75:I, reg obj19:V, reg dx9:V, reg what8:*, reg what9:V, reg ____1:cls, reg r136:V, reg i76:I, reg obj21:*, reg obj22:V, reg l8:*, reg c24:L, reg i78:I, reg obj24:V, reg l10:*, reg dr10:V, reg dc5:L, reg dx10:V, reg i80:I, reg obj26:V, reg dx11:V, reg what10:*, reg what11:V, reg ____2:cls, reg r137:V, reg i81:I, reg exists2:cls, reg what12:*, reg what13:V, reg p37:p(V +), reg table7:*, reg table8:V, reg p38:p(V +), reg r140:V, reg c25:L, reg i83:I, reg c27:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r141:V, reg i86:I, reg c30:L, reg r142:V, reg __9:cls, reg r143:V, reg r144:V, reg all:cls, reg r145:V, reg r146:V, reg c31:L, reg c32:V, reg c34:L, reg remove:cls, reg what14:*, reg what15:V, reg p39:p(V +), reg allTable2:*, reg allTable3:V, reg p40:p(V +), reg r149:V, reg remove1:cls, reg what16:*, reg what17:V, reg p41:p(V +), reg table9:*, reg table10:V, reg p42:p(V +), reg r152:V |
    mkenv;
    st generic = generic;
    st table = table;
    st newtable = newtable;
    add_isMissing = missing.0(add);
    if add_isMissing then L0(TRUE) else L0(add);
  L0(add_orDefault):
    st add = add_orDefault;
    environment = ldf environment;
    check L45() else D0();
  D0():
    deopt 1 [];
  L45():
    p = prom<V +>{
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      return generic2;
    };
    r1 = dyn environment(p);
    check L46() else D1();
  D1():
    deopt 3 [r1];
  L46():
    st fenv = r1;
    exists = ldf exists;
    check L47() else D2();
  D2():
    deopt 6 [];
  L47():
    p1 = prom<V +>{
      fenv = ld fenv;
      fenv1 = force? fenv;
      checkMissing(fenv1);
      return fenv1;
    };
    r3 = dyn exists[, envir, inherits](".SigLength", p1, FALSE);
    check L48() else D3();
  D3():
    deopt 12 [r3];
  L48():
    r4 = `!`(r3);
    c = `as.logical`(r4);
    if c then L49() else L1();
  L1():
    goto L2();
  L2():
    add1 = ld add;
    check L53() else D6();
  L49():
    _setupMethodsTables = ldf `.setupMethodsTables`;
    check L50() else D4();
  D4():
    deopt 15 [];
  D6():
    deopt 20 [add1];
  L50():
    p2 = prom<V +>{
      generic3 = ld generic;
      generic4 = force? generic3;
      checkMissing(generic4);
      return generic4;
    };
    r6 = dyn _setupMethodsTables(p2);
    check L51() else D5();
  L53():
    add2 = force? add1;
    checkMissing(add2);
    r8 = `!`(add2);
    c1 = `as.logical`(r8);
    if c1 then L54() else L3();
  D5():
    deopt 17 [r6];
  L3():
    goto L4(NULL);
  L4(r11):
    st allTable = r11;
    get1 = ldf get;
    check L58() else D9();
  L51():
    goto L2();
  L54():
    get = ldf get;
    check L55() else D7();
  D7():
    deopt 24 [];
  D9():
    deopt 33 [];
  L55():
    p3 = prom<V +>{
      fenv2 = ld fenv;
      fenv3 = force? fenv2;
      checkMissing(fenv3);
      return fenv3;
    };
    r10 = dyn get[, envir](".AllMTable", p3);
    check L56() else D8();
  L58():
    p4 = prom<V +>{
      fenv4 = ld fenv;
      fenv5 = force? fenv4;
      checkMissing(fenv5);
      return fenv5;
    };
    r13 = dyn get1[, envir](".SigLength", p4);
    check L59() else D10();
  D8():
    deopt 28 [r10];
  D10():
    deopt 37 [r13];
  L56():
    goto L4(r10);
  L59():
    st n = r13;
    sym = ldf rep;
    base = ldf rep in base;
    guard = `==`.4(sym, base);
    if guard then L60() else L61();
  L5(r15):
    st anySig = r15;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L62() else L63();
  L60():
    rep = ldf rep in base;
    r16 = dyn rep("ANY", <sym n>);
    goto L5(r16);
  L61():
    r14 = dyn base("ANY", <sym n>);
    goto L5(r14);
  L6(r18):
    st newMethods = r18;
    newMethods = ld newMethods;
    check L66() else D13();
  L62():
    newtable1 = ld newtable;
    check L64() else D11();
  L63():
    r17 = dyn base1(<sym newtable>);
    goto L6(r17);
  D11():
    deopt 45 [newtable1];
  D13():
    deopt 50 [newMethods];
  L64():
    newtable2 = force? newtable1;
    checkMissing(newtable2);
    names = ldf names in base;
    r19 = dyn names(newtable2);
    check L65() else D12();
  L66():
    newMethods1 = force? newMethods;
    checkMissing(newMethods1);
    s = toForSeq(newMethods1);
    l = length(s);
    i = 0;
    goto L7(i);
  D12():
    deopt 48 [r19];
  L7(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L67() else L44();
  L65():
    goto L6(r19);
  L44():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    newtable3 = ld newtable;
    check L68() else D14();
  L67():
    popenv;
    return NULL;
  D14():
    deopt 52 [i2, newtable3];
  L68():
    newtable4 = force? newtable3;
    checkMissing(newtable4);
    c3 = `is.object`(newtable4);
    if c3 then L69() else L70(i2, newtable4);
  L8(i8, dx1):
    st obj = dx1;
    is_primitive = ldf `is.primitive`;
    check L73() else D16();
  L69():
    dr = tryDispatchBuiltin.1("[[", newtable4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L71() else L70(i2, dr);
  L70(i6, newtable6):
    what = ld what;
    check L72() else D15();
  D15():
    deopt 54 [i6, newtable6, what];
  D16():
    deopt 59 [i8];
  L71():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(i2, dx);
  L72():
    what1 = force? what;
    __ = ldf `[[` in base;
    r20 = dyn __(newtable6, what1);
    goto L8(i6, r20);
  L73():
    p5 = prom<V +>{
      obj = ld obj;
      obj1 = force? obj;
      checkMissing(obj1);
      return obj1;
    };
    r22 = dyn is_primitive(p5);
    check L74() else D17();
  D17():
    deopt 61 [i8, r22];
  L74():
    c4 = `as.logical`(r22);
    if c4 then L75() else L9();
  L9():
    is = ldf is;
    check L78() else D19();
  L10(i11):
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L115() else L116();
  L75():
    anySig = ld anySig;
    check L76() else D18();
  D18():
    deopt 62 [i8, anySig];
  D19():
    deopt 66 [i8];
  L21(i38, r70):
    st ns = r70;
    ns = ld ns;
    check L119() else D40();
  L76():
    anySig1 = force? anySig;
    checkMissing(anySig1);
    st sig = anySig1;
    goto L10(i8);
  L78():
    p6 = prom<V +>{
      obj2 = ld obj;
      obj3 = force? obj2;
      checkMissing(obj3);
      return obj3;
    };
    r24 = dyn is(p6, "MethodDefinition");
    check L79() else D20();
  L115():
    sig = ld sig;
    check L117() else D38();
  L116():
    r69 = dyn base6(<sym sig>);
    goto L21(i11, r69);
  D20():
    deopt 69 [i8, r24];
  D38():
    deopt 141 [i11, sig];
  D40():
    deopt 146 [i38, ns];
  L79():
    c5 = `as.logical`(r24);
    if c5 then L80() else L11();
  L117():
    sig1 = force? sig;
    checkMissing(sig1);
    length1 = ldf length in base;
    r71 = dyn length1(sig1);
    check L118() else D39();
  L119():
    ns1 = force? ns;
    checkMissing(ns1);
    n = ld n;
    check L120() else D41();
  D39():
    deopt 144 [i11, r71];
  D41():
    deopt 147 [i38, ns1, n];
  L11():
    sym2 = ldf `is.environment`;
    base2 = ldf `is.environment` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L82() else L83();
  L80():
    __1 = ldf `@` in base;
    r25 = dyn __1(<sym obj>, <sym defined>);
    st sig = r25;
    goto L10(i8);
  L118():
    goto L21(i11, r71);
  L120():
    n1 = force? n;
    checkMissing(n1);
    r72 = `==`(ns1, n1);
    c10 = `as.logical`(r72);
    if c10 then L121() else L22();
  L12(i16, r27):
    c6 = `as.logical`(r27);
    if c6 then L86() else L13();
  L22():
    ns2 = ld ns;
    check L123() else D42();
  L23(i41):
    add5 = ld add;
    check L164() else D68();
  L82():
    obj4 = ld obj;
    check L84() else D21();
  L83():
    r26 = dyn base2(<sym obj>);
    goto L12(i8, r26);
  L121():
    goto L23(i38);
  D21():
    deopt 75 [i8, obj4];
  D42():
    deopt 152 [i38, ns2];
  D68():
    deopt 240 [i41, add5];
  L13():
    stop = ldf stop;
    check L113() else D36();
  L84():
    obj5 = force? obj4;
    checkMissing(obj5);
    is_environment = ldf `is.environment` in base;
    r28 = dyn is_environment(obj5);
    check L85() else D22();
  L86():
    as_list = ldf `as.list`;
    check L87() else D23();
  L123():
    ns3 = force? ns2;
    checkMissing(ns3);
    n2 = ld n;
    check L124() else D43();
  L164():
    add6 = force? add5;
    checkMissing(add6);
    c19 = `as.logical`(add6);
    if c19 then L165() else L32();
  D22():
    deopt 78 [i8, r28];
  D23():
    deopt 80 [i16];
  D36():
    deopt 134 [i16];
  D43():
    deopt 153 [i38, ns3, n2];
  L32():
    exists2 = ldf exists;
    check L190() else D80();
  L40(i81):
    goto L7(i81);
  L85():
    goto L12(i8, r28);
  L87():
    p7 = prom<V +>{
      obj6 = ld obj;
      obj7 = force? obj6;
      checkMissing(obj7);
      return obj7;
    };
    r30 = dyn as_list[, `all.names`, sorted](p7, TRUE, TRUE);
    check L88() else D24();
  L113():
    p19 = prom<V +>{
      gettextf = ldf gettextf;
      p14 = prom<V +>{
        sQuote = ldf sQuote;
        p13 = prom<V +>{
          __5 = ldf `@` in base;
          r53 = dyn __5(<sym generic>, <sym generic>);
          return r53;
        };
        r55 = dyn sQuote(p13);
        return r55;
      };
      p16 = prom<V +>{
        sQuote1 = ldf sQuote;
        p15 = prom<V +>{
          what2 = ld what;
          what3 = force? what2;
          checkMissing(what3);
          return what3;
        };
        r58 = dyn sQuote1(p15);
        return r58;
      };
      p18 = prom<V +>{
        dQuote = ldf dQuote;
        p17 = prom<V +>{
          sym5 = ldf class;
          base5 = ldf class in base;
          guard5 = `==`.4(sym5, base5);
          if guard5 then L1() else L2();
        L0(r61):
          return r61;
        L1():
          obj8 = ld obj;
          obj9 = force? obj8;
          checkMissing(obj9);
          class = ldf class in base;
          r62 = dyn class(obj9);
          goto L0(r62);
        L2():
          r60 = dyn base5(<sym obj>);
          goto L0(r60);
        };
        r64 = dyn dQuote(p17);
        return r64;
      };
      r66 = dyn gettextf("invalid object in meta table of methods for %s, label %s, had class %s", p14, p16, p18);
      return r66;
    };
    r68 = dyn stop[, domain](p19, NA_LGL);
    check L114() else D37();
  L124():
    n3 = force? n2;
    checkMissing(n3);
    r74 = `<`(ns3, n3);
    c11 = `as.logical`(r74);
    if c11 then L125() else L24();
  L165():
    exists1 = ldf exists;
    check L166() else D69();
  D24():
    deopt 86 [i16, r30];
  D37():
    deopt 138 [i16, r68];
  D69():
    deopt 243 [i41];
  D80():
    deopt 287 [i41];
  L24():
    add3 = ld add;
    check L151() else D60();
  L88():
    st objsWhat = r30;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L89() else L90();
  L114():
    goto L10(i16);
  L125():
    n4 = ld n;
    check L126() else D44();
  L166():
    p31 = prom<V +>{
      what4 = ld what;
      what5 = force? what4;
      checkMissing(what5);
      return what5;
    };
    p32 = prom<V +>{
      table3 = ld table;
      table4 = force? table3;
      checkMissing(table4);
      return table4;
    };
    r126 = dyn exists1[, envir, inherits](p31, p32, FALSE);
    check L167() else D70();
  L190():
    p37 = prom<V +>{
      what12 = ld what;
      what13 = force? what12;
      checkMissing(what13);
      return what13;
    };
    p38 = prom<V +>{
      table7 = ld table;
      table8 = force? table7;
      checkMissing(table8);
      return table8;
    };
    r140 = dyn exists2[, envir, inherits](p37, p38, FALSE);
    check L191() else D81();
  D44():
    deopt 156 [i38, n4];
  D60():
    deopt 210 [i38, add3];
  D70():
    deopt 249 [i41, r126];
  D81():
    deopt 293 [i41, r140];
  L14(i21, r32):
    r34 = `==`(r32, 0.0);
    c7 = `as.logical`(r34);
    if c7 then L93() else L15();
  L89():
    objsWhat = ld objsWhat;
    check L91() else D25();
  L90():
    r31 = dyn base3(<sym objsWhat>);
    goto L14(i16, r31);
  L126():
    n5 = force? n4;
    checkMissing(n5);
    ns4 = ld ns;
    check L127() else D45();
  L151():
    add4 = force? add3;
    checkMissing(add4);
    c17 = `as.logical`(add4);
    if c17 then L152() else L30();
  L167():
    c20 = `as.logical`(r126);
    if c20 then L168() else L33();
  L191():
    c25 = `as.logical`(r140);
    if c25 then L192() else L41(i41, c25);
  D25():
    deopt 90 [i16, objsWhat];
  D45():
    deopt 157 [i38, n5, ns4];
  L15():
    vapply = ldf vapply;
    check L96() else D27();
  L30():
    goto L23(i38);
  L33():
    goto L38(i41);
  L38(i76):
    obj21 = ld obj;
    check L184() else D78();
  L41(i83, c27):
    c34 = `as.logical`(c27);
    if c34 then L197() else L43();
  L91():
    objsWhat1 = force? objsWhat;
    checkMissing(objsWhat1);
    length = ldf length in base;
    r33 = dyn length(objsWhat1);
    check L92() else D26();
  L93():
    goto L7(i21);
  L127():
    ns5 = force? ns4;
    checkMissing(ns5);
    r75 = `-`(n5, ns5);
    st nadd = r75;
    packageSlot = ldf packageSlot;
    check L128() else D46();
  L152():
    __8 = ldf `@` in base;
    r117 = dyn __8(<sym generic>, <sym signature>);
    st signames = r117;
    ns10 = ld ns;
    check L153() else D61();
  L168():
    _newOrMultipleMethod = ldf `.newOrMultipleMethod`;
    check L169() else D71();
  L192():
    sym15 = ldf all;
    base15 = ldf all in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L193() else L194();
  D26():
    deopt 93 [i16, r33];
  D27():
    deopt 101 [i21];
  D46():
    deopt 162 [i38];
  D61():
    deopt 215 [i38, ns10];
  D71():
    deopt 251 [i41];
  D78():
    deopt 279 [i76, obj21];
  L42(i86, c30, r142):
    r146 = `!`(r142);
    c31 = `as.logical`(r146);
    c32 = `&&`(c30, c31);
    goto L41(i86, c32);
  L43():
    goto L40(i83);
  L92():
    goto L14(i16, r33);
  L96():
    p8 = prom<V +>{
      objsWhat2 = ld objsWhat;
      objsWhat3 = force? objsWhat2;
      checkMissing(objsWhat3);
      return objsWhat3;
    };
    p9 = prom<V +>{
      is1 = ld is;
      is2 = force? is1;
      checkMissing(is2);
      return is2;
    };
    p10 = prom<V +>{
      logical = ldf logical;
      r38 = dyn logical(1);
      return r38;
    };
    r40 = dyn vapply(p8, p9, p10, "MethodDefinition");
    check L97() else D28();
  L128():
    p20 = prom<V +>{
      sig2 = ld sig;
      sig3 = force? sig2;
      checkMissing(sig3);
      return sig3;
    };
    r77 = dyn packageSlot(p20);
    check L129() else D47();
  L153():
    ns11 = force? ns10;
    checkMissing(ns11);
    l1 = ld signames;
    length__ = ldf `length<-`;
    check L154() else D62();
  L169():
    p33 = prom<V +>{
      obj12 = ld obj;
      obj13 = force? obj12;
      checkMissing(obj13);
      return obj13;
    };
    p34 = prom<V +>{
      what6 = ld what;
      what7 = force? what6;
      checkMissing(what7);
      return what7;
    };
    p35 = prom<V +>{
      table5 = ld table;
      table6 = force? table5;
      checkMissing(table6);
      return table6;
    };
    r130 = dyn _newOrMultipleMethod(p33, p34, p35);
    check L170() else D72();
  L184():
    obj22 = force? obj21;
    checkMissing(obj22);
    l8 = ld table;
    c24 = `is.object`(l8);
    if c24 then L185() else L186(i76, obj22, l8);
  L193():
    __9 = ldf `@` in base;
    r143 = dyn __9(<sym obj>, <sym defined>);
    r144 = `==`(r143, "ANY");
    all = ldf all in base;
    r145 = dyn all(r144);
    check L195() else D82();
  L194():
    r141 = dyn base15(<lang `==`(`@`(obj, defined), "ANY")>);
    goto L42(i41, c25, r141);
  L197():
    remove = ldf remove;
    check L198() else D83();
  D28():
    deopt 106 [i21, r40];
  D47():
    deopt 164 [i38, r77];
  D62():
    deopt 218 [i38, ns11, l1, ns11];
  D72():
    deopt 255 [i41, r130];
  D82():
    deopt 301 [i41, c25, r145];
  D83():
    deopt 305 [i83];
  L39(i80, obj26, dx11):
    st table = dx11;
    goto L40(i80);
  L97():
    st isDef = r40;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L98() else L99();
  L129():
    st sigPackage = r77;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L130() else L131();
  L154():
    r118 = dyn length__(l1, NULL, ns11);
    check L155() else D63();
  L170():
    st obj = r130;
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L171() else L172();
  L185():
    dr10 = tryDispatchBuiltin.0("[[<-", l8, obj22);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L187() else L186(i76, obj22, dr10);
  L186(i78, obj24, l10):
    what10 = ld what;
    check L188() else D79();
  L195():
    goto L42(i41, c25, r145);
  L198():
    p39 = prom<V +>{
      what14 = ld what;
      what15 = force? what14;
      checkMissing(what15);
      return what15;
    };
    p40 = prom<V +>{
      allTable2 = ld allTable;
      allTable3 = force? allTable2;
      checkMissing(allTable3);
      return allTable3;
    };
    r149 = dyn remove[list, envir](p39, p40);
    check L199() else D84();
  D63():
    deopt 220 [i38, ns11, r118];
  D79():
    deopt 282 [i78, obj24, l10, obj22, what10];
  D84():
    deopt 310 [i83, r149];
  L17(i28, r42):
    c8 = `as.logical`(r42);
    if c8 then L102() else L18();
  L25(i46, r79):
    ns6 = ld ns;
    check L134() else D50();
  L34(i68, r132):
    c22 = `as.logical`(r132);
    if c22 then L174() else L35();
  L98():
    isDef = ld isDef;
    check L100() else D29();
  L99():
    r41 = dyn base4(<sym isDef>);
    goto L17(i21, r41);
  L130():
    sigPackage = ld sigPackage;
    check L132() else D48();
  L131():
    r78 = dyn base7(<sym sigPackage>);
    goto L25(i38, r78);
  L155():
    st signames = r118;
    _resetTable = ldf `.resetTable`;
    check L156() else D64();
  L171():
    allTable = ld allTable;
    check L173() else D73();
  L172():
    r131 = dyn base14(<sym allTable>);
    goto L34(i41, r131);
  L187():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L39(i76, obj22, dx10);
  L188():
    what11 = force? what10;
    ____2 = ldf `[[<-` in base;
    r137 = dyn ____2(l10, obj22, what11);
    goto L39(i78, obj24, r137);
  L199():
    remove1 = ldf remove;
    check L200() else D85();
  D29():
    deopt 110 [i21, isDef];
  D48():
    deopt 168 [i38, sigPackage];
  D50():
    deopt 171 [i46, r79, ns6];
  D64():
    deopt 223 [i38];
  D73():
    deopt 258 [i41, allTable];
  D85():
    deopt 312 [i83];
  L18():
    anySig3 = ld anySig;
    check L111() else D35();
  L20(i35, r52):
    goto L10(i35);
  L35():
    goto L36(i68);
  L36(i71):
    obj14 = ld obj;
    check L178() else D76();
  L100():
    isDef1 = force? isDef;
    checkMissing(isDef1);
    any = ldf any in base;
    r43 = dyn any(isDef1);
    check L101() else D30();
  L102():
    objsWhat4 = ld objsWhat;
    check L103() else D31();
  L132():
    sigPackage1 = force? sigPackage;
    checkMissing(sigPackage1);
    length2 = ldf length in base;
    r80 = dyn length2(sigPackage1);
    check L133() else D49();
  L134():
    ns7 = force? ns6;
    checkMissing(ns7);
    r81 = `<`(r79, ns7);
    c12 = `as.logical`(r81);
    if c12 then L135() else L26();
  L156():
    p28 = prom<V +>{
      table1 = ld table;
      table2 = force? table1;
      checkMissing(table2);
      return table2;
    };
    p29 = prom<V +>{
      ns12 = ld ns;
      ns13 = force? ns12;
      checkMissing(ns13);
      return ns13;
    };
    p30 = prom<V +>{
      signames = ld signames;
      signames1 = force? signames;
      checkMissing(signames1);
      return signames1;
    };
    r122 = dyn _resetTable(p28, p29, p30);
    check L157() else D65();
  L173():
    allTable1 = force? allTable;
    checkMissing(allTable1);
    c21 = `==`(allTable1, NULL);
    goto L34(i41, c21);
  L174():
    get2 = ldf get;
    check L175() else D74();
  L200():
    p41 = prom<V +>{
      what16 = ld what;
      what17 = force? what16;
      checkMissing(what17);
      return what17;
    };
    p42 = prom<V +>{
      table9 = ld table;
      table10 = force? table9;
      checkMissing(table10);
      return table10;
    };
    r152 = dyn remove1[list, envir](p41, p42);
    check L201() else D86();
  D30():
    deopt 113 [i21, r43];
  D31():
    deopt 114 [i28, objsWhat4];
  D35():
    deopt 130 [i28, anySig3];
  D49():
    deopt 171 [i38, r80];
  D65():
    deopt 227 [i38, r122];
  D74():
    deopt 262 [i68];
  D76():
    deopt 270 [i71, obj14];
  D86():
    deopt 317 [i83, r152];
  L26():
    goto L29(i46);
  L29(i55):
    _simpleSignature = ldf `.simpleSignature`;
    check L143() else D53();
  L101():
    goto L17(i21, r43);
  L103():
    objsWhat5 = force? objsWhat4;
    checkMissing(objsWhat5);
    c9 = `is.object`(objsWhat5);
    if c9 then L104() else L105(i28, objsWhat5);
  L111():
    anySig4 = force? anySig3;
    checkMissing(anySig4);
    st sig = anySig4;
    goto L20(i28, anySig4);
  L133():
    goto L25(i38, r80);
  L135():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L136() else L137();
  L157():
    ns14 = ld ns;
    check L158() else D66();
  L175():
    p36 = prom<V +>{
      fenv6 = ld fenv;
      fenv7 = force? fenv6;
      checkMissing(fenv7);
      return fenv7;
    };
    r134 = dyn get2[, envir](".AllMTable", p36);
    check L176() else D75();
  L178():
    obj15 = force? obj14;
    checkMissing(obj15);
    l5 = ld allTable;
    c23 = `is.object`(l5);
    if c23 then L179() else L180(i71, obj15, l5);
  L201():
    goto L40(i83);
  D53():
    deopt 187 [i55];
  D66():
    deopt 228 [i38, ns14];
  D75():
    deopt 266 [i68, r134];
  L19(i34, dx3):
    st obj = dx3;
    __4 = ldf `@` in base;
    r51 = dyn __4(<sym obj>, <sym defined>);
    st sig = r51;
    goto L20(i34, r51);
  L27(i51, r83):
    st sigPackage = r83;
    goto L29(i51);
  L37(i75, obj19, dx9):
    st allTable = dx9;
    goto L38(i75);
  L104():
    dr2 = tryDispatchBuiltin.1("[[", objsWhat5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L106() else L105(i28, dr2);
  L105(i32, objsWhat7):
    __2 = ldf `::`;
    check L107() else D32();
  L136():
    sigPackage2 = ld sigPackage;
    check L138() else D51();
  L137():
    r82 = dyn base8(<sym sigPackage>, <lang rep("", `-`(ns, length(sigPackage)))>);
    goto L27(i46, r82);
  L143():
    p21 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L2() else L3();
    L0(r90):
      return r90;
    L2():
      sig4 = ld sig;
      sig5 = force? sig4;
      checkMissing(sig5);
      sym11 = ldf rep;
      base11 = ldf rep in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L4() else L5();
    L3():
      r89 = dyn base10(<sym sig>, <lang rep("ANY", nadd)>);
      goto L0(r89);
    L1(r92):
      c14 = ldf c in base;
      r94 = dyn c14(sig5, r92);
      goto L0(r94);
    L4():
      rep2 = ldf rep in base;
      r93 = dyn rep2("ANY", <sym nadd>);
      goto L1(r93);
    L5():
      r91 = dyn base11("ANY", <sym nadd>);
      goto L1(r91);
    };
    p22 = prom<V +>{
      __6 = ldf `@` in base;
      r96 = dyn __6(<sym generic>, <sym signature>);
      c15 = `is.object`(r96);
      if c15 then L1() else L2(r96);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", r96);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(r98):
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      r99 = `:`(1.0, n7);
      __7 = ldf `[` in base;
      r100 = dyn __7(r98, r99);
      goto L0(r100);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p23 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L2() else L3();
    L0(r103):
      return r103;
    L2():
      sigPackage4 = ld sigPackage;
      sigPackage5 = force? sigPackage4;
      checkMissing(sigPackage5);
      sym13 = ldf rep;
      base13 = ldf rep in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L4() else L5();
    L3():
      r102 = dyn base12(<sym sigPackage>, <lang rep("methods", nadd)>);
      goto L0(r102);
    L1(r105):
      c16 = ldf c in base;
      r107 = dyn c16(sigPackage5, r105);
      goto L0(r107);
    L4():
      rep3 = ldf rep in base;
      r106 = dyn rep3("methods", <sym nadd>);
      goto L1(r106);
    L5():
      r104 = dyn base13("methods", <sym nadd>);
      goto L1(r104);
    };
    r109 = dyn _simpleSignature[, names, packages](p21, p22, p23);
    check L144() else D54();
  L158():
    ns15 = force? ns14;
    checkMissing(ns15);
    l2 = ld fenv;
    c18 = `is.object`(l2);
    if c18 then L159() else L160(i38, ns15, l2);
  L176():
    st allTable = r134;
    goto L36(i68);
  L179():
    dr8 = tryDispatchBuiltin.0("[[<-", l5, obj15);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L181() else L180(i71, obj15, dr8);
  L180(i73, obj17, l7):
    what8 = ld what;
    check L182() else D77();
  D32():
    deopt 117 [i32, objsWhat7];
  D51():
    deopt 176 [i46, sigPackage2];
  D54():
    deopt 193 [i55, r109];
  D77():
    deopt 273 [i73, obj17, l7, obj15, what8];
  L31(i61, dx7):
    st fenv = dx7;
    ns20 = ld ns;
    check L162() else D67();
  L106():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L19(i28, dx2);
  L107():
    r44 = dyn __2("utils", "tail");
    check L108() else D33();
  L138():
    sigPackage3 = force? sigPackage2;
    checkMissing(sigPackage3);
    sym9 = ldf rep;
    base9 = ldf rep in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L139() else L140();
  L144():
    st sig = r109;
    _xpdSignature = ldf `.xpdSignature`;
    check L145() else D55();
  L159():
    dr6 = tryDispatchBuiltin.0("[[<-", l2, ns15);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L161() else L160(i38, ns15, dr6);
  L160(i59, ns17, l4):
    ____ = ldf `[[<-` in base;
    r123 = dyn ____(l4, ns15, ".SigLength");
    goto L31(i59, r123);
  L181():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L37(i71, obj15, dx8);
  L182():
    what9 = force? what8;
    ____1 = ldf `[[<-` in base;
    r136 = dyn ____1(l7, obj15, what9);
    goto L37(i73, obj17, r136);
  D33():
    deopt 120 [i32, objsWhat7, r44];
  D55():
    deopt 196 [i55];
  D67():
    deopt 235 [i61, ns20];
  L28(i54, r85):
    c13 = ldf c in base;
    r87 = dyn c13(sigPackage3, r85);
    check L141() else D52();
  L108():
    checkFun.0(r44);
    r45 = r44 as cls;
    p12 = prom<V +>{
      which = ldf which;
      p11 = prom<V +>{
        isDef2 = ld isDef;
        isDef3 = force? isDef2;
        checkMissing(isDef3);
        return isDef3;
      };
      r47 = dyn which(p11);
      return r47;
    };
    r49 = dyn r45(p12, 1);
    check L109() else D34();
  L139():
    rep1 = ldf rep in base;
    r86 = dyn rep1("", <lang `-`(ns, length(sigPackage))>);
    goto L28(i46, r86);
  L140():
    r84 = dyn base9("", <lang `-`(ns, length(sigPackage))>);
    goto L28(i46, r84);
  L145():
    p24 = prom<V +>{
      obj10 = ld obj;
      obj11 = force? obj10;
      checkMissing(obj11);
      return obj11;
    };
    p25 = prom<V +>{
      sig6 = ld sig;
      sig7 = force? sig6;
      checkMissing(sig7);
      return sig7;
    };
    p26 = prom<V +>{
      n8 = ld n;
      n9 = force? n8;
      checkMissing(n9);
      ns8 = ld ns;
      ns9 = force? ns8;
      checkMissing(ns9);
      r112 = `-`(n9, ns9);
      return r112;
    };
    r114 = dyn _xpdSignature(p24, p25, p26);
    check L146() else D56();
  L161():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L31(i38, dx6);
  L162():
    ns21 = force? ns20;
    checkMissing(ns21);
    st n = ns21;
    goto L23(i61);
  D34():
    deopt 124 [i32, objsWhat7, r49];
  D52():
    deopt 182 [i54, r87];
  D56():
    deopt 200 [i55, r114];
  L109():
    __3 = ldf `[[` in base;
    r50 = dyn __3(objsWhat7, r49);
    goto L19(i32, r50);
  L141():
    goto L27(i54, r87);
  L146():
    st obj = r114;
    _sigLabel = ldf `.sigLabel`;
    check L147() else D57();
  D57():
    deopt 203 [i55];
  L147():
    p27 = prom<V +>{
      sig8 = ld sig;
      sig9 = force? sig8;
      checkMissing(sig9);
      return sig9;
    };
    r116 = dyn _sigLabel(p27);
    check L148() else D58();
  D58():
    deopt 205 [i55, r116];
  L148():
    st what = r116;
    n10 = ld n;
    check L149() else D59();
  D59():
    deopt 207 [i55, n10];
  L149():
    n11 = force? n10;
    checkMissing(n11);
    st ns = n11;
    goto L23(i55);
  }
}