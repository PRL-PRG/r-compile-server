fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1008501795;
    st `.build_hsearch_index` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1008501795(contents, packageName, defaultEncoding) {
  (reg contents:*, reg packageName:*, reg defaultEncoding:*) -+> V { var contents:*, var packageName:*, var defaultEncoding:*, reg defaultEncoding_isMissing:L, reg defaultEncoding_orDefault:*, reg matrix:cls, reg character:cls, reg r:V, reg p:p(V +), reg r2:V, reg NROW:cls, reg contents1:*, reg contents2:V, reg p1:p(V +), reg r4:V, reg r5:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg nr:*, reg nr1:V, reg r8:I, reg is_data_frame:cls, reg contents3:*, reg contents4:V, reg p2:p(V +), reg r10:V, reg r11:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg c2:cls, reg r14:V, reg l:*, reg colnames__:cls, reg r15:V, reg contents5:*, reg contents6:V, reg c3:L, reg contents8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg c4:cls, reg r18:V, reg __:cls, reg r19:V, reg strsplit:cls, reg contents12:*, reg contents13:V, reg c5:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r20:V, reg p3:p(V +), reg r22:V, reg as_matrix:cls, reg contents16:*, reg contents17:V, reg c6:L, reg contents19:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg c7:cls, reg r26:V, reg __2:cls, reg r27:V, reg p4:p(V +), reg r29:V, reg contents23:*, reg contents24:V, reg c8:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r30:V, reg contents27:*, reg contents28:V, reg c9:L, reg contents30:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg encoding:*, reg encoding1:V, reg c10:V, reg c11:L, reg character1:cls, reg nr2:*, reg nr3:V, reg p5:p(V +), reg r35:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg defaultEncoding1:*, reg defaultEncoding2:V, reg c12:V, reg r39:V, reg c13:L, reg defaultEncoding3:*, reg defaultEncoding4:V, reg l1:*, reg c14:L, reg defaultEncoding6:V, reg l3:*, reg dr10:V, reg dc5:L, reg dx10:V, reg defaultEncoding8:V, reg dx11:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg defaultEncoding13:V, reg l6:*, reg defaultEncoding14:V, reg r41:V, reg encoding2:*, reg encoding3:V, reg nzchar:cls, reg r42:V, reg r43:V, reg ___:cls, reg r44:V, reg contents31:*, reg contents32:V, reg c15:L, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __4:cls, reg r45:V, reg cbind:cls, reg packageName1:*, reg packageName2:V, reg p6:p(V +), reg IDs:*, reg IDs1:V, reg p7:p(V +), reg base7:*, reg base8:V, reg p8:p(V +), reg unlist:cls, reg Map:cls, reg _Rd_topic_for_display:*, reg _Rd_topic_for_display1:V, reg p9:p(V +), reg contents35:*, reg contents36:V, reg c16:L, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __5:cls, reg r50:V, reg p10:p(V +), reg aliases:*, reg aliases1:V, reg p11:p(V +), reg r53:V, reg p12:p(V +), reg r55:V, reg p13:p(V +), reg encoding4:*, reg encoding5:V, reg p14:p(V +), reg r58:V, reg sym7:cls, reg base9:cls, reg guard7:L, reg r59:V, reg r60:V, reg unlist1:cls, reg aliases2:*, reg aliases3:V, reg p15:p(V +), reg r62:V, reg length:cls, reg r63:V, reg c17:L, reg cbind1:cls, reg tmp:*, reg tmp1:V, reg p16:p(V +), reg sym8:cls, reg base10:cls, reg guard8:L, reg r65:V, reg r66:V, reg IDs2:*, reg IDs3:V, reg lengths:cls, reg aliases4:*, reg aliases5:V, reg p17:p(V +), reg r68:V, reg rep_int:cls, reg r69:V, reg p18:p(V +), reg packageName3:*, reg packageName4:V, reg p19:p(V +), reg r72:V, reg sym9:cls, reg base11:cls, reg guard9:L, reg r74:V, reg r75:V, reg unlist2:cls, reg keywords:*, reg keywords1:V, reg p20:p(V +), reg r77:V, reg length1:cls, reg r78:V, reg c18:L, reg cbind2:cls, reg tmp2:*, reg tmp3:V, reg p21:p(V +), reg sym10:cls, reg base12:cls, reg guard10:L, reg r80:V, reg r81:V, reg IDs4:*, reg IDs5:V, reg lengths1:cls, reg keywords2:*, reg keywords3:V, reg p22:p(V +), reg r83:V, reg rep_int1:cls, reg r84:V, reg p23:p(V +), reg packageName5:*, reg packageName6:V, reg p24:p(V +), reg r87:V, reg _in_:cls, reg colnames:cls, reg contents39:*, reg contents40:V, reg p25:p(V +), reg r90:V, reg p26:p(V +), reg r92:V, reg c19:L, reg contents41:*, reg contents42:V, reg c20:L, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __6:cls, reg r93:V, reg sym11:cls, reg base13:cls, reg guard11:L, reg r94:V, reg r95:V, reg unlist3:cls, reg concepts:*, reg concepts1:V, reg p27:p(V +), reg r97:V, reg length2:cls, reg r98:V, reg c21:L, reg cbind3:cls, reg tmp4:*, reg tmp5:V, reg p28:p(V +), reg sym12:cls, reg base14:cls, reg guard12:L, reg r100:V, reg r101:V, reg IDs6:*, reg IDs7:V, reg lengths2:cls, reg concepts2:*, reg concepts3:V, reg p29:p(V +), reg r103:V, reg rep_int2:cls, reg r104:V, reg p30:p(V +), reg packageName7:*, reg packageName8:V, reg p31:p(V +), reg r107:V, reg r108:V, reg r109:V, reg matrix1:cls, reg character2:cls, reg r111:V, reg p32:p(V +), reg r113:V, reg hsearch_index_colnames:*, reg hsearch_index_colnames1:V, reg c22:L, reg hsearch_index_colnames3:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r114:V, reg l7:*, reg colnames__1:cls, reg r115:V, reg hsearch_index_colnames4:*, reg hsearch_index_colnames5:V, reg c23:L, reg hsearch_index_colnames7:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r116:V, reg l8:*, reg colnames__2:cls, reg r117:V, reg hsearch_index_colnames8:*, reg hsearch_index_colnames9:V, reg c24:L, reg hsearch_index_colnames11:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r118:V, reg l9:*, reg colnames__3:cls, reg r119:V, reg hsearch_index_colnames12:*, reg hsearch_index_colnames13:V, reg c25:L, reg hsearch_index_colnames15:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r120:V, reg l10:*, reg colnames__4:cls, reg r121:V, reg sym13:cls, reg base15:cls, reg guard13:L, reg r122:V, reg r123:V, reg dbBase:*, reg dbBase1:V, reg dbAliases:*, reg dbAliases1:V, reg dbKeywords:*, reg dbKeywords1:V, reg dbConcepts:*, reg dbConcepts1:V, reg list:cls, reg r124:V |
    mkenv;
    st contents = contents;
    st packageName = packageName;
    defaultEncoding_isMissing = missing.0(defaultEncoding);
    if defaultEncoding_isMissing then L0(NULL) else L0(defaultEncoding);
  L0(defaultEncoding_orDefault):
    st defaultEncoding = defaultEncoding_orDefault;
    matrix = ldf matrix;
    check L32() else D0();
  D0():
    deopt 1 [];
  L32():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    r2 = dyn matrix[, ncol](p, 3);
    check L33() else D1();
  D1():
    deopt 5 [r2];
  L33():
    st dbKeywords = r2;
    st dbConcepts = r2;
    st dbAliases = r2;
    NROW = ldf NROW;
    check L34() else D2();
  D2():
    deopt 10 [];
  L34():
    p1 = prom<V +>{
      contents1 = ld contents;
      contents2 = force? contents1;
      checkMissing(contents2);
      return contents2;
    };
    r4 = dyn NROW(p1);
    check L35() else D3();
  D3():
    deopt 12 [r4];
  L35():
    st nr = r4;
    r5 = `>`(r4, 0);
    c = `as.logical`(r5);
    if c then L36() else L1();
  L1():
    matrix1 = ldf matrix;
    check L131() else D46();
  L30():
    hsearch_index_colnames = ld hsearch_index_colnames;
    check L133() else D48();
  L36():
    sym = ldf seq_len;
    base = ldf seq_len in base;
    guard = `==`.4(sym, base);
    if guard then L37() else L38();
  D46():
    deopt 196 [];
  D48():
    deopt 202 [hsearch_index_colnames];
  L2(r7):
    st IDs = r7;
    is_data_frame = ldf `is.data.frame`;
    check L40() else D5();
  L37():
    nr = ld nr;
    check L39() else D4();
  L38():
    r6 = dyn base(<sym nr>);
    goto L2(r6);
  L131():
    p32 = prom<V +>{
      character2 = ldf character;
      r111 = dyn character2();
      return r111;
    };
    r113 = dyn matrix1[, ncol](p32, 7);
    check L132() else D47();
  L133():
    hsearch_index_colnames1 = force? hsearch_index_colnames;
    checkMissing(hsearch_index_colnames1);
    c22 = `is.object`(hsearch_index_colnames1);
    if c22 then L135() else L136(hsearch_index_colnames1);
  D4():
    deopt 17 [nr];
  D5():
    deopt 22 [];
  D47():
    deopt 200 [r113];
  L39():
    nr1 = force? nr;
    checkMissing(nr1);
    r8 = seq_len(nr1);
    goto L2(r8);
  L40():
    p2 = prom<V +>{
      contents3 = ld contents;
      contents4 = force? contents3;
      checkMissing(contents4);
      return contents4;
    };
    r10 = dyn is_data_frame(p2);
    check L41() else D6();
  L132():
    st dbBase = r113;
    goto L30();
  L134(dx19):
    l7 = ld dbBase;
    colnames__1 = ldf `colnames<-`;
    check L138() else D49();
  L135():
    dr18 = tryDispatchBuiltin.1("$", hsearch_index_colnames1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L137() else L136(dr18);
  L136(hsearch_index_colnames3):
    r114 = `$`(hsearch_index_colnames3, <sym Base>);
    goto L134(r114);
  D6():
    deopt 24 [r10];
  D49():
    deopt 206 [dx19, l7, dx19];
  L41():
    r11 = `!`(r10);
    c1 = `as.logical`(r11);
    if c1 then L42() else L3();
  L137():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L134(dx18);
  L138():
    r115 = dyn colnames__1(l7, NULL, dx19);
    check L139() else D50();
  D50():
    deopt 208 [dx19, r115];
  L3():
    as_matrix = ldf `as.matrix`;
    check L58() else D14();
  L7():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L69() else L70();
  L42():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L43() else L44();
  L139():
    st dbBase = r115;
    hsearch_index_colnames4 = ld hsearch_index_colnames;
    check L140() else D51();
  D14():
    deopt 63 [];
  D51():
    deopt 210 [hsearch_index_colnames4];
  L4(r13):
    l = ld contents;
    colnames__ = ldf `colnames<-`;
    check L46() else D8();
  L9(r33):
    c11 = `as.logical`(r33);
    if c11 then L72() else L10();
  L43():
    c2 = ldf c in base;
    r14 = dyn c2("Name", "Aliases", "Title", "Keywords");
    check L45() else D7();
  L44():
    r12 = dyn base1("Name", "Aliases", "Title", "Keywords");
    goto L4(r12);
  L58():
    p4 = prom<V +>{
      contents16 = ld contents;
      contents17 = force? contents16;
      checkMissing(contents17);
      c6 = `is.object`(contents17);
      if c6 then L2() else L3(contents17);
    L0(dx5):
      return dx5;
    L2():
      dr4 = tryDispatchBuiltin.1("[", contents17);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(contents19):
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L5() else L6();
    L1(r25):
      __2 = ldf `[` in base;
      r27 = dyn __2(contents17, <missing>, r25);
      goto L0(r27);
    L4():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    L5():
      c7 = ldf c in base;
      r26 = dyn c7("Name", "Title");
      goto L1(r26);
    L6():
      r24 = dyn base3("Name", "Title");
      goto L1(r24);
    };
    r29 = dyn as_matrix(p4);
    check L59() else D15();
  L69():
    encoding = ld encoding;
    check L71() else D18();
  L70():
    r32 = dyn base4(<sym encoding>);
    goto L9(r32);
  L140():
    hsearch_index_colnames5 = force? hsearch_index_colnames4;
    checkMissing(hsearch_index_colnames5);
    c23 = `is.object`(hsearch_index_colnames5);
    if c23 then L142() else L143(hsearch_index_colnames5);
  D7():
    deopt 33 [r14];
  D8():
    deopt 35 [r13, l, r13];
  D15():
    deopt 65 [r29];
  D18():
    deopt 79 [encoding];
  L10():
    goto L11();
  L11():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L76() else L77();
  L45():
    goto L4(r14);
  L46():
    r15 = dyn colnames__(l, NULL, r13);
    check L47() else D9();
  L59():
    st base = r29;
    contents23 = ld contents;
    check L60() else D16();
  L71():
    encoding1 = force? encoding;
    checkMissing(encoding1);
    c10 = `==`(encoding1, NULL);
    goto L9(c10);
  L72():
    character1 = ldf character;
    check L73() else D19();
  L141(dx21):
    l8 = ld dbAliases;
    colnames__2 = ldf `colnames<-`;
    check L145() else D52();
  L142():
    dr20 = tryDispatchBuiltin.1("$", hsearch_index_colnames5);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L144() else L143(dr20);
  L143(hsearch_index_colnames7):
    r116 = `$`(hsearch_index_colnames7, <sym Aliases>);
    goto L141(r116);
  D9():
    deopt 37 [r13, r15];
  D16():
    deopt 67 [contents23];
  D19():
    deopt 83 [];
  D52():
    deopt 214 [dx21, l8, dx21];
  L12(r38):
    r39 = `!`(r38);
    c13 = `as.logical`(r39);
    if c13 then L79() else L13();
  L47():
    st contents = r15;
    contents5 = ld contents;
    check L48() else D10();
  L60():
    contents24 = force? contents23;
    checkMissing(contents24);
    c8 = `is.object`(contents24);
    if c8 then L61() else L62();
  L73():
    p5 = prom<V +>{
      nr2 = ld nr;
      nr3 = force? nr2;
      checkMissing(nr3);
      return nr3;
    };
    r35 = dyn character1[length](p5);
    check L74() else D20();
  L76():
    defaultEncoding1 = ld defaultEncoding;
    check L78() else D21();
  L77():
    r37 = dyn base5(<sym defaultEncoding>);
    goto L12(r37);
  L144():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L141(dx20);
  L145():
    r117 = dyn colnames__2(l8, NULL, dx21);
    check L146() else D53();
  D10():
    deopt 39 [contents5];
  D20():
    deopt 86 [r35];
  D21():
    deopt 91 [defaultEncoding1];
  D53():
    deopt 216 [dx21, r117];
  L8(dx7):
    st aliases = dx7;
    contents27 = ld contents;
    check L64() else D17();
  L13():
    goto L16();
  L16():
    contents31 = ld contents;
    check L89() else D25();
  L48():
    contents6 = force? contents5;
    checkMissing(contents6);
    c3 = `is.object`(contents6);
    if c3 then L49() else L50(contents6);
  L61():
    dr6 = tryDispatchBuiltin.1("[", contents24);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L63() else L62();
  L62():
    __3 = ldf `[` in base;
    r30 = dyn __3(contents24, <missing>, "Aliases");
    goto L8(r30);
  L74():
    st encoding = r35;
    goto L11();
  L78():
    defaultEncoding2 = force? defaultEncoding1;
    checkMissing(defaultEncoding2);
    c12 = `==`(defaultEncoding2, NULL);
    goto L12(c12);
  L79():
    defaultEncoding3 = ld defaultEncoding;
    check L80() else D22();
  L146():
    st dbAliases = r117;
    hsearch_index_colnames8 = ld hsearch_index_colnames;
    check L147() else D54();
  D17():
    deopt 74 [contents27];
  D22():
    deopt 95 [defaultEncoding3];
  D25():
    deopt 109 [contents31];
  D54():
    deopt 218 [hsearch_index_colnames8];
  L5(dx1):
    st base = dx1;
    strsplit = ldf strsplit;
    check L55() else D12();
  L49():
    dr = tryDispatchBuiltin.1("[", contents6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L51() else L50(dr);
  L50(contents8):
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L52() else L53();
  L63():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L8(dx6);
  L64():
    contents28 = force? contents27;
    checkMissing(contents28);
    c9 = `is.object`(contents28);
    if c9 then L66() else L67(contents28);
  L80():
    defaultEncoding4 = force? defaultEncoding3;
    checkMissing(defaultEncoding4);
    l1 = ld encoding;
    c14 = `is.object`(l1);
    if c14 then L81() else L82(defaultEncoding4, l1);
  L89():
    contents32 = force? contents31;
    checkMissing(contents32);
    c15 = `is.object`(contents32);
    if c15 then L90() else L91();
  L147():
    hsearch_index_colnames9 = force? hsearch_index_colnames8;
    checkMissing(hsearch_index_colnames9);
    c24 = `is.object`(hsearch_index_colnames9);
    if c24 then L149() else L150(hsearch_index_colnames9);
  D12():
    deopt 54 [];
  L6(r17):
    __ = ldf `[` in base;
    r19 = dyn __(contents6, <missing>, r17, FALSE);
    goto L5(r19);
  L14(defaultEncoding8, dx11):
    st encoding = dx11;
    goto L16();
  L17(dx13):
    st keywords = dx13;
    cbind = ldf cbind;
    check L93() else D26();
  L51():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L52():
    c4 = ldf c in base;
    r18 = dyn c4("Name", "Title");
    check L54() else D11();
  L53():
    r16 = dyn base2("Name", "Title");
    goto L6(r16);
  L55():
    p3 = prom<V +>{
      contents12 = ld contents;
      contents13 = force? contents12;
      checkMissing(contents13);
      c5 = `is.object`(contents13);
      if c5 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", contents13);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r20 = dyn __1(contents13, <missing>, "Aliases");
      goto L0(r20);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r22 = dyn strsplit(p3, " +");
    check L56() else D13();
  L65(dx9):
    st encoding = dx9;
    goto L7();
  L66():
    dr8 = tryDispatchBuiltin.1("$", contents28);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L68() else L67(dr8);
  L67(contents30):
    r31 = `$`(contents30, <sym Encoding>);
    goto L65(r31);
  L81():
    dr10 = tryDispatchBuiltin.0("[<-", l1, defaultEncoding4);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L83() else L82(defaultEncoding4, dr10);
  L82(defaultEncoding6, l3):
    sym6 = ldf nzchar;
    base6 = ldf nzchar in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L84() else L85();
  L90():
    dr12 = tryDispatchBuiltin.1("[", contents32);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L92() else L91();
  L91():
    __4 = ldf `[` in base;
    r45 = dyn __4(contents32, <missing>, "Keywords");
    goto L17(r45);
  L148(dx23):
    l9 = ld dbKeywords;
    colnames__3 = ldf `colnames<-`;
    check L152() else D55();
  L149():
    dr22 = tryDispatchBuiltin.1("$", hsearch_index_colnames9);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L151() else L150(dr22);
  L150(hsearch_index_colnames11):
    r118 = `$`(hsearch_index_colnames11, <sym Keywords>);
    goto L148(r118);
  D11():
    deopt 47 [contents8, r18];
  D13():
    deopt 57 [r22];
  D26():
    deopt 117 [];
  D55():
    deopt 222 [dx23, l9, dx23];
  L15(defaultEncoding13, l6, defaultEncoding14, r41):
    r43 = `!`(r41);
    ___ = ldf `[<-` in base;
    r44 = dyn ___(l6, defaultEncoding14, r43);
    goto L14(defaultEncoding13, r44);
  L54():
    goto L6(r18);
  L56():
    st aliases = r22;
    st encoding = NULL;
    goto L7();
  L68():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L65(dx8);
  L83():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L14(defaultEncoding4, dx10);
  L84():
    encoding2 = ld encoding;
    check L86() else D23();
  L85():
    r40 = dyn base6(<sym encoding>);
    goto L15(defaultEncoding6, l3, defaultEncoding4, r40);
  L92():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L17(dx12);
  L93():
    p6 = prom<V +>{
      packageName1 = ld packageName;
      packageName2 = force? packageName1;
      checkMissing(packageName2);
      return packageName2;
    };
    p7 = prom<V +>{
      IDs = ld IDs;
      IDs1 = force? IDs;
      checkMissing(IDs1);
      return IDs1;
    };
    p8 = prom<V +>{
      base7 = ld base;
      base8 = force? base7;
      checkMissing(base8);
      return base8;
    };
    p13 = prom<V +>{
      unlist = ldf unlist;
      p12 = prom<V +>{
        Map = ldf Map;
        p9 = prom<V +>{
          _Rd_topic_for_display = ld `.Rd_topic_for_display`;
          _Rd_topic_for_display1 = force? _Rd_topic_for_display;
          checkMissing(_Rd_topic_for_display1);
          return _Rd_topic_for_display1;
        };
        p10 = prom<V +>{
          contents35 = ld contents;
          contents36 = force? contents35;
          checkMissing(contents36);
          c16 = `is.object`(contents36);
          if c16 then L1() else L2();
        L0(dx15):
          return dx15;
        L1():
          dr14 = tryDispatchBuiltin.1("[", contents36);
          dc7 = getTryDispatchBuiltinDispatched(dr14);
          if dc7 then L3() else L2();
        L2():
          __5 = ldf `[` in base;
          r50 = dyn __5(contents36, <missing>, "Name");
          goto L0(r50);
        L3():
          dx14 = getTryDispatchBuiltinValue(dr14);
          goto L0(dx14);
        };
        p11 = prom<V +>{
          aliases = ld aliases;
          aliases1 = force? aliases;
          checkMissing(aliases1);
          return aliases1;
        };
        r53 = dyn Map(p9, p10, p11);
        return r53;
      };
      r55 = dyn unlist(p12);
      return r55;
    };
    p14 = prom<V +>{
      encoding4 = ld encoding;
      encoding5 = force? encoding4;
      checkMissing(encoding5);
      return encoding5;
    };
    r58 = dyn cbind[, , , , topic, ](p6, "", p7, p8, p13, p14);
    check L94() else D27();
  L151():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L148(dx22);
  L152():
    r119 = dyn colnames__3(l9, NULL, dx23);
    check L153() else D56();
  D23():
    deopt 100 [defaultEncoding6, l3, defaultEncoding4, encoding2];
  D27():
    deopt 125 [r58];
  D56():
    deopt 224 [dx23, r119];
  L86():
    encoding3 = force? encoding2;
    checkMissing(encoding3);
    nzchar = ldf nzchar in base;
    r42 = dyn nzchar(encoding3);
    check L87() else D24();
  L94():
    st dbBase = r58;
    sym7 = ldf length;
    base9 = ldf length in base;
    guard7 = `==`.4(sym7, base9);
    if guard7 then L95() else L96();
  L153():
    st dbKeywords = r119;
    hsearch_index_colnames12 = ld hsearch_index_colnames;
    check L154() else D57();
  D24():
    deopt 103 [defaultEncoding6, l3, defaultEncoding4, r42];
  D57():
    deopt 226 [hsearch_index_colnames12];
  L18(r60):
    c17 = `as.logical`(r60);
    if c17 then L100() else L19();
  L87():
    goto L15(defaultEncoding6, l3, defaultEncoding4, r42);
  L95():
    unlist1 = ldf unlist;
    check L97() else D28();
  L96():
    r59 = dyn base9(<lang `<-`(tmp, unlist(aliases))>);
    goto L18(r59);
  L154():
    hsearch_index_colnames13 = force? hsearch_index_colnames12;
    checkMissing(hsearch_index_colnames13);
    c25 = `is.object`(hsearch_index_colnames13);
    if c25 then L156() else L157(hsearch_index_colnames13);
  D28():
    deopt 130 [];
  L19():
    goto L20();
  L20():
    sym9 = ldf length;
    base11 = ldf length in base;
    guard9 = `==`.4(sym9, base11);
    if guard9 then L104() else L105();
  L97():
    p15 = prom<V +>{
      aliases2 = ld aliases;
      aliases3 = force? aliases2;
      checkMissing(aliases3);
      return aliases3;
    };
    r62 = dyn unlist1(p15);
    check L98() else D29();
  L100():
    cbind1 = ldf cbind;
    check L101() else D31();
  L155(dx25):
    l10 = ld dbConcepts;
    colnames__4 = ldf `colnames<-`;
    check L159() else D58();
  L156():
    dr24 = tryDispatchBuiltin.1("$", hsearch_index_colnames13);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L158() else L157(dr24);
  L157(hsearch_index_colnames15):
    r120 = `$`(hsearch_index_colnames15, <sym Concepts>);
    goto L155(r120);
  D29():
    deopt 132 [r62];
  D31():
    deopt 137 [];
  D58():
    deopt 230 [dx25, l10, dx25];
  L21(r75):
    c18 = `as.logical`(r75);
    if c18 then L109() else L22();
  L98():
    st tmp = r62;
    length = ldf length in base;
    r63 = dyn length(r62);
    check L99() else D30();
  L101():
    p16 = prom<V +>{
      tmp = ld tmp;
      tmp1 = force? tmp;
      checkMissing(tmp1);
      return tmp1;
    };
    p18 = prom<V +>{
      sym8 = ldf `rep.int`;
      base10 = ldf `rep.int` in base;
      guard8 = `==`.4(sym8, base10);
      if guard8 then L1() else L2();
    L0(r66):
      return r66;
    L1():
      IDs2 = ld IDs;
      IDs3 = force? IDs2;
      checkMissing(IDs3);
      lengths = ldf lengths;
      p17 = prom<V +>{
        aliases4 = ld aliases;
        aliases5 = force? aliases4;
        checkMissing(aliases5);
        return aliases5;
      };
      r68 = dyn lengths(p17);
      rep_int = ldf `rep.int` in base;
      r69 = dyn rep_int(IDs3, r68);
      goto L0(r69);
    L2():
      r65 = dyn base10(<sym IDs>, <lang lengths(aliases)>);
      goto L0(r65);
    };
    p19 = prom<V +>{
      packageName3 = ld packageName;
      packageName4 = force? packageName3;
      checkMissing(packageName4);
      return packageName4;
    };
    r72 = dyn cbind1(p16, p18, p19);
    check L102() else D32();
  L104():
    unlist2 = ldf unlist;
    check L106() else D33();
  L105():
    r74 = dyn base11(<lang `<-`(tmp, unlist(keywords))>);
    goto L21(r74);
  L158():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L155(dx24);
  L159():
    r121 = dyn colnames__4(l10, NULL, dx25);
    check L160() else D59();
  D30():
    deopt 135 [r63];
  D32():
    deopt 141 [r72];
  D33():
    deopt 148 [];
  D59():
    deopt 232 [dx25, r121];
  L22():
    goto L23();
  L23():
    _in_ = ldf `%in%`;
    check L113() else D38();
  L99():
    goto L18(r63);
  L102():
    st dbAliases = r72;
    goto L20();
  L106():
    p20 = prom<V +>{
      keywords = ld keywords;
      keywords1 = force? keywords;
      checkMissing(keywords1);
      return keywords1;
    };
    r77 = dyn unlist2(p20);
    check L107() else D34();
  L109():
    cbind2 = ldf cbind;
    check L110() else D36();
  L160():
    st dbConcepts = r121;
    sym13 = ldf list;
    base15 = ldf list in base;
    guard13 = `==`.4(sym13, base15);
    if guard13 then L161() else L162();
  D34():
    deopt 150 [r77];
  D36():
    deopt 155 [];
  D38():
    deopt 164 [];
  L31(r123):
    popenv;
    return r123;
  L107():
    st tmp = r77;
    length1 = ldf length in base;
    r78 = dyn length1(r77);
    check L108() else D35();
  L110():
    p21 = prom<V +>{
      tmp2 = ld tmp;
      tmp3 = force? tmp2;
      checkMissing(tmp3);
      return tmp3;
    };
    p23 = prom<V +>{
      sym10 = ldf `rep.int`;
      base12 = ldf `rep.int` in base;
      guard10 = `==`.4(sym10, base12);
      if guard10 then L1() else L2();
    L0(r81):
      return r81;
    L1():
      IDs4 = ld IDs;
      IDs5 = force? IDs4;
      checkMissing(IDs5);
      lengths1 = ldf lengths;
      p22 = prom<V +>{
        keywords2 = ld keywords;
        keywords3 = force? keywords2;
        checkMissing(keywords3);
        return keywords3;
      };
      r83 = dyn lengths1(p22);
      rep_int1 = ldf `rep.int` in base;
      r84 = dyn rep_int1(IDs5, r83);
      goto L0(r84);
    L2():
      r80 = dyn base12(<sym IDs>, <lang lengths(keywords)>);
      goto L0(r80);
    };
    p24 = prom<V +>{
      packageName5 = ld packageName;
      packageName6 = force? packageName5;
      checkMissing(packageName6);
      return packageName6;
    };
    r87 = dyn cbind2(p21, p23, p24);
    check L111() else D37();
  L113():
    p26 = prom<V +>{
      colnames = ldf colnames;
      p25 = prom<V +>{
        contents39 = ld contents;
        contents40 = force? contents39;
        checkMissing(contents40);
        return contents40;
      };
      r90 = dyn colnames(p25);
      return r90;
    };
    r92 = dyn _in_("Concepts", p26);
    check L114() else D39();
  L161():
    dbBase = ld dbBase;
    check L163() else D60();
  L162():
    r122 = dyn base15(<sym dbBase>, <sym dbAliases>, <sym dbKeywords>, <sym dbConcepts>);
    goto L31(r122);
  D35():
    deopt 153 [r78];
  D37():
    deopt 159 [r87];
  D39():
    deopt 167 [r92];
  D60():
    deopt 236 [dbBase];
  L108():
    goto L21(r78);
  L111():
    st dbKeywords = r87;
    goto L23();
  L114():
    c19 = `as.logical`(r92);
    if c19 then L115() else L24();
  L163():
    dbBase1 = force? dbBase;
    checkMissing(dbBase1);
    dbAliases = ld dbAliases;
    check L164() else D61();
  D61():
    deopt 238 [dbAliases];
  L24():
    goto L29(NULL);
  L29(r109):
    goto L30();
  L115():
    contents41 = ld contents;
    check L116() else D40();
  L164():
    dbAliases1 = force? dbAliases;
    checkMissing(dbAliases1);
    dbKeywords = ld dbKeywords;
    check L165() else D62();
  D40():
    deopt 168 [contents41];
  D62():
    deopt 240 [dbKeywords];
  L116():
    contents42 = force? contents41;
    checkMissing(contents42);
    c20 = `is.object`(contents42);
    if c20 then L117() else L118();
  L165():
    dbKeywords1 = force? dbKeywords;
    checkMissing(dbKeywords1);
    dbConcepts = ld dbConcepts;
    check L166() else D63();
  D63():
    deopt 242 [dbConcepts];
  L25(dx17):
    st concepts = dx17;
    sym11 = ldf length;
    base13 = ldf length in base;
    guard11 = `==`.4(sym11, base13);
    if guard11 then L120() else L121();
  L117():
    dr16 = tryDispatchBuiltin.1("[", contents42);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L119() else L118();
  L118():
    __6 = ldf `[` in base;
    r93 = dyn __6(contents42, <missing>, "Concepts");
    goto L25(r93);
  L166():
    dbConcepts1 = force? dbConcepts;
    checkMissing(dbConcepts1);
    list = ldf list in base;
    r124 = dyn list(dbBase1, dbAliases1, dbKeywords1, dbConcepts1);
    check L167() else D64();
  D64():
    deopt 245 [r124];
  L26(r95):
    c21 = `as.logical`(r95);
    if c21 then L125() else L27();
  L119():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L25(dx16);
  L120():
    unlist3 = ldf unlist;
    check L122() else D41();
  L121():
    r94 = dyn base13(<lang `<-`(tmp, unlist(concepts))>);
    goto L26(r94);
  L167():
    goto L31(r124);
  D41():
    deopt 178 [];
  L27():
    goto L28(NULL);
  L28(r108):
    goto L29(r108);
  L122():
    p27 = prom<V +>{
      concepts = ld concepts;
      concepts1 = force? concepts;
      checkMissing(concepts1);
      return concepts1;
    };
    r97 = dyn unlist3(p27);
    check L123() else D42();
  L125():
    cbind3 = ldf cbind;
    check L126() else D44();
  D42():
    deopt 180 [r97];
  D44():
    deopt 185 [];
  L123():
    st tmp = r97;
    length2 = ldf length in base;
    r98 = dyn length2(r97);
    check L124() else D43();
  L126():
    p28 = prom<V +>{
      tmp4 = ld tmp;
      tmp5 = force? tmp4;
      checkMissing(tmp5);
      return tmp5;
    };
    p30 = prom<V +>{
      sym12 = ldf `rep.int`;
      base14 = ldf `rep.int` in base;
      guard12 = `==`.4(sym12, base14);
      if guard12 then L1() else L2();
    L0(r101):
      return r101;
    L1():
      IDs6 = ld IDs;
      IDs7 = force? IDs6;
      checkMissing(IDs7);
      lengths2 = ldf lengths;
      p29 = prom<V +>{
        concepts2 = ld concepts;
        concepts3 = force? concepts2;
        checkMissing(concepts3);
        return concepts3;
      };
      r103 = dyn lengths2(p29);
      rep_int2 = ldf `rep.int` in base;
      r104 = dyn rep_int2(IDs7, r103);
      goto L0(r104);
    L2():
      r100 = dyn base14(<sym IDs>, <lang lengths(concepts)>);
      goto L0(r100);
    };
    p31 = prom<V +>{
      packageName7 = ld packageName;
      packageName8 = force? packageName7;
      checkMissing(packageName8);
      return packageName8;
    };
    r107 = dyn cbind3(p28, p30, p31);
    check L127() else D45();
  D43():
    deopt 183 [r98];
  D45():
    deopt 189 [r107];
  L124():
    goto L26(r98);
  L127():
    st dbConcepts = r107;
    goto L28(r107);
  }
}