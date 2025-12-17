fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1000347940;
    st `print.warnings` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1000347940(x, tags, header, `...`) {
  (reg x:*, reg tags:*, reg header:*, reg ddd:dots) -+> V { var x:*, var tags:*, var header:*, reg header_isMissing:L, reg header_orDefault:*, reg ngettext:cls, reg n:*, reg n1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg length:cls, reg r5:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg header1:*, reg header2:V, reg length1:cls, reg r8:V, reg c1:L, reg cat:cls, reg header3:*, reg header4:V, reg p2:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg missing:cls, reg r14:V, reg c2:L, reg c3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg c7:L, reg r16:V, reg tags1:*, reg tags2:V, reg length2:cls, reg r17:V, reg r18:V, reg c8:L, reg c9:V, reg c11:L, reg n2:*, reg n3:V, reg r19:V, reg c12:L, reg r20:V, reg paste0:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg n4:*, reg n5:V, reg r23:I, reg p3:p(V +), reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg tags3:*, reg tags4:V, reg as_character:cls, reg r31:V, reg length3:cls, reg r32:V, reg n6:*, reg n7:V, reg r33:V, reg c13:L, reg stop:cls, reg r34:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg x3:*, reg x4:V, reg names:cls, reg r37:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r38:V, reg r39:V, reg n8:*, reg n9:V, reg r40:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c14:L, reg x5:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r41:V, reg i7:I, reg r42:V, reg x6:*, reg x7:V, reg c15:L, reg i9:I, reg x9:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg dx1:V, reg i12:*, reg i13:V, reg __:cls, reg r43:V, reg length4:cls, reg r44:V, reg c16:L, reg deparse:cls, reg x10:*, reg x11:V, reg c17:L, reg x13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i16:*, reg i17:V, reg __1:cls, reg r45:V, reg p4:p(V +), reg r47:V, reg strsplit:cls, reg msgs:*, reg msgs1:V, reg c18:L, reg msgs3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i18:*, reg i19:V, reg __2:cls, reg r48:V, reg p5:p(V +), reg r50:V, reg c19:L, reg i21:I, reg r52:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i23:I, reg dx7:V, reg __3:cls, reg r53:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg i26:I, reg r55:V, reg tags5:*, reg tags6:V, reg c20:L, reg i28:I, reg tags8:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i30:I, reg dx9:V, reg i31:*, reg i32:V, reg __4:cls, reg r56:V, reg nchar:cls, reg r57:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r60:V, reg i35:I, reg r61:V, reg r62:V, reg temp:*, reg temp1:V, reg c21:L, reg i37:I, reg r64:V, reg temp3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i39:I, reg r66:V, reg dx11:V, reg __5:cls, reg r67:V, reg nchar1:cls, reg r68:V, reg r69:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r72:V, reg i42:I, reg r73:V, reg r74:V, reg sm:*, reg sm1:V, reg c22:L, reg i44:I, reg r76:V, reg sm3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i46:I, reg r78:V, reg dx13:V, reg __6:cls, reg r79:V, reg nchar2:cls, reg r80:V, reg r81:V, reg r82:V, reg c23:L, reg i49:I, reg r83:S, reg paste1:cls, reg tags9:*, reg tags10:V, reg c24:L, reg tags12:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg i50:*, reg i51:V, reg __7:cls, reg r84:V, reg p6:p(V +), reg temp4:*, reg temp5:V, reg c25:L, reg temp7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __8:cls, reg r86:V, reg p7:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r88:V, reg r89:V, reg temp8:*, reg temp9:V, reg length5:cls, reg r90:V, reg r91:V, reg c26:L, reg p8:p(V +), reg nl:*, reg nl1:V, reg p9:p(V +), reg msgs4:*, reg msgs5:V, reg c27:L, reg msgs7:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg i52:*, reg i53:V, reg __9:cls, reg r94:V, reg p10:p(V +), reg r96:V, reg i54:I, reg r97:V, reg paste2:cls, reg tags13:*, reg tags14:V, reg c28:L, reg tags16:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg i55:*, reg i56:V, reg __10:cls, reg r98:V, reg p11:p(V +), reg msgs8:*, reg msgs9:V, reg c29:L, reg msgs11:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg i57:*, reg i58:V, reg __11:cls, reg r100:V, reg p12:p(V +), reg r102:V, reg do_call:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r103:V, reg r104:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r105:V, reg r106:V, reg out:*, reg out1:V, reg list:cls, reg r107:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r108:V, reg r109:V, reg x14:*, reg x15:V, reg attr:cls, reg r110:V, reg c30:cls, reg r111:V, reg p13:p(V +), reg r113:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r114:V, reg r115:V, reg x16:*, reg x17:V, reg invisible:cls, reg r116:V |
    mkenv;
    st x = x;
    st tags = tags;
    header_isMissing = missing.0(header);
    if header_isMissing then L0() else L1(header);
  L0():
    p1 = prom<V +>{
      ngettext = ldf ngettext;
      p = prom<V +>{
        n = ld n;
        n1 = force? n;
        checkMissing(n1);
        return n1;
      };
      r1 = dyn ngettext(p, "Warning message:\n", "Warning messages:\n");
      return r1;
    };
    goto L1(p1);
  L1(header_orDefault):
    st header = header_orDefault;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L36() else L37();
  L2(r4):
    st n = r4;
    c = `as.logical`(r4);
    if c then L40() else L3();
  L36():
    x1 = ld x;
    check L38() else D0();
  L37():
    r3 = dyn base(<sym x>);
    goto L2(r3);
  D0():
    deopt 2 [x1];
  L3():
    goto L34();
  L34():
    sym17 = ldf invisible;
    base17 = ldf invisible in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L132() else L133();
  L38():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r5 = dyn length(x2);
    check L39() else D1();
  L40():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  D1():
    deopt 5 [r5];
  L4(r7):
    c1 = `as.logical`(r7);
    if c1 then L45() else L5();
  L35(r115):
    popenv;
    return r115;
  L39():
    goto L2(r5);
  L41():
    header1 = ld header;
    check L43() else D2();
  L42():
    r6 = dyn base1(<sym header>);
    goto L4(r6);
  L132():
    x16 = ld x;
    check L134() else D40();
  L133():
    r114 = dyn base17(<sym x>);
    goto L35(r114);
  D2():
    deopt 9 [header1];
  D40():
    deopt 171 [x16];
  L5():
    goto L6();
  L6():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L43():
    header2 = force? header1;
    checkMissing(header2);
    length1 = ldf length in base;
    r8 = dyn length1(header2);
    check L44() else D3();
  L45():
    cat = ldf cat;
    check L46() else D4();
  L134():
    x17 = force? x16;
    checkMissing(x17);
    invisible = ldf invisible in base;
    r116 = dyn invisible(x17);
    check L135() else D41();
  D3():
    deopt 12 [r8];
  D4():
    deopt 14 [];
  D41():
    deopt 174 [r116];
  L7(r13):
    c2 = `as.logical`(r13);
    if c2 then L8(c2) else L51();
  L44():
    goto L4(r8);
  L46():
    p2 = prom<V +>{
      header3 = ld header;
      header4 = force? header3;
      checkMissing(header4);
      return header4;
    };
    r10 = dyn cat(p2);
    check L47() else D5();
  L49():
    missing = ldf missing in base;
    r14 = dyn missing(<sym tags>);
    goto L7(r14);
  L50():
    r12 = dyn base2(<sym tags>);
    goto L7(r12);
  L135():
    goto L35(r116);
  D5():
    deopt 16 [r10];
  L8(c3):
    c11 = `as.logical`(c3);
    if c11 then L57() else L10();
  L47():
    goto L6();
  L51():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L52() else L53();
  L9(c7, r16):
    r18 = `==`(r16, 0.0);
    c8 = `as.logical`(r18);
    c9 = `||`(c7, c8);
    goto L8(c9);
  L10():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L64() else L65();
  L13():
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  L52():
    tags1 = ld tags;
    check L54() else D6();
  L53():
    r15 = dyn base3(<sym tags>);
    goto L9(c2, r15);
  L57():
    n2 = ld n;
    check L58() else D8();
  D6():
    deopt 24 [c2, tags1];
  D8():
    deopt 31 [n2];
  L14(r28):
    n6 = ld n;
    check L71() else D14();
  L17(r36):
    st msgs = r36;
    sym8 = ldf seq_len;
    base8 = ldf seq_len in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L80() else L81();
  L54():
    tags2 = force? tags1;
    checkMissing(tags2);
    length2 = ldf length in base;
    r17 = dyn length2(tags2);
    check L55() else D7();
  L58():
    n3 = force? n2;
    checkMissing(n3);
    r19 = `==`(n3, 1);
    c12 = `as.logical`(r19);
    if c12 then L59() else L11();
  L64():
    sym6 = ldf `as.character`;
    base6 = ldf `as.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L66() else L67();
  L65():
    r27 = dyn base5(<lang `<-`(tags, as.character(tags))>);
    goto L14(r27);
  L76():
    x3 = ld x;
    check L78() else D17();
  L77():
    r35 = dyn base7(<sym x>);
    goto L17(r35);
  D7():
    deopt 27 [c2, r17];
  D14():
    deopt 53 [r28, n6];
  D17():
    deopt 64 [x3];
  L11():
    paste0 = ldf paste0;
    check L61() else D9();
  L12(r20):
    st tags = r20;
    goto L13();
  L15(r30):
    st tags = r30;
    length3 = ldf length in base;
    r32 = dyn length3(r30);
    check L70() else D13();
  L18(r39):
    s = toForSeq(r39);
    l = length(s);
    i = 0;
    goto L19(i);
  L55():
    goto L9(c2, r17);
  L59():
    goto L12("");
  L66():
    tags3 = ld tags;
    check L68() else D11();
  L67():
    r29 = dyn base6(<sym tags>);
    goto L15(r29);
  L71():
    n7 = force? n6;
    checkMissing(n7);
    r33 = `!=`(r28, n7);
    c13 = `as.logical`(r33);
    if c13 then L72() else L16();
  L78():
    x4 = force? x3;
    checkMissing(x4);
    names = ldf names in base;
    r37 = dyn names(x4);
    check L79() else D18();
  L80():
    n8 = ld n;
    check L82() else D19();
  L81():
    r38 = dyn base8(<sym n>);
    goto L18(r38);
  D9():
    deopt 38 [];
  D11():
    deopt 47 [tags3];
  D13():
    deopt 53 [r32];
  D18():
    deopt 67 [r37];
  D19():
    deopt 70 [n8];
  L16():
    goto L13();
  L19(i1):
    i2 = `+`.1(i1, 1);
    c14 = `<`.1(l, i2);
    if c14 then L83() else L33();
  L61():
    p3 = prom<V +>{
      sym4 = ldf seq_len;
      base4 = ldf seq_len in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      r23 = seq_len(n5);
      goto L0(r23);
    L2():
      r21 = dyn base4(<sym n>);
      goto L0(r21);
    };
    r25 = dyn paste0(p3, ": ");
    check L62() else D10();
  L68():
    tags4 = force? tags3;
    checkMissing(tags4);
    as_character = ldf `as.character` in base;
    r31 = dyn as_character(tags4);
    check L69() else D12();
  L70():
    goto L14(r32);
  L72():
    stop = ldf stop;
    check L73() else D15();
  L79():
    goto L17(r37);
  L82():
    n9 = force? n8;
    checkMissing(n9);
    r40 = seq_len(n9);
    goto L18(r40);
  D10():
    deopt 41 [r25];
  D12():
    deopt 50 [r31];
  D15():
    deopt 57 [];
  L33():
    x5 = `[[`(s, i2, NULL, TRUE);
    st i = x5;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L84() else L85();
  L62():
    goto L12(r25);
  L69():
    goto L15(r31);
  L73():
    r34 = dyn stop("'tags' must be a character vector of the same length as 'x'");
    check L74() else D16();
  L83():
    goto L34();
  D16():
    deopt 59 [r34];
  L20(i7, r42):
    c16 = `as.logical`(r42);
    if c16 then L92() else L22();
  L74():
    goto L13();
  L84():
    x6 = ld x;
    check L86() else D20();
  L85():
    r41 = dyn base9(<lang `[[`(x, i)>);
    goto L20(i2, r41);
  D20():
    deopt 75 [i2, x6];
  L22():
    paste2 = ldf paste0;
    check L127() else D36();
  L32(i54, r97):
    st out = r97;
    do_call = ldf `do.call`;
    check L129() else D38();
  L86():
    x7 = force? x6;
    checkMissing(x7);
    c15 = `is.object`(x7);
    if c15 then L87() else L88(i2, x7);
  L92():
    deparse = ldf deparse;
    check L93() else D23();
  D23():
    deopt 83 [i7];
  D36():
    deopt 154 [i7];
  D38():
    deopt 160 [i54];
  L21(i11, dx1):
    length4 = ldf length in base;
    r44 = dyn length4(dx1);
    check L91() else D22();
  L87():
    dr = tryDispatchBuiltin.1("[[", x7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L89() else L88(i2, dr);
  L88(i9, x9):
    i12 = ld i;
    check L90() else D21();
  L93():
    p4 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      c17 = `is.object`(x11);
      if c17 then L1() else L2(x11);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", x11);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x13):
      i16 = ld i;
      i17 = force? i16;
      __1 = ldf `[[` in base;
      r45 = dyn __1(x13, i17);
      goto L0(r45);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r47 = dyn deparse[, `width.cutoff`, nlines](p4, 50, 2);
    check L94() else D24();
  L127():
    p11 = prom<V +>{
      tags13 = ld tags;
      tags14 = force? tags13;
      checkMissing(tags14);
      c28 = `is.object`(tags14);
      if c28 then L1() else L2(tags14);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("[", tags14);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(tags16):
      i55 = ld i;
      i56 = force? i55;
      __10 = ldf `[` in base;
      r98 = dyn __10(tags16, i56);
      goto L0(r98);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    p12 = prom<V +>{
      msgs8 = ld msgs;
      msgs9 = force? msgs8;
      checkMissing(msgs9);
      c29 = `is.object`(msgs9);
      if c29 then L1() else L2(msgs9);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("[", msgs9);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(msgs11):
      i57 = ld i;
      i58 = force? i57;
      __11 = ldf `[` in base;
      r100 = dyn __11(msgs11, i58);
      goto L0(r100);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    r102 = dyn paste2(p11, p12);
    check L128() else D37();
  L129():
    p13 = prom<V +>{
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L3() else L4();
    L0(r104):
      return r104;
    L3():
      sym15 = ldf list;
      base15 = ldf list in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L5() else L6();
    L4():
      r103 = dyn base14[, , fill](<lang list(out)>, <lang attr(x, "dots")>, TRUE);
      goto L0(r103);
    L1(r106):
      sym16 = ldf attr;
      base16 = ldf attr in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L7() else L8();
    L5():
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      list = ldf list in base;
      r107 = dyn list(out1);
      goto L1(r107);
    L6():
      r105 = dyn base15(<sym out>);
      goto L1(r105);
    L2(r109):
      c30 = ldf c in base;
      r111 = dyn c30(r106, r109, TRUE);
      goto L0(r111);
    L7():
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      attr = ldf attr in base;
      r110 = dyn attr(x15, "dots");
      goto L2(r110);
    L8():
      r108 = dyn base16(<sym x>, "dots");
      goto L2(r108);
    };
    r113 = dyn do_call("cat", p13);
    check L130() else D39();
  D21():
    deopt 77 [i9, x9, i12];
  D22():
    deopt 81 [i11, r44];
  D24():
    deopt 89 [i7, r47];
  D37():
    deopt 157 [i7, r102];
  D39():
    deopt 163 [i54, r113];
  L89():
    dx = getTryDispatchBuiltinValue(dr);
    goto L21(i2, dx);
  L90():
    i13 = force? i12;
    __ = ldf `[[` in base;
    r43 = dyn __(x9, i13);
    goto L21(i9, r43);
  L91():
    goto L20(i11, r44);
  L94():
    st temp = r47;
    strsplit = ldf strsplit;
    check L95() else D25();
  L128():
    goto L32(i7, r102);
  L130():
    goto L19(i54);
  D25():
    deopt 92 [i7];
  L95():
    p5 = prom<V +>{
      msgs = ld msgs;
      msgs1 = force? msgs;
      checkMissing(msgs1);
      c18 = `is.object`(msgs1);
      if c18 then L1() else L2(msgs1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", msgs1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(msgs3):
      i18 = ld i;
      i19 = force? i18;
      __2 = ldf `[` in base;
      r48 = dyn __2(msgs3, i19);
      goto L0(r48);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r50 = dyn strsplit(p5, "\n");
    check L96() else D26();
  D26():
    deopt 95 [i7, r50];
  L96():
    c19 = `is.object`(r50);
    if c19 then L97() else L98(i7, r50);
  L23(i23, dx7):
    st sm = dx7;
    sym10 = ldf nchar;
    base10 = ldf nchar in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L100() else L101();
  L97():
    dr6 = tryDispatchBuiltin.1("[[", r50);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L99() else L98(i7, dr6);
  L98(i21, r52):
    __3 = ldf `[[` in base;
    r53 = dyn __3(r52, 1);
    goto L23(i21, r53);
  L24(i26, r55):
    sym11 = ldf nchar;
    base11 = ldf nchar in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L108() else L109();
  L99():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L23(i7, dx6);
  L100():
    tags5 = ld tags;
    check L102() else D27();
  L101():
    r54 = dyn base10(<lang `[`(tags, i)>, "w");
    goto L24(i23, r54);
  D27():
    deopt 102 [i23, tags5];
  L26(i35, r61, r62):
    r69 = `+`(r61, r62);
    sym12 = ldf nchar;
    base12 = ldf nchar in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L115() else L116();
  L102():
    tags6 = force? tags5;
    checkMissing(tags6);
    c20 = `is.object`(tags6);
    if c20 then L103() else L104(i23, tags6);
  L108():
    temp = ld temp;
    check L110() else D30();
  L109():
    r60 = dyn base11(<lang `[`(temp, 1)>, "w");
    goto L26(i26, r55, r60);
  D30():
    deopt 113 [i26, r55, temp];
  L25(i30, dx9):
    nchar = ldf nchar in base;
    r57 = dyn nchar(dx9, "w", FALSE, NA_LGL);
    check L107() else D29();
  L28(i42, r73, r74):
    r81 = `+`(r73, r74);
    r82 = `<=`(r81, 75);
    c23 = `as.logical`(r82);
    if c23 then L122() else L30();
  L103():
    dr8 = tryDispatchBuiltin.1("[", tags6);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L105() else L104(i23, dr8);
  L104(i28, tags8):
    i31 = ld i;
    check L106() else D28();
  L110():
    temp1 = force? temp;
    checkMissing(temp1);
    c21 = `is.object`(temp1);
    if c21 then L111() else L112(i26, r55, temp1);
  L115():
    sm = ld sm;
    check L117() else D32();
  L116():
    r72 = dyn base12(<lang `[`(sm, 1)>, "w");
    goto L28(i35, r69, r72);
  D28():
    deopt 104 [i28, tags8, i31];
  D29():
    deopt 111 [i30, r57];
  D32():
    deopt 125 [i35, r69, sm];
  L27(i39, r66, dx11):
    nchar1 = ldf nchar in base;
    r68 = dyn nchar1(dx11, "w", FALSE, NA_LGL);
    check L114() else D31();
  L30():
    goto L31(i42, "\n  ");
  L31(i49, r83):
    st nl = r83;
    paste1 = ldf paste0;
    check L124() else D34();
  L105():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L25(i23, dx8);
  L106():
    i32 = force? i31;
    __4 = ldf `[` in base;
    r56 = dyn __4(tags8, i32);
    goto L25(i28, r56);
  L107():
    goto L24(i30, r57);
  L111():
    dr10 = tryDispatchBuiltin.1("[", temp1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L113() else L112(i26, r55, dr10);
  L112(i37, r64, temp3):
    __5 = ldf `[` in base;
    r67 = dyn __5(temp3, 1);
    goto L27(i37, r64, r67);
  L117():
    sm1 = force? sm;
    checkMissing(sm1);
    c22 = `is.object`(sm1);
    if c22 then L118() else L119(i35, r69, sm1);
  L122():
    goto L31(i42, " ");
  D31():
    deopt 122 [i39, r66, r68];
  D34():
    deopt 144 [i49];
  L29(i46, r78, dx13):
    nchar2 = ldf nchar in base;
    r80 = dyn nchar2(dx13, "w", FALSE, NA_LGL);
    check L121() else D33();
  L113():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L27(i26, r55, dx10);
  L114():
    goto L26(i39, r66, r68);
  L118():
    dr12 = tryDispatchBuiltin.1("[", sm1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L120() else L119(i35, r69, dr12);
  L119(i44, r76, sm3):
    __6 = ldf `[` in base;
    r79 = dyn __6(sm3, 1);
    goto L29(i44, r76, r79);
  L124():
    p6 = prom<V +>{
      tags9 = ld tags;
      tags10 = force? tags9;
      checkMissing(tags10);
      c24 = `is.object`(tags10);
      if c24 then L1() else L2(tags10);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", tags10);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(tags12):
      i50 = ld i;
      i51 = force? i50;
      __7 = ldf `[` in base;
      r84 = dyn __7(tags12, i51);
      goto L0(r84);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p7 = prom<V +>{
      temp4 = ld temp;
      temp5 = force? temp4;
      checkMissing(temp5);
      c25 = `is.object`(temp5);
      if c25 then L1() else L2(temp5);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", temp5);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(temp7):
      __8 = ldf `[` in base;
      r86 = dyn __8(temp7, 1);
      goto L0(r86);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p8 = prom<V +>{
      sym13 = ldf length;
      base13 = ldf length in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L2() else L3();
    L0(r89):
      r91 = `>`(r89, 1);
      c26 = `as.logical`(r91);
      if c26 then L4() else L1();
    L2():
      temp8 = ld temp;
      temp9 = force? temp8;
      checkMissing(temp9);
      length5 = ldf length in base;
      r90 = dyn length5(temp9);
      goto L0(r90);
    L3():
      r88 = dyn base13(<sym temp>);
      goto L0(r88);
    L1():
      invisible.0();
      return NULL;
    L4():
      return " ...";
    };
    p9 = prom<V +>{
      nl = ld nl;
      nl1 = force? nl;
      checkMissing(nl1);
      return nl1;
    };
    p10 = prom<V +>{
      msgs4 = ld msgs;
      msgs5 = force? msgs4;
      checkMissing(msgs5);
      c27 = `is.object`(msgs5);
      if c27 then L1() else L2(msgs5);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[", msgs5);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(msgs7):
      i52 = ld i;
      i53 = force? i52;
      __9 = ldf `[` in base;
      r94 = dyn __9(msgs7, i53);
      goto L0(r94);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r96 = dyn paste1(p6, "In ", p7, p8, " :", p9, p10);
    check L125() else D35();
  D33():
    deopt 134 [i46, r78, r80];
  D35():
    deopt 152 [i49, r96];
  L120():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L29(i35, r69, dx12);
  L121():
    goto L28(i46, r78, r80);
  L125():
    goto L32(i49, r96);
  }
}