fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4085685083;
    st `.oneClassToAM` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4085685083(classDef, includeSubclasses, short) {
  (reg classDef:*, reg includeSubclasses:*, reg short:*) -+> V { var classDef:*, var includeSubclasses:*, reg includeSubclasses_isMissing:L, reg includeSubclasses_orDefault:*, var short:*, reg short_isMissing:L, reg short_orDefault:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg __:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg __1:cls, reg r6:V, reg names:cls, reg r7:V, reg c:cls, reg r8:V, reg includeSubclasses1:*, reg includeSubclasses2:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg nodes:*, reg nodes1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg __2:cls, reg r13:V, reg names1:cls, reg r14:V, reg c2:cls, reg r15:V, reg unique:cls, reg nodes2:*, reg nodes3:V, reg p:p(V +), reg r18:V, reg isTRUE:cls, reg short1:*, reg short2:V, reg p1:p(V +), reg r20:V, reg c3:L, reg abbreviate:cls, reg nodes4:*, reg nodes5:V, reg p2:p(V +), reg r22:V, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg short3:*, reg short4:V, reg c4:L, reg c5:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg r27:V, reg short5:*, reg short6:V, reg length:cls, reg r28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg r33:V, reg nodes6:*, reg nodes7:V, reg length1:cls, reg r34:V, reg r35:V, reg c6:L, reg stop:cls, reg gettextf:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg nodes8:*, reg nodes9:V, reg length2:cls, reg r38:V, reg p3:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg r41:V, reg short7:*, reg short8:V, reg length3:cls, reg r42:V, reg p4:p(V +), reg r44:V, reg p5:p(V +), reg r46:V, reg r47:V, reg short9:*, reg short10:V, reg nodes10:*, reg nodes11:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r48:V, reg r49:V, reg nodes12:*, reg nodes13:V, reg length4:cls, reg r50:V, reg matrix:cls, reg size:*, reg size1:V, reg p6:p(V +), reg size2:*, reg size3:V, reg p7:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r53:V, reg r54:V, reg labels:*, reg labels1:V, reg labels2:*, reg labels3:V, reg list:cls, reg r55:V, reg p8:p(V +), reg r57:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r58:V, reg r59:V, reg __3:cls, reg r60:V, reg nodes14:*, reg nodes15:V, reg match:cls, reg r61:V, reg __4:cls, reg r62:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r63:V, reg r64:V, reg extensions:*, reg extensions1:V, reg names2:cls, reg r65:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r66:V, reg r67:V, reg superclasses:*, reg superclasses1:V, reg nodes16:*, reg nodes17:V, reg match1:cls, reg r68:V, reg numeric:cls, reg r69:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r70:V, reg r71:V, reg extensions2:*, reg extensions3:V, reg r72:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c7:L, reg x:V, reg extensions4:*, reg extensions5:V, reg c8:L, reg i6:I, reg extensions7:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __5:cls, reg r73:V, reg __6:cls, reg r74:V, reg r75:V, reg c9:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r76:V, reg i15:I, reg r77:V, reg edges:*, reg edges1:V, reg ifrom:*, reg ifrom1:V, reg ito:*, reg ito1:V, reg c10:L, reg i17:I, reg ito3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i19:I, reg dx3:V, reg i20:*, reg i21:V, reg __7:cls, reg r78:V, reg c11:cls, reg r79:V, reg i22:I, reg sym16:cls, reg base16:cls, reg guard16:L, reg r81:V, reg r82:V, reg edges2:*, reg edges3:V, reg findEdges:cls, reg __8:cls, reg r83:V, reg p9:p(V +), reg r85:V, reg c12:cls, reg r86:V, reg includeSubclasses3:*, reg includeSubclasses4:V, reg c13:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r87:V, reg r88:V, reg edges4:*, reg edges5:V, reg findEdges1:cls, reg __9:cls, reg r89:V, reg p10:p(V +), reg r91:V, reg c14:cls, reg r92:V, reg t:cls, reg matrix1:cls, reg edges6:*, reg edges7:V, reg p11:p(V +), reg r95:V, reg p12:p(V +), reg r97:V, reg l1:*, reg c15:L, reg r99:R, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg edges8:*, reg edges9:V, reg ___:cls, reg r102:V, reg value:*, reg value1:V |
    mkenv;
    st classDef = classDef;
    includeSubclasses_isMissing = missing.0(includeSubclasses);
    if includeSubclasses_isMissing then L0(FALSE) else L0(includeSubclasses);
  L0(includeSubclasses_orDefault):
    st includeSubclasses = includeSubclasses_orDefault;
    short_isMissing = missing.0(short);
    if short_isMissing then L1(FALSE) else L1(short);
  L1(short_orDefault):
    st short = short_orDefault;
    r = clos inner2245834676;
    st findEdges = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L33() else L34();
  L2(r2):
    st nodes = r2;
    includeSubclasses1 = ld includeSubclasses;
    check L39() else D2();
  L33():
    __ = ldf `@` in base;
    r3 = dyn __(<sym classDef>, <sym className>);
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L34():
    r1 = dyn base(<lang `@`(classDef, className)>, <lang names(`@`(classDef, contains))>);
    goto L2(r1);
  D2():
    deopt 16 [includeSubclasses1];
  L3(r5):
    c = ldf c in base;
    r8 = dyn c(r3, r5);
    check L38() else D1();
  L35():
    __1 = ldf `@` in base;
    r6 = dyn __1(<sym classDef>, <sym contains>);
    names = ldf names in base;
    r7 = dyn names(r6);
    check L37() else D0();
  L36():
    r4 = dyn base1(<lang `@`(classDef, contains)>);
    goto L3(r4);
  L39():
    includeSubclasses2 = force? includeSubclasses1;
    checkMissing(includeSubclasses2);
    c1 = `as.logical`(includeSubclasses2);
    if c1 then L40() else L4();
  D0():
    deopt 12 [r7];
  D1():
    deopt 14 [r8];
  L4():
    goto L7();
  L7():
    unique = ldf unique;
    check L49() else D6();
  L37():
    goto L3(r7);
  L38():
    goto L2(r8);
  L40():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  D6():
    deopt 34 [];
  L5(r10):
    st nodes = r10;
    goto L7();
  L41():
    nodes = ld nodes;
    check L43() else D3();
  L42():
    r9 = dyn base2(<sym nodes>, <lang names(`@`(classDef, subclasses))>);
    goto L5(r9);
  L49():
    p = prom<V +>{
      nodes2 = ld nodes;
      nodes3 = force? nodes2;
      checkMissing(nodes3);
      return nodes3;
    };
    r18 = dyn unique(p);
    check L50() else D7();
  D3():
    deopt 20 [nodes];
  D7():
    deopt 36 [r18];
  L43():
    nodes1 = force? nodes;
    checkMissing(nodes1);
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  L50():
    st nodes = r18;
    isTRUE = ldf isTRUE;
    check L51() else D8();
  D8():
    deopt 39 [];
  L6(r12):
    c2 = ldf c in base;
    r15 = dyn c2(nodes1, r12);
    check L47() else D5();
  L44():
    __2 = ldf `@` in base;
    r13 = dyn __2(<sym classDef>, <sym subclasses>);
    names1 = ldf names in base;
    r14 = dyn names1(r13);
    check L46() else D4();
  L45():
    r11 = dyn base3(<lang `@`(classDef, subclasses)>);
    goto L6(r11);
  L51():
    p1 = prom<V +>{
      short1 = ld short;
      short2 = force? short1;
      checkMissing(short2);
      return short2;
    };
    r20 = dyn isTRUE(p1);
    check L52() else D9();
  D4():
    deopt 27 [r14];
  D5():
    deopt 29 [r15];
  D9():
    deopt 41 [r20];
  L46():
    goto L6(r14);
  L47():
    goto L5(r15);
  L52():
    c3 = `as.logical`(r20);
    if c3 then L53() else L8();
  L8():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L57() else L58();
  L9(r23):
    st labels = r23;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L76() else L77();
  L53():
    abbreviate = ldf abbreviate;
    check L54() else D10();
  D10():
    deopt 43 [];
  L10(r25):
    c5 = `as.logical`(r25);
    if c5 then L60() else L11();
  L16(r49):
    st size = r49;
    matrix = ldf matrix;
    check L80() else D23();
  L54():
    p2 = prom<V +>{
      nodes4 = ld nodes;
      nodes5 = force? nodes4;
      checkMissing(nodes5);
      return nodes5;
    };
    r22 = dyn abbreviate(p2);
    check L55() else D11();
  L57():
    short3 = ld short;
    check L59() else D12();
  L58():
    r24 = dyn base4(<sym short>);
    goto L10(r24);
  L76():
    nodes12 = ld nodes;
    check L78() else D21();
  L77():
    r48 = dyn base9(<sym nodes>);
    goto L16(r48);
  D11():
    deopt 45 [r22];
  D12():
    deopt 47 [short3];
  D21():
    deopt 75 [nodes12];
  D23():
    deopt 81 [];
  L11():
    nodes10 = ld nodes;
    check L75() else D20();
  L55():
    goto L9(r22);
  L59():
    short4 = force? short3;
    checkMissing(short4);
    c4 = `is.character`(short4);
    goto L10(c4);
  L60():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L61() else L62();
  L78():
    nodes13 = force? nodes12;
    checkMissing(nodes13);
    length4 = ldf length in base;
    r50 = dyn length4(nodes13);
    check L79() else D22();
  L80():
    p6 = prom<V +>{
      size = ld size;
      size1 = force? size;
      checkMissing(size1);
      return size1;
    };
    p7 = prom<V +>{
      size2 = ld size;
      size3 = force? size2;
      checkMissing(size3);
      return size3;
    };
    p8 = prom<V +>{
      sym10 = ldf list;
      base10 = ldf list in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r54):
      return r54;
    L1():
      labels = ld labels;
      labels1 = force? labels;
      checkMissing(labels1);
      labels2 = ld labels;
      labels3 = force? labels2;
      checkMissing(labels3);
      list = ldf list in base;
      r55 = dyn list(labels1, labels3);
      goto L0(r55);
    L2():
      r53 = dyn base10(<sym labels>, <sym labels>);
      goto L0(r53);
    };
    r57 = dyn matrix[, , , dimnames](0.0, p6, p7, p8);
    check L81() else D24();
  D20():
    deopt 70 [nodes10];
  D22():
    deopt 78 [r50];
  D24():
    deopt 87 [r57];
  L12(r27):
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L65() else L66();
  L61():
    short5 = ld short;
    check L63() else D13();
  L62():
    r26 = dyn base5(<sym short>);
    goto L12(r26);
  L75():
    nodes11 = force? nodes10;
    checkMissing(nodes11);
    goto L9(nodes11);
  L79():
    goto L16(r50);
  L81():
    st value = r57;
    sym11 = ldf match;
    base11 = ldf match in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L82() else L83();
  D13():
    deopt 52 [short5];
  L13(r32, r33):
    r35 = `!=`(r32, r33);
    c6 = `as.logical`(r35);
    if c6 then L69() else L14();
  L17(r59):
    st ifrom = r59;
    __4 = ldf `@` in base;
    r62 = dyn __4(<sym classDef>, <sym contains>);
    st extensions = r62;
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L86() else L87();
  L63():
    short6 = force? short5;
    checkMissing(short6);
    length = ldf length in base;
    r28 = dyn length(short6);
    check L64() else D14();
  L65():
    nodes6 = ld nodes;
    check L67() else D15();
  L66():
    r31 = dyn base6(<sym nodes>);
    goto L13(r27, r31);
  L82():
    __3 = ldf `@` in base;
    r60 = dyn __3(<sym classDef>, <sym className>);
    nodes14 = ld nodes;
    check L84() else D25();
  L83():
    r58 = dyn base11(<lang `@`(classDef, className)>, <sym nodes>);
    goto L17(r58);
  D14():
    deopt 55 [r28];
  D15():
    deopt 57 [r27, nodes6];
  D25():
    deopt 93 [nodes14];
  L14():
    short9 = ld short;
    check L73() else D19();
  L15(r47):
    goto L9(r47);
  L18(r64):
    st superclasses = r64;
    sym13 = ldf match;
    base13 = ldf match in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L90() else L91();
  L64():
    goto L12(r28);
  L67():
    nodes7 = force? nodes6;
    checkMissing(nodes7);
    length1 = ldf length in base;
    r34 = dyn length1(nodes7);
    check L68() else D16();
  L69():
    stop = ldf stop;
    check L70() else D17();
  L84():
    nodes15 = force? nodes14;
    checkMissing(nodes15);
    match = ldf match in base;
    r61 = dyn match(r60, nodes15, NA_INT, NULL);
    check L85() else D26();
  L86():
    extensions = ld extensions;
    check L88() else D27();
  L87():
    r63 = dyn base12(<sym extensions>);
    goto L18(r63);
  D16():
    deopt 60 [r27, r34];
  D17():
    deopt 63 [];
  D19():
    deopt 68 [short9];
  D26():
    deopt 98 [r61];
  D27():
    deopt 105 [extensions];
  L19(r67):
    st ito = r67;
    numeric = ldf numeric;
    check L95() else D32();
  L68():
    goto L13(r27, r34);
  L70():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        sym7 = ldf length;
        base7 = ldf length in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r37):
        return r37;
      L1():
        nodes8 = ld nodes;
        nodes9 = force? nodes8;
        checkMissing(nodes9);
        length2 = ldf length in base;
        r38 = dyn length2(nodes9);
        goto L0(r38);
      L2():
        r36 = dyn base7(<sym nodes>);
        goto L0(r36);
      };
      p4 = prom<V +>{
        sym8 = ldf length;
        base8 = ldf length in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r41):
        return r41;
      L1():
        short7 = ld short;
        short8 = force? short7;
        checkMissing(short8);
        length3 = ldf length in base;
        r42 = dyn length3(short8);
        goto L0(r42);
      L2():
        r40 = dyn base8(<sym short>);
        goto L0(r40);
      };
      r44 = dyn gettextf("needed the supplied labels vector of length %d, got %d", p3, p4);
      return r44;
    };
    r46 = dyn stop[, domain](p5, NA_LGL);
    check L71() else D18();
  L73():
    short10 = force? short9;
    checkMissing(short10);
    goto L15(short10);
  L85():
    goto L17(r61);
  L88():
    extensions1 = force? extensions;
    checkMissing(extensions1);
    names2 = ldf names in base;
    r65 = dyn names2(extensions1);
    check L89() else D28();
  L90():
    superclasses = ld superclasses;
    check L92() else D29();
  L91():
    r66 = dyn base13(<sym superclasses>, <sym nodes>);
    goto L19(r66);
  D18():
    deopt 67 [r46];
  D28():
    deopt 108 [r65];
  D29():
    deopt 112 [superclasses];
  D32():
    deopt 122 [];
  L71():
    goto L15(r46);
  L89():
    goto L18(r65);
  L92():
    superclasses1 = force? superclasses;
    checkMissing(superclasses1);
    nodes16 = ld nodes;
    check L93() else D30();
  L95():
    r69 = dyn numeric();
    check L96() else D33();
  D30():
    deopt 114 [nodes16];
  D33():
    deopt 123 [r69];
  L93():
    nodes17 = force? nodes16;
    checkMissing(nodes17);
    match1 = ldf match in base;
    r68 = dyn match1(superclasses1, nodes17, NA_INT, NULL);
    check L94() else D31();
  L96():
    st edges = r69;
    sym14 = ldf seq_along;
    base14 = ldf seq_along in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L97() else L98();
  D31():
    deopt 119 [r68];
  L20(r71):
    s = toForSeq(r71);
    l = length(s);
    i = 0;
    goto L21(i);
  L94():
    goto L19(r68);
  L97():
    extensions2 = ld extensions;
    check L99() else D34();
  L98():
    r70 = dyn base14(<sym extensions>);
    goto L20(r70);
  D34():
    deopt 126 [extensions2];
  L21(i1):
    i2 = `+`.1(i1, 1);
    c7 = `<`.1(l, i2);
    if c7 then L100() else L27();
  L99():
    extensions3 = force? extensions2;
    checkMissing(extensions3);
    r72 = seq_along(extensions3);
    goto L20(r72);
  L27():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    extensions4 = ld extensions;
    check L101() else D35();
  L100():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L118() else L119();
  D35():
    deopt 129 [i2, extensions4];
  L28(r82):
    st edges = r82;
    includeSubclasses3 = ld includeSubclasses;
    check L124() else D46();
  L101():
    extensions5 = force? extensions4;
    checkMissing(extensions5);
    c8 = `is.object`(extensions5);
    if c8 then L102() else L103(i2, extensions5);
  L118():
    edges2 = ld edges;
    check L120() else D42();
  L119():
    r81 = dyn base16(<sym edges>, <lang findEdges(`@`(classDef, contains))>);
    goto L28(r81);
  D42():
    deopt 160 [edges2];
  D46():
    deopt 169 [includeSubclasses3];
  L22(i8, dx1):
    st exti = dx1;
    __6 = ldf `@` in base;
    r74 = dyn __6(<sym exti>, <sym distance>);
    r75 = `==`(r74, 1.0);
    c9 = `as.logical`(r75);
    if c9 then L106() else L23();
  L102():
    dr = tryDispatchBuiltin.1("[[", extensions5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L104() else L103(i2, dr);
  L103(i6, extensions7):
    i9 = ld i;
    check L105() else D36();
  L120():
    edges3 = force? edges2;
    checkMissing(edges3);
    findEdges = ldf findEdges;
    check L121() else D43();
  L124():
    includeSubclasses4 = force? includeSubclasses3;
    checkMissing(includeSubclasses4);
    c13 = `as.logical`(includeSubclasses4);
    if c13 then L125() else L29();
  D36():
    deopt 131 [i6, extensions7, i9];
  D43():
    deopt 163 [];
  L23():
    goto L26(i8);
  L26(i22):
    goto L21(i22);
  L29():
    goto L31();
  L31():
    t = ldf t;
    check L133() else D51();
  L104():
    dx = getTryDispatchBuiltinValue(dr);
    goto L22(i2, dx);
  L105():
    i10 = force? i9;
    __5 = ldf `[[` in base;
    r73 = dyn __5(extensions7, i10);
    goto L22(i6, r73);
  L106():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L107() else L108();
  L121():
    p9 = prom<V +>{
      __8 = ldf `@` in base;
      r83 = dyn __8(<sym classDef>, <sym contains>);
      return r83;
    };
    r85 = dyn findEdges(p9);
    check L122() else D44();
  L125():
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L126() else L127();
  D44():
    deopt 165 [r85];
  D51():
    deopt 185 [];
  L24(i15, r77):
    st edges = r77;
    goto L26(i15);
  L30(r88):
    st edges = r88;
    goto L31();
  L107():
    edges = ld edges;
    check L109() else D37();
  L108():
    r76 = dyn base15(<sym edges>, <sym ifrom>, <lang `[[`(ito, i)>);
    goto L24(i8, r76);
  L122():
    c12 = ldf c in base;
    r86 = dyn c12(edges3, r85);
    check L123() else D45();
  L126():
    edges4 = ld edges;
    check L128() else D47();
  L127():
    r87 = dyn base17(<sym edges>, <lang findEdges(`@`(classDef, subclasses))>);
    goto L30(r87);
  L133():
    p12 = prom<V +>{
      matrix1 = ldf matrix;
      p11 = prom<V +>{
        edges6 = ld edges;
        edges7 = force? edges6;
        checkMissing(edges7);
        return edges7;
      };
      r95 = dyn matrix1[, nrow](p11, 2.0);
      return r95;
    };
    r97 = dyn t(p12);
    check L134() else D52();
  D37():
    deopt 141 [i8, edges];
  D45():
    deopt 167 [r86];
  D47():
    deopt 173 [edges4];
  D52():
    deopt 187 [r97];
  L109():
    edges1 = force? edges;
    checkMissing(edges1);
    ifrom = ld ifrom;
    check L110() else D38();
  L123():
    goto L28(r86);
  L128():
    edges5 = force? edges4;
    checkMissing(edges5);
    findEdges1 = ldf findEdges;
    check L129() else D48();
  L134():
    st edges = r97;
    l1 = ld value;
    c15 = `is.object`(l1);
    if c15 then L135() else L136(1.0, l1);
  D38():
    deopt 143 [i8, ifrom];
  D48():
    deopt 176 [];
  L32(dx5):
    st value = dx5;
    value = ld value;
    check L139() else D54();
  L110():
    ifrom1 = force? ifrom;
    checkMissing(ifrom1);
    ito = ld ito;
    check L111() else D39();
  L129():
    p10 = prom<V +>{
      __9 = ldf `@` in base;
      r89 = dyn __9(<sym classDef>, <sym subclasses>);
      return r89;
    };
    r91 = dyn findEdges1(p10);
    check L130() else D49();
  L135():
    dr4 = tryDispatchBuiltin.0("[<-", l1, 1.0);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L137() else L136(1.0, dr4);
  L136(r99, l3):
    edges8 = ld edges;
    check L138() else D53();
  D39():
    deopt 145 [i8, ito];
  D49():
    deopt 178 [r91];
  D53():
    deopt 192 [r99, l3, 1.0, edges8];
  D54():
    deopt 196 [value];
  L111():
    ito1 = force? ito;
    checkMissing(ito1);
    c10 = `is.object`(ito1);
    if c10 then L112() else L113(i8, ito1);
  L130():
    c14 = ldf c in base;
    r92 = dyn c14(edges5, r91);
    check L131() else D50();
  L137():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L32(dx4);
  L138():
    edges9 = force? edges8;
    ___ = ldf `[<-` in base;
    r102 = dyn ___(l3, 1.0, edges9);
    goto L32(r102);
  L139():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  D50():
    deopt 180 [r92];
  L25(i19, dx3):
    c11 = ldf c in base;
    r79 = dyn c11(edges1, ifrom1, dx3);
    check L116() else D41();
  L112():
    dr2 = tryDispatchBuiltin.1("[[", ito1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L114() else L113(i8, dr2);
  L113(i17, ito3):
    i20 = ld i;
    check L115() else D40();
  L131():
    goto L30(r92);
  D40():
    deopt 147 [i17, ito3, i20];
  D41():
    deopt 151 [i19, r79];
  L114():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L25(i8, dx2);
  L115():
    i21 = force? i20;
    __7 = ldf `[[` in base;
    r78 = dyn __7(ito3, i21);
    goto L25(i17, r78);
  L116():
    goto L24(i19, r79);
  }
}
fun inner2245834676(extensions) {
  (reg extensions:*) -+> V { var extensions:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg extensions1:*, reg extensions2:V, reg names:cls, reg r2:V, reg numeric:cls, reg r3:V, reg superclasses:*, reg superclasses1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg getClassDef:cls, reg what:*, reg what1:V, reg p:p(V +), reg packageSlot:cls, reg extensions3:*, reg extensions4:V, reg c1:L, reg extensions6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg what2:*, reg what3:V, reg __:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg i7:I, reg r11:V, reg what4:*, reg what5:V, reg nodes:*, reg nodes1:V, reg match:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg i10:I, reg r14:V, reg whatDef:*, reg whatDef1:V, reg c2:V, reg c3:L, reg i11:I, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg i15:I, reg c8:L, reg r16:V, reg ifrom:*, reg ifrom1:V, reg is_na:cls, reg r17:V, reg c9:L, reg c10:V, reg c12:L, reg __1:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg i23:I, reg r21:V, reg exts:*, reg exts1:V, reg names1:cls, reg r22:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg i26:I, reg r24:V, reg whatedges:*, reg whatedges1:V, reg nodes2:*, reg nodes3:V, reg match1:cls, reg r25:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg i29:I, reg r27:V, reg exts2:*, reg exts3:V, reg r28:I, reg s1:V, reg l1:I, reg i30:I, reg i31:I, reg i32:I, reg i33:I, reg c13:L, reg x1:V, reg ito:*, reg ito1:V, reg c14:L, reg i40:I, reg i41:I, reg ito3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i44:I, reg i45:I, reg dx3:V, reg i46:*, reg i47:V, reg __2:cls, reg r29:V, reg r30:V, reg c15:L, reg i50:I, reg i51:I, reg c17:V, reg __3:cls, reg r31:V, reg r32:V, reg c18:L, reg c19:V, reg c21:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg i62:I, reg i63:I, reg r34:V, reg edges:*, reg edges1:V, reg ifrom2:*, reg ifrom3:V, reg ito4:*, reg ito5:V, reg c22:L, reg i66:I, reg i67:I, reg ito7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i70:I, reg i71:I, reg dx5:V, reg i72:*, reg i73:V, reg __4:cls, reg r35:V, reg c23:cls, reg r36:V, reg i74:I, reg i75:I, reg edges2:*, reg edges3:V |
    mkenv;
    st extensions = extensions;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L0(r1):
    st superclasses = r1;
    numeric = ldf numeric;
    check L24() else D2();
  L20():
    extensions1 = ld extensions;
    check L22() else D0();
  L21():
    r = dyn base(<sym extensions>);
    goto L0(r);
  D0():
    deopt 2 [extensions1];
  D2():
    deopt 8 [];
  L22():
    extensions2 = force? extensions1;
    checkMissing(extensions2);
    names = ldf names in base;
    r2 = dyn names(extensions2);
    check L23() else D1();
  L24():
    r3 = dyn numeric();
    check L25() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 9 [r3];
  L23():
    goto L0(r2);
  L25():
    st edges = r3;
    superclasses = ld superclasses;
    check L26() else D4();
  D4():
    deopt 11 [superclasses];
  L26():
    superclasses1 = force? superclasses;
    checkMissing(superclasses1);
    s = toForSeq(superclasses1);
    l = length(s);
    i = 0;
    goto L1(i);
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L27() else L19();
  L19():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    getClassDef = ldf getClassDef;
    check L28() else D5();
  L27():
    edges2 = ld edges;
    check L79() else D26();
  D5():
    deopt 14 [i2];
  D26():
    deopt 105 [edges2];
  L28():
    p = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p2 = prom<V +>{
      packageSlot = ldf packageSlot;
      p1 = prom<V +>{
        extensions3 = ld extensions;
        extensions4 = force? extensions3;
        checkMissing(extensions4);
        c1 = `is.object`(extensions4);
        if c1 then L1() else L2(extensions4);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[[", extensions4);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(extensions6):
        what2 = ld what;
        what3 = force? what2;
        __ = ldf `[[` in base;
        r5 = dyn __(extensions6, what3);
        goto L0(r5);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r7 = dyn packageSlot(p1);
      return r7;
    };
    r9 = dyn getClassDef[, package](p, p2);
    check L29() else D6();
  L79():
    edges3 = force? edges2;
    checkMissing(edges3);
    popenv;
    return edges3;
  D6():
    deopt 18 [i2, r9];
  L29():
    st whatDef = r9;
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L2(i7, r11):
    st ifrom = r11;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L30():
    what4 = ld what;
    check L32() else D7();
  L31():
    r10 = dyn base1(<sym what>, <sym nodes>);
    goto L2(i2, r10);
  D7():
    deopt 22 [i2, what4];
  L3(i10, r14):
    c3 = `as.logical`(r14);
    if c3 then L4(i10, c3) else L38();
  L32():
    what5 = force? what4;
    checkMissing(what5);
    nodes = ld nodes;
    check L33() else D8();
  L35():
    whatDef = ld whatDef;
    check L37() else D10();
  L36():
    r13 = dyn base2(<sym whatDef>);
    goto L3(i7, r13);
  D8():
    deopt 24 [i2, nodes];
  D10():
    deopt 32 [i7, whatDef];
  L4(i11, c4):
    c12 = `as.logical`(c4);
    if c12 then L44() else L6();
  L33():
    nodes1 = force? nodes;
    checkMissing(nodes1);
    match = ldf match in base;
    r12 = dyn match(what5, nodes1, NA_INT, NULL);
    check L34() else D9();
  L37():
    whatDef1 = force? whatDef;
    checkMissing(whatDef1);
    c2 = `==`(whatDef1, NULL);
    goto L3(i7, c2);
  L38():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L39() else L40();
  D9():
    deopt 29 [i2, r12];
  L5(i15, c8, r16):
    c9 = `as.logical`(r16);
    c10 = `||`(c8, c9);
    goto L4(i15, c10);
  L6():
    __1 = ldf `@` in base;
    r19 = dyn __1(<sym whatDef>, <sym contains>);
    st exts = r19;
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L47() else L48();
  L34():
    goto L2(i2, r12);
  L39():
    ifrom = ld ifrom;
    check L41() else D11();
  L40():
    r15 = dyn base3(<sym ifrom>);
    goto L5(i10, c3, r15);
  L44():
    goto L1(i11);
  D11():
    deopt 37 [i10, c3, ifrom];
  L8(i23, r21):
    st whatedges = r21;
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L51() else L52();
  L41():
    ifrom1 = force? ifrom;
    checkMissing(ifrom1);
    is_na = ldf `is.na` in base;
    r17 = dyn is_na(ifrom1);
    check L42() else D12();
  L47():
    exts = ld exts;
    check L49() else D13();
  L48():
    r20 = dyn base4(<sym exts>);
    goto L8(i11, r20);
  D12():
    deopt 40 [i10, c3, r17];
  D13():
    deopt 51 [i11, exts];
  L9(i26, r24):
    st ito = r24;
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L56() else L57();
  L42():
    goto L5(i10, c3, r17);
  L49():
    exts1 = force? exts;
    checkMissing(exts1);
    names1 = ldf names in base;
    r22 = dyn names1(exts1);
    check L50() else D14();
  L51():
    whatedges = ld whatedges;
    check L53() else D15();
  L52():
    r23 = dyn base5(<sym whatedges>, <sym nodes>, 0.0);
    goto L9(i23, r23);
  D14():
    deopt 54 [i11, r22];
  D15():
    deopt 58 [i23, whatedges];
  L10(i29, r27):
    s1 = toForSeq(r27);
    l1 = length(s1);
    i30 = 0;
    goto L11(i29, i30);
  L50():
    goto L8(i11, r22);
  L53():
    whatedges1 = force? whatedges;
    checkMissing(whatedges1);
    nodes2 = ld nodes;
    check L54() else D16();
  L56():
    exts2 = ld exts;
    check L58() else D18();
  L57():
    r26 = dyn base6(<sym exts>);
    goto L10(i26, r26);
  D16():
    deopt 60 [i23, nodes2];
  D18():
    deopt 68 [i26, exts2];
  L11(i31, i32):
    i33 = `+`.1(i32, 1);
    c13 = `<`.1(l1, i33);
    if c13 then L59() else L18();
  L54():
    nodes3 = force? nodes2;
    checkMissing(nodes3);
    match1 = ldf match in base;
    r25 = dyn match1(whatedges1, nodes3, 0.0, NULL);
    check L55() else D17();
  L58():
    exts3 = force? exts2;
    checkMissing(exts3);
    r28 = seq_along(exts3);
    goto L10(i26, r28);
  D17():
    deopt 65 [i23, r25];
  L18():
    x1 = `[[`(s1, i33, NULL, TRUE);
    st i = x1;
    ito = ld ito;
    check L60() else D19();
  L55():
    goto L9(i23, r25);
  L59():
    goto L1(i31);
  D19():
    deopt 71 [i31, i33, ito];
  L60():
    ito1 = force? ito;
    checkMissing(ito1);
    c14 = `is.object`(ito1);
    if c14 then L61() else L62(i31, i33, ito1);
  L12(i44, i45, dx3):
    r30 = `>`(dx3, 0.0);
    c15 = `as.logical`(r30);
    if c15 then L65() else L13(i44, i45, c15);
  L61():
    dr2 = tryDispatchBuiltin.1("[[", ito1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L63() else L62(i31, i33, dr2);
  L62(i40, i41, ito3):
    i46 = ld i;
    check L64() else D20();
  D20():
    deopt 73 [i40, i41, ito3, i46];
  L13(i50, i51, c17):
    c21 = `as.logical`(c17);
    if c21 then L67() else L14();
  L63():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(i31, i33, dx2);
  L64():
    i47 = force? i46;
    __2 = ldf `[[` in base;
    r29 = dyn __2(ito3, i47);
    goto L12(i40, i41, r29);
  L65():
    __3 = ldf `@` in base;
    r31 = dyn __3(<lang `[[`(exts, i)>, <sym distance>);
    r32 = `==`(r31, 1.0);
    c18 = `as.logical`(r32);
    c19 = `&&`(c15, c18);
    goto L13(i44, i45, c19);
  L14():
    goto L17(i50, i51);
  L17(i74, i75):
    goto L11(i74, i75);
  L67():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L68() else L69();
  L15(i62, i63, r34):
    st edges = r34;
    goto L17(i62, i63);
  L68():
    edges = ld edges;
    check L70() else D21();
  L69():
    r33 = dyn base7(<sym edges>, <sym ifrom>, <lang `[[`(ito, i)>);
    goto L15(i50, i51, r33);
  D21():
    deopt 85 [i50, i51, edges];
  L70():
    edges1 = force? edges;
    checkMissing(edges1);
    ifrom2 = ld ifrom;
    check L71() else D22();
  D22():
    deopt 87 [i50, i51, ifrom2];
  L71():
    ifrom3 = force? ifrom2;
    checkMissing(ifrom3);
    ito4 = ld ito;
    check L72() else D23();
  D23():
    deopt 89 [i50, i51, ito4];
  L72():
    ito5 = force? ito4;
    checkMissing(ito5);
    c22 = `is.object`(ito5);
    if c22 then L73() else L74(i50, i51, ito5);
  L16(i70, i71, dx5):
    c23 = ldf c in base;
    r36 = dyn c23(edges1, ifrom3, dx5);
    check L77() else D25();
  L73():
    dr4 = tryDispatchBuiltin.1("[[", ito5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L75() else L74(i50, i51, dr4);
  L74(i66, i67, ito7):
    i72 = ld i;
    check L76() else D24();
  D24():
    deopt 91 [i66, i67, ito7, i72];
  D25():
    deopt 95 [i70, i71, r36];
  L75():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L16(i50, i51, dx4);
  L76():
    i73 = force? i72;
    __4 = ldf `[[` in base;
    r35 = dyn __4(ito7, i73);
    goto L16(i66, i67, r35);
  L77():
    goto L15(i70, i71, r36);
  }
}