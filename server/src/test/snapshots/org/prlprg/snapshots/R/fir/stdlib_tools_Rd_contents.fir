fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2058174622;
    st Rd_contents = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2058174622(db) {
  (reg db:*) -+> V { var db:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg db1:*, reg db2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg list2DF:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg character:cls, reg r6:V, reg character1:cls, reg r7:V, reg character2:cls, reg r8:V, reg character3:cls, reg r9:V, reg character4:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg list:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg list1:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg list2:cls, reg r19:V, reg list3:cls, reg r20:V, reg p:p(V +), reg r22:V, reg out:*, reg out1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg c1:cls, reg r27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg r31:V, reg db3:*, reg db4:V, reg length1:cls, reg r32:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r35:V, reg r36:V, reg r37:V, reg entries:*, reg entries1:V, reg length2:cls, reg r38:V, reg r39:V, reg vector:cls, reg r40:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r41:V, reg r42:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r43:V, reg r44:V, reg db5:*, reg db6:V, reg length3:cls, reg r45:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r46:V, reg r47:V, reg entries2:*, reg entries3:V, reg length4:cls, reg r48:V, reg c2:cls, reg r49:V, reg l:*, reg dim__:cls, reg r50:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r51:V, reg r52:V, reg db7:*, reg db8:V, reg r53:I, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg Rd_info:cls, reg db9:*, reg db10:V, reg c4:L, reg db12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r54:V, reg p1:p(V +), reg r56:V, reg l2:*, reg c5:L, reg i8:I, reg r58:V, reg l4:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i10:I, reg dx3:V, reg i11:*, reg i12:V, reg ___:cls, reg r61:V, reg entries4:*, reg entries5:V, reg l5:*, reg colnames__:cls, reg r62:V, reg _Rd_format_title:cls, reg unlist:cls, reg contents:*, reg contents1:V, reg c6:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r63:V, reg p2:p(V +), reg r65:V, reg p3:p(V +), reg r67:V, reg list2DF1:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r68:V, reg r69:V, reg basename:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r70:V, reg r71:V, reg db13:*, reg db14:V, reg names:cls, reg r72:V, reg p4:p(V +), reg r74:V, reg unlist1:cls, reg contents4:*, reg contents5:V, reg c7:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r75:V, reg p5:p(V +), reg r77:V, reg unlist2:cls, reg contents8:*, reg contents9:V, reg c8:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r78:V, reg p6:p(V +), reg r80:V, reg title:*, reg title1:V, reg unlist3:cls, reg contents12:*, reg contents13:V, reg c9:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __4:cls, reg r81:V, reg p7:p(V +), reg r83:V, reg contents16:*, reg contents17:V, reg c10:L, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __5:cls, reg r84:V, reg contents20:*, reg contents21:V, reg c11:L, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __6:cls, reg r85:V, reg contents24:*, reg contents25:V, reg c12:L, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __7:cls, reg r86:V, reg list4:cls, reg r87:V, reg p8:p(V +), reg r89:V, reg out2:*, reg out3:V |
    mkenv;
    st db = db;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L18() else L1();
  L14():
    db1 = ld db;
    check L16() else D0();
  L15():
    r = dyn base(<sym db>);
    goto L0(r);
  D0():
    deopt 2 [db1];
  L1():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L24() else L25();
  L16():
    db2 = force? db1;
    checkMissing(db2);
    length = ldf length in base;
    r2 = dyn length(db2);
    check L17() else D1();
  L18():
    list2DF = ldf list2DF;
    check L19() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  L3(r26):
    st entries = r26;
    sym6 = ldf vector;
    base6 = ldf vector in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L27() else L28();
  L17():
    goto L0(r2);
  L19():
    p = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L0(r5):
      return r5;
    L4():
      character = ldf character;
      r6 = dyn character();
      character1 = ldf character;
      r7 = dyn character1();
      character2 = ldf character;
      r8 = dyn character2();
      character3 = ldf character;
      r9 = dyn character3();
      character4 = ldf character;
      r10 = dyn character4();
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L6() else L7();
    L5():
      r4 = dyn base1[File, Name, Type, Title, Encoding, Aliases, Concepts, Keywords](<lang character()>, <lang character()>, <lang character()>, <lang character()>, <lang character()>, <lang list()>, <lang list()>, <lang list()>);
      goto L0(r4);
    L1(r12):
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L8() else L9();
    L6():
      list = ldf list in base;
      r13 = dyn list();
      goto L1(r13);
    L7():
      r11 = dyn base2();
      goto L1(r11);
    L2(r15):
      sym4 = ldf list;
      base4 = ldf list in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L10() else L11();
    L8():
      list1 = ldf list in base;
      r16 = dyn list1();
      goto L2(r16);
    L9():
      r14 = dyn base3();
      goto L2(r14);
    L3(r18):
      list3 = ldf list in base;
      r20 = dyn list3(r6, r7, r8, r9, r10, r12, r15, r18);
      goto L0(r20);
    L10():
      list2 = ldf list in base;
      r19 = dyn list2();
      goto L3(r19);
    L11():
      r17 = dyn base4();
      goto L3(r17);
    };
    r22 = dyn list2DF(p);
    check L20() else D3();
  L24():
    c1 = ldf c in base;
    r27 = dyn c1("Name", "Type", "Title", "Aliases", "Concepts", "Keywords", "Encoding");
    check L26() else D5();
  L25():
    r25 = dyn base5("Name", "Type", "Title", "Aliases", "Concepts", "Keywords", "Encoding");
    goto L3(r25);
  D3():
    deopt 10 [r22];
  D5():
    deopt 27 [r27];
  L4(r29):
    st contents = r29;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L38() else L39();
  L20():
    st out = r22;
    out = ld out;
    check L21() else D4();
  L26():
    goto L3(r27);
  L27():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L29() else L30();
  L28():
    r28 = dyn base6("list", <lang `*`(length(db), length(entries))>);
    goto L4(r28);
  D4():
    deopt 12 [out];
  L5(r31):
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L33() else L34();
  L7(r42):
    l = ld contents;
    dim__ = ldf `dim<-`;
    check L49() else D16();
  L21():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  L29():
    db3 = ld db;
    check L31() else D6();
  L30():
    r30 = dyn base7(<sym db>);
    goto L5(r30);
  L38():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L40() else L41();
  L39():
    r41 = dyn base9(<lang length(db)>, <lang length(entries)>);
    goto L7(r41);
  D6():
    deopt 34 [db3];
  D16():
    deopt 64 [r42, l, r42];
  L6(r36, r37):
    r39 = `*`(r36, r37);
    vector = ldf vector in base;
    r40 = dyn vector("list", r39);
    check L37() else D10();
  L8(r44):
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L44() else L45();
  L31():
    db4 = force? db3;
    checkMissing(db4);
    length1 = ldf length in base;
    r32 = dyn length1(db4);
    check L32() else D7();
  L33():
    entries = ld entries;
    check L35() else D8();
  L34():
    r35 = dyn base8(<sym entries>);
    goto L6(r31, r35);
  L40():
    db5 = ld db;
    check L42() else D11();
  L41():
    r43 = dyn base10(<sym db>);
    goto L8(r43);
  L49():
    r50 = dyn dim__(l, NULL, r42);
    check L50() else D17();
  D7():
    deopt 37 [r32];
  D8():
    deopt 39 [r31, entries];
  D10():
    deopt 45 [r40];
  D11():
    deopt 51 [db5];
  D17():
    deopt 66 [r42, r50];
  L9(r47):
    c2 = ldf c in base;
    r49 = dyn c2(r44, r47);
    check L48() else D15();
  L32():
    goto L5(r32);
  L35():
    entries1 = force? entries;
    checkMissing(entries1);
    length2 = ldf length in base;
    r38 = dyn length2(entries1);
    check L36() else D9();
  L37():
    goto L4(r40);
  L42():
    db6 = force? db5;
    checkMissing(db6);
    length3 = ldf length in base;
    r45 = dyn length3(db6);
    check L43() else D12();
  L44():
    entries2 = ld entries;
    check L46() else D13();
  L45():
    r46 = dyn base11(<sym entries>);
    goto L9(r46);
  L50():
    st contents = r50;
    sym12 = ldf seq_along;
    base12 = ldf seq_along in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L51() else L52();
  D9():
    deopt 42 [r31, r38];
  D12():
    deopt 54 [r45];
  D13():
    deopt 57 [entries2];
  D15():
    deopt 62 [r49];
  L10(r52):
    s = toForSeq(r52);
    l1 = length(s);
    i = 0;
    goto L11(i);
  L36():
    goto L6(r31, r38);
  L43():
    goto L8(r45);
  L46():
    entries3 = force? entries2;
    checkMissing(entries3);
    length4 = ldf length in base;
    r48 = dyn length4(entries3);
    check L47() else D14();
  L48():
    goto L7(r49);
  L51():
    db7 = ld db;
    check L53() else D18();
  L52():
    r51 = dyn base12(<sym db>);
    goto L10(r51);
  D14():
    deopt 60 [r48];
  D18():
    deopt 69 [db7];
  L11(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l1, i2);
    if c3 then L54() else L13();
  L47():
    goto L9(r48);
  L53():
    db8 = force? db7;
    checkMissing(db8);
    r53 = seq_along(db8);
    goto L10(r53);
  L13():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    Rd_info = ldf Rd_info;
    check L55() else D19();
  L54():
    entries4 = ld entries;
    check L61() else D22();
  D19():
    deopt 73 [i2];
  D22():
    deopt 86 [entries4];
  L55():
    p1 = prom<V +>{
      db9 = ld db;
      db10 = force? db9;
      checkMissing(db10);
      c4 = `is.object`(db10);
      if c4 then L1() else L2(db10);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", db10);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(db12):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[[` in base;
      r54 = dyn __(db12, i6);
      goto L0(r54);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r56 = dyn Rd_info(p1);
    check L56() else D20();
  L61():
    entries5 = force? entries4;
    checkMissing(entries5);
    l5 = ld contents;
    colnames__ = ldf `colnames<-`;
    check L62() else D23();
  D20():
    deopt 75 [i2, r56];
  D23():
    deopt 89 [entries5, l5, entries5];
  L56():
    l2 = ld contents;
    c5 = `is.object`(l2);
    if c5 then L57() else L58(i2, r56, l2);
  L62():
    r62 = dyn colnames__(l5, NULL, entries5);
    check L63() else D24();
  D24():
    deopt 91 [entries5, r62];
  L12(i10, dx3):
    st contents = dx3;
    goto L11(i10);
  L57():
    dr2 = tryDispatchBuiltin.0("[<-", l2, r56);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L59() else L58(i2, r56, dr2);
  L58(i8, r58, l4):
    i11 = ld i;
    check L60() else D21();
  L63():
    st contents = r62;
    _Rd_format_title = ldf `.Rd_format_title`;
    check L64() else D25();
  D21():
    deopt 77 [i8, r58, l4, r56, i11];
  D25():
    deopt 94 [];
  L59():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(i2, dx2);
  L60():
    i12 = force? i11;
    ___ = ldf `[<-` in base;
    r61 = dyn ___(l2, i12, <missing>, r56);
    goto L12(i8, r61);
  L64():
    p3 = prom<V +>{
      unlist = ldf unlist;
      p2 = prom<V +>{
        contents = ld contents;
        contents1 = force? contents;
        checkMissing(contents1);
        c6 = `is.object`(contents1);
        if c6 then L1() else L2();
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[", contents1);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2();
      L2():
        __1 = ldf `[` in base;
        r63 = dyn __1(contents1, <missing>, "Title");
        goto L0(r63);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r65 = dyn unlist(p2);
      return r65;
    };
    r67 = dyn _Rd_format_title(p3);
    check L65() else D26();
  D26():
    deopt 96 [r67];
  L65():
    st title = r67;
    list2DF1 = ldf list2DF;
    check L66() else D27();
  D27():
    deopt 99 [];
  L66():
    p8 = prom<V +>{
      sym13 = ldf list;
      base13 = ldf list in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L4() else L5();
    L0(r69):
      return r69;
    L4():
      basename = ldf basename;
      p4 = prom<V +>{
        sym14 = ldf names;
        base14 = ldf names in base;
        guard14 = `==`.4(sym14, base14);
        if guard14 then L1() else L2();
      L0(r71):
        return r71;
      L1():
        db13 = ld db;
        db14 = force? db13;
        checkMissing(db14);
        names = ldf names in base;
        r72 = dyn names(db14);
        goto L0(r72);
      L2():
        r70 = dyn base14(<sym db>);
        goto L0(r70);
      };
      r74 = dyn basename(p4);
      unlist1 = ldf unlist;
      p5 = prom<V +>{
        contents4 = ld contents;
        contents5 = force? contents4;
        checkMissing(contents5);
        c7 = `is.object`(contents5);
        if c7 then L1() else L2();
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[", contents5);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2();
      L2():
        __2 = ldf `[` in base;
        r75 = dyn __2(contents5, <missing>, "Name");
        goto L0(r75);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r77 = dyn unlist1(p5);
      unlist2 = ldf unlist;
      p6 = prom<V +>{
        contents8 = ld contents;
        contents9 = force? contents8;
        checkMissing(contents9);
        c8 = `is.object`(contents9);
        if c8 then L1() else L2();
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("[", contents9);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2();
      L2():
        __3 = ldf `[` in base;
        r78 = dyn __3(contents9, <missing>, "Type");
        goto L0(r78);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r80 = dyn unlist2(p6);
      title = ld title;
      title1 = force? title;
      checkMissing(title1);
      unlist3 = ldf unlist;
      p7 = prom<V +>{
        contents12 = ld contents;
        contents13 = force? contents12;
        checkMissing(contents13);
        c9 = `is.object`(contents13);
        if c9 then L1() else L2();
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("[", contents13);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2();
      L2():
        __4 = ldf `[` in base;
        r81 = dyn __4(contents13, <missing>, "Encoding");
        goto L0(r81);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      r83 = dyn unlist3(p7);
      contents16 = ld contents;
      contents17 = force? contents16;
      checkMissing(contents17);
      c10 = `is.object`(contents17);
      if c10 then L6() else L7();
    L5():
      r68 = dyn base13[File, Name, Type, Title, Encoding, Aliases, Concepts, Keywords](<lang basename(names(db))>, <lang unlist(`[`(contents, , "Name"))>, <lang unlist(`[`(contents, , "Type"))>, <sym title>, <lang unlist(`[`(contents, , "Encoding"))>, <lang `[`(contents, , "Aliases")>, <lang `[`(contents, , "Concepts")>, <lang `[`(contents, , "Keywords")>);
      goto L0(r68);
    L1(dx13):
      contents20 = ld contents;
      contents21 = force? contents20;
      checkMissing(contents21);
      c11 = `is.object`(contents21);
      if c11 then L9() else L10();
    L6():
      dr12 = tryDispatchBuiltin.1("[", contents17);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L8() else L7();
    L7():
      __5 = ldf `[` in base;
      r84 = dyn __5(contents17, <missing>, "Aliases");
      goto L1(r84);
    L2(dx15):
      contents24 = ld contents;
      contents25 = force? contents24;
      checkMissing(contents25);
      c12 = `is.object`(contents25);
      if c12 then L12() else L13();
    L8():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L1(dx12);
    L9():
      dr14 = tryDispatchBuiltin.1("[", contents21);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L11() else L10();
    L10():
      __6 = ldf `[` in base;
      r85 = dyn __6(contents21, <missing>, "Concepts");
      goto L2(r85);
    L3(dx17):
      list4 = ldf list in base;
      r87 = dyn list4(r74, r77, r80, title1, r83, dx13, dx15, dx17);
      goto L0(r87);
    L11():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L2(dx14);
    L12():
      dr16 = tryDispatchBuiltin.1("[", contents25);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L14() else L13();
    L13():
      __7 = ldf `[` in base;
      r86 = dyn __7(contents25, <missing>, "Keywords");
      goto L3(r86);
    L14():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L3(dx16);
    };
    r89 = dyn list2DF1(p8);
    check L67() else D28();
  D28():
    deopt 101 [r89];
  L67():
    st out = r89;
    out2 = ld out;
    check L68() else D29();
  D29():
    deopt 103 [out2];
  L68():
    out3 = force? out2;
    checkMissing(out3);
    popenv;
    return out3;
  }
}