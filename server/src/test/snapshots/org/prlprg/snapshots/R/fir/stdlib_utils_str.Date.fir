fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `str.Date` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg oldClass:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg object3:*, reg object4:V, reg length:cls, reg r5:V, reg n:*, reg n1:V, reg r6:V, reg c:L, reg str_default:cls, reg object5:*, reg object6:V, reg p:p(V +), reg r8:V, reg n2:*, reg n3:V, reg r11:V, reg c1:L, reg object7:*, reg object8:V, reg c2:L, reg object10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg object13:V, reg r13:V, reg r14:I, reg __:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg list:cls, reg ddd1:dots?, reg r20:V, reg length1:cls, reg r21:V, reg c3:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg larg:*, reg larg1:V, reg names:cls, reg r24:V, reg which:cls, reg nl:*, reg nl1:V, reg r25:V, reg p1:p(V +), reg r27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg nl2:*, reg nl3:V, reg r30:V, reg any:cls, reg r31:V, reg c4:L, reg larg2:*, reg larg3:V, reg c5:L, reg larg5:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg which1:cls, reg Bgl:*, reg Bgl1:V, reg p2:p(V +), reg r33:V, reg __1:cls, reg r34:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg which_head:*, reg which_head1:V, reg length2:cls, reg r37:V, reg c6:L, reg larg6:*, reg larg7:V, reg c7:L, reg larg9:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg which_head2:*, reg which_head3:V, reg __2:cls, reg r38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg which_head4:*, reg which_head5:V, reg length3:cls, reg r41:V, reg c8:L, reg larg10:*, reg larg11:V, reg c9:L, reg larg13:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg which_head6:*, reg which_head7:V, reg r42:V, reg __3:cls, reg r43:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r44:V, reg r45:V, reg larg14:*, reg larg15:V, reg c10:L, reg larg17:V, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg __4:cls, reg r46:V, reg is_numeric:cls, reg r47:V, reg c11:L, reg c13:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r48:V, reg c16:L, reg r49:V, reg larg18:*, reg larg19:V, reg c17:L, reg c19:L, reg larg21:V, reg dr10:V, reg dc5:L, reg dx13:V, reg c21:L, reg dx14:V, reg __5:cls, reg r50:V, reg is_numeric1:cls, reg r51:V, reg c22:L, reg c23:V, reg c25:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r52:V, reg r53:V, reg larg22:*, reg larg23:V, reg c26:L, reg larg25:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg __6:cls, reg r54:V, reg larg26:*, reg larg27:V, reg c27:L, reg larg29:V, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg __7:cls, reg r55:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r56:V, reg dx21:V, reg r57:V, reg larg30:*, reg larg31:V, reg c28:L, reg dx23:V, reg larg33:V, reg dr16:V, reg dc8:L, reg dx25:V, reg dx26:V, reg dx27:V, reg __8:cls, reg r58:V, reg nchar:cls, reg r59:V, reg r60:V, reg r61:V, reg ___:cls, reg r62:V, reg min:cls, reg r63:V, reg l:*, reg c29:L, reg r65:V, reg l2:*, reg dr18:V, reg dc9:L, reg dx28:V, reg r67:V, reg dx29:V, reg ____:cls, reg r68:V, reg r69:V, reg give_length:*, reg give_length1:V, reg c30:L, reg paste0:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r71:V, reg r72:V, reg n4:*, reg n5:V, reg as_character:cls, reg r73:V, reg p3:p(V +), reg r75:V, reg r76:V, reg cat:cls, reg cl:*, reg cl1:V, reg c31:L, reg cl3:V, reg dr20:V, reg dc10:L, reg dx30:V, reg dx31:V, reg __9:cls, reg r77:V, reg p4:p(V +), reg le_str:*, reg le_str1:V, reg p5:p(V +), reg r80:V, reg r81:cls, reg do_call:cls, reg str_f_obj:*, reg str_f_obj1:V, reg p6:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r83:V, reg r84:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r85:V, reg r86:V, reg list1:cls, reg r87:V, reg larg34:*, reg larg35:V, reg c32:cls, reg r88:V, reg p7:p(V +), reg r90:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf oldClass;
    base = ldf oldClass in base;
    guard = `==`.4(sym, base);
    if guard then L39() else L40();
  L0(r1):
    st cl = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L43() else L44();
  L39():
    object1 = ld object;
    check L41() else D0();
  L40():
    r = dyn base(<sym object>);
    goto L0(r);
  D0():
    deopt 2 [object1];
  L1(r4):
    st n = r4;
    n = ld n;
    check L47() else D4();
  L41():
    object2 = force? object1;
    checkMissing(object2);
    oldClass = ldf oldClass in base;
    r2 = dyn oldClass(object2);
    check L42() else D1();
  L43():
    object3 = ld object;
    check L45() else D2();
  L44():
    r3 = dyn base1(<sym object>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [object3];
  D4():
    deopt 14 [n];
  L42():
    goto L0(r2);
  L45():
    object4 = force? object3;
    checkMissing(object4);
    length = ldf length in base;
    r5 = dyn length(object4);
    check L46() else D3();
  L47():
    n1 = force? n;
    checkMissing(n1);
    r6 = `==`(n1, 0);
    c = `as.logical`(r6);
    if c then L48() else L2();
  D3():
    deopt 12 [r5];
  L2():
    n2 = ld n;
    check L53() else D7();
  L46():
    goto L1(r5);
  L48():
    str_default = ldf `str.default`;
    check L49() else D5();
  D5():
    deopt 19 [];
  D7():
    deopt 25 [n2];
  L49():
    p = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    r8 = dyn str_default(p);
    check L50() else D6();
  L53():
    n3 = force? n2;
    checkMissing(n3);
    r11 = `>`(n3, 1000);
    c1 = `as.logical`(r11);
    if c1 then L54() else L4();
  D6():
    deopt 21 [r8];
  L4():
    goto L7();
  L7():
    st `give.length` = TRUE;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L62() else L63();
  L50():
    popenv;
    return r8;
  L54():
    object7 = ld object;
    check L55() else D8();
  D8():
    deopt 29 [object7];
  L8(r17):
    c3 = `as.logical`(r17);
    if c3 then L69() else L10();
  L55():
    object8 = force? object7;
    checkMissing(object8);
    c2 = `is.object`(object8);
    if c2 then L56() else L57(object8);
  L62():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L64() else L65();
  L63():
    r16 = dyn base3(<lang `<-`(larg, list(...))>);
    goto L8(r16);
  L5(dx1):
    st object = dx1;
    goto L7();
  L9(r19):
    st larg = r19;
    length1 = ldf length in base;
    r21 = dyn length1(r19);
    check L68() else D11();
  L10():
    goto L36();
  L36():
    give_length = ld `give.length`;
    check L151() else D39();
  L56():
    dr = tryDispatchBuiltin.1("[", object8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L58() else L57(dr);
  L57(object10):
    sym2 = ldf seq_len;
    base2 = ldf seq_len in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L59() else L60();
  L64():
    list = ldf list;
    check L66() else D9();
  L65():
    r18 = dyn base4(<sym ...>);
    goto L9(r18);
  L69():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L70() else L71();
  D9():
    deopt 46 [];
  D11():
    deopt 51 [r21];
  D39():
    deopt 170 [give_length];
  L6(object13, r13):
    __ = ldf `[` in base;
    r15 = dyn __(object13, r13);
    goto L5(r15);
  L11(r23):
    st nl = r23;
    which = ldf which;
    check L74() else D14();
  L58():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L59():
    r14 = seq_len(1000);
    goto L6(object10, r14);
  L60():
    r12 = dyn base2(1000);
    goto L6(object10, r12);
  L66():
    ddd1 = ld `...`;
    r20 = dyn list[`...`](ddd1);
    check L67() else D10();
  L68():
    goto L8(r21);
  L70():
    larg = ld larg;
    check L72() else D12();
  L71():
    r22 = dyn base5(<sym larg>);
    goto L11(r22);
  L151():
    give_length1 = force? give_length;
    checkMissing(give_length1);
    c30 = `as.logical`(give_length1);
    if c30 then L152() else L37();
  D10():
    deopt 48 [r20];
  D12():
    deopt 54 [larg];
  D14():
    deopt 60 [];
  L37():
    goto L38(NULL);
  L38(r76):
    st `le.str` = r76;
    cat = ldf cat;
    check L156() else D42();
  L67():
    goto L9(r20);
  L72():
    larg1 = force? larg;
    checkMissing(larg1);
    names = ldf names in base;
    r24 = dyn names(larg1);
    check L73() else D13();
  L74():
    p1 = prom<V +>{
      nl = ld nl;
      nl1 = force? nl;
      checkMissing(nl1);
      r25 = `==`(nl1, "give.head");
      return r25;
    };
    r27 = dyn which(p1);
    check L75() else D15();
  L152():
    paste0 = ldf paste0;
    check L153() else D40();
  D13():
    deopt 57 [r24];
  D15():
    deopt 62 [r27];
  D40():
    deopt 173 [];
  D42():
    deopt 182 [];
  L73():
    goto L11(r24);
  L75():
    st `which.head` = r27;
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L76() else L77();
  L153():
    p3 = prom<V +>{
      sym13 = ldf `as.character`;
      base13 = ldf `as.character` in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r72):
      return r72;
    L1():
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      as_character = ldf `as.character` in base;
      r73 = dyn as_character(n5);
      goto L0(r73);
    L2():
      r71 = dyn base13(<sym n>);
      goto L0(r71);
    };
    r75 = dyn paste0("[1:", p3, "]");
    check L154() else D41();
  L156():
    p4 = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      c31 = `is.object`(cl1);
      if c31 then L1() else L2(cl1);
    L0(dx31):
      return dx31;
    L1():
      dr20 = tryDispatchBuiltin.1("[", cl1);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(cl3):
      __9 = ldf `[` in base;
      r77 = dyn __9(cl3, 1);
      goto L0(r77);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx30);
    };
    p5 = prom<V +>{
      le_str = ld `le.str`;
      le_str1 = force? le_str;
      checkMissing(le_str1);
      return le_str1;
    };
    r80 = dyn cat[, , , , sep](" ", p4, p5, ", format: ", "");
    check L157() else D43();
  D41():
    deopt 177 [r75];
  D43():
    deopt 189 [r80];
  L12(r29):
    c4 = `as.logical`(r29);
    if c4 then L80() else L13();
  L76():
    nl2 = ld nl;
    check L78() else D16();
  L77():
    r28 = dyn base6(<lang `<-`(Bgl, `==`(nl, "give.length"))>);
    goto L12(r28);
  L154():
    goto L38(r75);
  L157():
    r81 = clos inner1246119658;
    st `str.f.obj` = r81;
    do_call = ldf `do.call`;
    check L158() else D44();
  D16():
    deopt 66 [nl2];
  D44():
    deopt 194 [];
  L13():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L88() else L89();
  L15():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L99() else L100();
  L78():
    nl3 = force? nl2;
    checkMissing(nl3);
    r30 = `==`(nl3, "give.length");
    st Bgl = r30;
    any = ldf any in base;
    r31 = dyn any(r30);
    check L79() else D17();
  L80():
    larg2 = ld larg;
    check L81() else D18();
  L158():
    p6 = prom<V +>{
      str_f_obj = ld `str.f.obj`;
      str_f_obj1 = force? str_f_obj;
      checkMissing(str_f_obj1);
      return str_f_obj1;
    };
    p7 = prom<V +>{
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L2() else L3();
    L0(r84):
      return r84;
    L2():
      sym15 = ldf list;
      base15 = ldf list in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L4() else L5();
    L3():
      r83 = dyn base14(<lang list(give.head=FALSE)>, <sym larg>);
      goto L0(r83);
    L1(r86):
      larg34 = ld larg;
      larg35 = force? larg34;
      checkMissing(larg35);
      c32 = ldf c in base;
      r88 = dyn c32(r86, larg35);
      goto L0(r88);
    L4():
      list1 = ldf list in base;
      r87 = dyn list1(FALSE);
      goto L1(r87);
    L5():
      r85 = dyn base15[`give.head`](FALSE);
      goto L1(r85);
    };
    r90 = dyn do_call(p6, p7);
    check L159() else D45();
  D17():
    deopt 72 [r31];
  D18():
    deopt 73 [larg2];
  D45():
    deopt 197 [r90];
  L16(r36):
    c6 = `as.logical`(r36);
    if c6 then L92() else L17();
  L19(r40):
    c8 = `as.logical`(r40);
    if c8 then L103() else L20();
  L79():
    goto L12(r31);
  L81():
    larg3 = force? larg2;
    checkMissing(larg3);
    c5 = `is.object`(larg3);
    if c5 then L82() else L83(larg3);
  L88():
    which_head = ld `which.head`;
    check L90() else D21();
  L89():
    r35 = dyn base7(<sym which.head>);
    goto L16(r35);
  L99():
    which_head4 = ld `which.head`;
    check L101() else D25();
  L100():
    r39 = dyn base8(<sym which.head>);
    goto L19(r39);
  L159():
    popenv;
    return r90;
  D21():
    deopt 83 [which_head];
  D25():
    deopt 97 [which_head4];
  L14(dx4):
    st `give.length` = dx4;
    goto L15();
  L17():
    goto L15();
  L20():
    goto L22();
  L22():
    sym9 = ldf `is.numeric`;
    base9 = ldf `is.numeric` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L110() else L111();
  L82():
    dr2 = tryDispatchBuiltin.1("[[", larg3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L84() else L83(dr2);
  L83(larg5):
    which1 = ldf which;
    check L85() else D19();
  L90():
    which_head1 = force? which_head;
    checkMissing(which_head1);
    length2 = ldf length in base;
    r37 = dyn length2(which_head1);
    check L91() else D22();
  L92():
    larg6 = ld larg;
    check L93() else D23();
  L101():
    which_head5 = force? which_head4;
    checkMissing(which_head5);
    length3 = ldf length in base;
    r41 = dyn length3(which_head5);
    check L102() else D26();
  L103():
    larg10 = ld larg;
    check L104() else D27();
  D19():
    deopt 76 [larg5];
  D22():
    deopt 86 [r37];
  D23():
    deopt 87 [larg6];
  D26():
    deopt 100 [r41];
  D27():
    deopt 101 [larg10];
  L23(r45):
    c11 = `as.logical`(r45);
    if c11 then L117() else L25(c11);
  L84():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L14(dx3);
  L85():
    p2 = prom<V +>{
      Bgl = ld Bgl;
      Bgl1 = force? Bgl;
      checkMissing(Bgl1);
      return Bgl1;
    };
    r33 = dyn which1(p2);
    check L86() else D20();
  L91():
    goto L16(r37);
  L93():
    larg7 = force? larg6;
    checkMissing(larg7);
    c7 = `is.object`(larg7);
    if c7 then L94() else L95(larg7);
  L102():
    goto L19(r41);
  L104():
    larg11 = force? larg10;
    checkMissing(larg11);
    c9 = `is.object`(larg11);
    if c9 then L105() else L106(larg11);
  L110():
    larg14 = ld larg;
    check L112() else D29();
  L111():
    r44 = dyn base9(<lang `[[`(larg, "nest.lev")>);
    goto L23(r44);
  D20():
    deopt 78 [larg5, r33];
  D29():
    deopt 112 [larg14];
  L18(dx7):
    st `give.length` = dx7;
    goto L15();
  L21(dx9):
    st larg = dx9;
    goto L22();
  L25(c13):
    c25 = `as.logical`(c13);
    if c25 then L126() else L28();
  L86():
    __1 = ldf `[[` in base;
    r34 = dyn __1(larg5, r33);
    goto L14(r34);
  L94():
    dr4 = tryDispatchBuiltin.1("[[", larg7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L96() else L95(dr4);
  L95(larg9):
    which_head2 = ld `which.head`;
    check L97() else D24();
  L105():
    dr6 = tryDispatchBuiltin.1("[", larg11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L107() else L106(dr6);
  L106(larg13):
    which_head6 = ld `which.head`;
    check L108() else D28();
  L112():
    larg15 = force? larg14;
    checkMissing(larg15);
    c10 = `is.object`(larg15);
    if c10 then L113() else L114(larg15);
  L117():
    sym10 = ldf `is.numeric`;
    base10 = ldf `is.numeric` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L118() else L119();
  D24():
    deopt 89 [larg9, which_head2];
  D28():
    deopt 103 [larg13, which_head6];
  L24(dx12):
    is_numeric = ldf `is.numeric` in base;
    r47 = dyn is_numeric(dx12);
    check L116() else D30();
  L26(c16, r49):
    c22 = `as.logical`(r49);
    c23 = `&&`(c16, c22);
    goto L25(c23);
  L28():
    goto L35(NULL);
  L35(r69):
    goto L36();
  L96():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L18(dx6);
  L97():
    which_head3 = force? which_head2;
    __2 = ldf `[[` in base;
    r38 = dyn __2(larg9, which_head3);
    goto L18(r38);
  L107():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L21(dx8);
  L108():
    which_head7 = force? which_head6;
    checkMissing(which_head7);
    r42 = `-`(<missing>, which_head7);
    __3 = ldf `[` in base;
    r43 = dyn __3(larg13, r42);
    goto L21(r43);
  L113():
    dr8 = tryDispatchBuiltin.1("[[", larg15);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L115() else L114(dr8);
  L114(larg17):
    __4 = ldf `[[` in base;
    r46 = dyn __4(larg17, "nest.lev");
    goto L24(r46);
  L118():
    larg18 = ld larg;
    check L120() else D31();
  L119():
    r48 = dyn base10(<lang `[[`(larg, "vec.len")>);
    goto L26(c11, r48);
  L126():
    sym11 = ldf min;
    base11 = ldf min in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L127() else L128();
  D30():
    deopt 118 [r47];
  D31():
    deopt 121 [c11, larg18];
  L29(r53):
    l = ld larg;
    c29 = `is.object`(l);
    if c29 then L146() else L147(r53, l);
  L115():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L24(dx11);
  L116():
    goto L23(r47);
  L120():
    larg19 = force? larg18;
    checkMissing(larg19);
    c17 = `is.object`(larg19);
    if c17 then L121() else L122(c11, larg19);
  L127():
    larg22 = ld larg;
    check L129() else D33();
  L128():
    r52 = dyn base11(<lang `[[`(larg, "vec.len")>, <lang `%/%`(`(`(`-`(`-`(`[[`(larg, "width"), nchar(`[[`(larg, "indent.str"))), 31.0)), 19.0)>);
    goto L29(r52);
  D33():
    deopt 131 [larg22];
  L27(c21, dx14):
    is_numeric1 = ldf `is.numeric` in base;
    r51 = dyn is_numeric1(dx14);
    check L124() else D32();
  L34(r67, dx29):
    st larg = dx29;
    goto L35(r67);
  L121():
    dr10 = tryDispatchBuiltin.1("[[", larg19);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L123() else L122(c11, dr10);
  L122(c19, larg21):
    __5 = ldf `[[` in base;
    r50 = dyn __5(larg21, "vec.len");
    goto L27(c19, r50);
  L129():
    larg23 = force? larg22;
    checkMissing(larg23);
    c26 = `is.object`(larg23);
    if c26 then L130() else L131(larg23);
  L146():
    dr18 = tryDispatchBuiltin.0("[[<-", l, r53);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L148() else L147(r53, dr18);
  L147(r65, l2):
    ____ = ldf `[[<-` in base;
    r68 = dyn ____(l2, r53, "vec.len");
    goto L34(r65, r68);
  D32():
    deopt 127 [c21, r51];
  L30(dx16):
    larg26 = ld larg;
    check L133() else D34();
  L123():
    dx13 = getTryDispatchBuiltinValue(dr10);
    goto L27(c11, dx13);
  L124():
    goto L26(c21, r51);
  L130():
    dr12 = tryDispatchBuiltin.1("[[", larg23);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L132() else L131(dr12);
  L131(larg25):
    __6 = ldf `[[` in base;
    r54 = dyn __6(larg25, "vec.len");
    goto L30(r54);
  L148():
    dx28 = getTryDispatchBuiltinValue(dr18);
    goto L34(r53, dx28);
  D34():
    deopt 137 [larg26];
  L132():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L30(dx15);
  L133():
    larg27 = force? larg26;
    checkMissing(larg27);
    c27 = `is.object`(larg27);
    if c27 then L134() else L135(larg27);
  L31(dx18):
    sym12 = ldf nchar;
    base12 = ldf nchar in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L137() else L138();
  L134():
    dr14 = tryDispatchBuiltin.1("[[", larg27);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L136() else L135(dr14);
  L135(larg29):
    __7 = ldf `[[` in base;
    r55 = dyn __7(larg29, "width");
    goto L31(r55);
  L32(dx21, r57):
    r60 = `-`(dx21, r57);
    r61 = `-`(r60, 31.0);
    ___ = ldf `%/%` in base;
    r62 = dyn ___(r61, 19.0);
    check L144() else D37();
  L136():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L31(dx17);
  L137():
    larg30 = ld larg;
    check L139() else D35();
  L138():
    r56 = dyn base12(<lang `[[`(larg, "indent.str")>);
    goto L32(dx18, r56);
  D35():
    deopt 143 [dx18, larg30];
  D37():
    deopt 158 [r62];
  L139():
    larg31 = force? larg30;
    checkMissing(larg31);
    c28 = `is.object`(larg31);
    if c28 then L140() else L141(dx18, larg31);
  L144():
    min = ldf min in base;
    r63 = dyn min(dx16, r62);
    check L145() else D38();
  D38():
    deopt 160 [r63];
  L33(dx26, dx27):
    nchar = ldf nchar in base;
    r59 = dyn nchar(dx27, "chars", FALSE, NA_LGL);
    check L143() else D36();
  L140():
    dr16 = tryDispatchBuiltin.1("[[", larg31);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L142() else L141(dx18, dr16);
  L141(dx23, larg33):
    __8 = ldf `[[` in base;
    r58 = dyn __8(larg33, "indent.str");
    goto L33(dx23, r58);
  L145():
    goto L29(r63);
  D36():
    deopt 152 [dx26, r59];
  L142():
    dx25 = getTryDispatchBuiltinValue(dr16);
    goto L33(dx18, dx25);
  L143():
    goto L32(dx26, r59);
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg str:cls, reg format:cls, reg object:*, reg object1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg ddd1:dots?, reg r3:V |
    mkenv;
    st `...` = ddd;
    str = ldf str;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      format = ldf format;
      p = prom<V +>{
        object = ld object;
        object1 = force? object;
        checkMissing(object1);
        return object1;
      };
      r1 = dyn format(p);
      return r1;
    };
    ddd1 = ld `...`;
    r3 = dyn str[, `...`](p1, ddd1);
    check L1() else D1();
  D1():
    deopt 4 [r3];
  L1():
    popenv;
    return r3;
  }
}