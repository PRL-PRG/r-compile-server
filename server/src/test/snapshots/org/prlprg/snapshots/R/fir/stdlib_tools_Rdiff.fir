fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2935378693;
    st Rdiff = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2935378693(from, to, useDiff, forEx, nullPointers, Log) {
  (reg from:*, reg to:*, reg useDiff:*, reg forEx:*, reg nullPointers:*, reg Log:*) -+> V { var from:*, var to:*, var useDiff:*, reg useDiff_isMissing:L, reg useDiff_orDefault:*, var forEx:*, reg forEx_isMissing:L, reg forEx_orDefault:*, var nullPointers:*, reg nullPointers_isMissing:L, reg nullPointers_orDefault:*, var Log:*, reg Log_isMissing:L, reg Log_orDefault:*, reg r:cls, reg r1:cls, reg r2:cls, reg useDiff1:*, reg useDiff2:V, reg readLines:cls, reg from1:*, reg from2:V, reg p:p(V +), reg r4:V, reg readLines1:cls, reg to1:*, reg to2:V, reg p1:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg left:*, reg left1:V, reg length:cls, reg r9:V, reg r10:V, reg c:L, reg c2:V, reg startsWith:cls, reg left2:*, reg left3:V, reg c3:L, reg left5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg p2:p(V +), reg r13:V, reg c4:L, reg c5:V, reg useDiff3:*, reg useDiff4:V, reg c7:L, reg c9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg c12:L, reg r15:V, reg Sys_which:cls, reg r16:V, reg nzchar:cls, reg r17:V, reg r18:V, reg c13:L, reg c14:V, reg c16:L, reg asPDF:*, reg asPDF1:V, reg r19:V, reg c17:L, reg warning:cls, reg r20:V, reg asPDF2:*, reg asPDF3:V, reg c18:L, reg useDiff5:*, reg useDiff6:V, reg r23:V, reg c19:L, reg useDiff7:*, reg useDiff8:V, reg r24:V, reg c20:L, reg r25:S, reg Log1:*, reg Log2:V, reg c21:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg out:*, reg out1:V, reg list:cls, reg r28:V, reg message:cls, reg out2:*, reg out3:V, reg p3:p(V +), reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg invisible:cls, reg r35:V, reg trimPDF:cls, reg left6:*, reg left7:V, reg p4:p(V +), reg r38:V, reg trimPDF1:cls, reg right:*, reg right1:V, reg p5:p(V +), reg r40:V, reg clean:cls, reg left8:*, reg left9:V, reg p6:p(V +), reg r43:V, reg clean1:cls, reg right2:*, reg right3:V, reg p7:p(V +), reg r45:V, reg forEx1:*, reg forEx2:V, reg c22:L, reg clean2:cls, reg left10:*, reg left11:V, reg p8:p(V +), reg r47:V, reg filtergrep:cls, reg left12:*, reg left13:V, reg p9:p(V +), reg r49:V, reg clean3:cls, reg right4:*, reg right5:V, reg p10:p(V +), reg r51:V, reg useDiff9:*, reg useDiff10:V, reg r52:V, reg c23:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r53:V, reg r54:V, reg left14:*, reg left15:V, reg length1:cls, reg r55:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r58:V, reg r59:V, reg r60:V, reg right6:*, reg right7:V, reg length2:cls, reg r61:V, reg r62:V, reg c24:L, reg gsub:cls, reg left16:*, reg left17:V, reg p11:p(V +), reg r64:V, reg gsub1:cls, reg right8:*, reg right9:V, reg p12:p(V +), reg r66:V, reg gsub2:cls, reg bleft:*, reg bleft1:V, reg p13:p(V +), reg r68:V, reg gsub3:cls, reg bright:*, reg bright1:V, reg p14:p(V +), reg r70:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r71:V, reg r72:V, reg bleft2:*, reg bleft3:V, reg bright2:*, reg bright3:V, reg r73:V, reg all:cls, reg r74:V, reg c25:L, reg Log3:*, reg Log4:V, reg c26:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r75:V, reg r76:V, reg character:cls, reg r77:V, reg list1:cls, reg r78:V, reg r79:V, reg cat:cls, reg r82:V, reg bleft4:*, reg bleft5:V, reg bright4:*, reg bright5:V, reg r83:V, reg which:cls, reg diff:*, reg diff1:V, reg p15:p(V +), reg r85:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c27:L, reg x:V, reg cat1:cls, reg i5:*, reg i6:V, reg p16:p(V +), reg i7:*, reg i8:V, reg p17:p(V +), reg left18:*, reg left19:V, reg c28:L, reg left21:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i9:*, reg i10:V, reg __1:cls, reg r88:V, reg p18:p(V +), reg right10:*, reg right11:V, reg c29:L, reg right13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i11:*, reg i12:V, reg __2:cls, reg r90:V, reg p19:p(V +), reg r92:V, reg Log5:*, reg Log6:V, reg c30:L, reg which1:cls, reg diff2:*, reg diff3:V, reg p20:p(V +), reg r94:V, reg paste0:cls, reg i13:*, reg i14:V, reg p21:p(V +), reg i15:*, reg i16:V, reg p22:p(V +), reg left22:*, reg left23:V, reg c31:L, reg left25:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i17:*, reg i18:V, reg __3:cls, reg r97:V, reg p23:p(V +), reg right14:*, reg right15:V, reg c32:L, reg right17:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i19:*, reg i20:V, reg __4:cls, reg r99:V, reg p24:p(V +), reg r101:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r102:V, reg r103:V, reg out4:*, reg out5:V, reg list2:cls, reg r104:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r105:V, reg r106:V, reg invisible1:cls, reg r107:V, reg Log7:*, reg Log8:V, reg c33:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r108:V, reg r109:V, reg out6:*, reg out7:V, reg list3:cls, reg r110:V, reg message1:cls, reg out8:*, reg out9:V, reg p25:p(V +), reg r112:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r113:V, reg r114:V, reg invisible2:cls, reg r115:V, reg character1:cls, reg r116:V, reg tempfile:cls, reg r117:V, reg writeLines:cls, reg left26:*, reg left27:V, reg p26:p(V +), reg a:*, reg a1:V, reg p27:p(V +), reg r120:V, reg tempfile1:cls, reg r121:V, reg writeLines1:cls, reg right18:*, reg right19:V, reg p28:p(V +), reg b:*, reg b1:V, reg p29:p(V +), reg r124:V, reg Log9:*, reg Log10:V, reg c34:L, reg tempfile2:cls, reg r125:V, reg system2:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r126:V, reg r127:V, reg shQuote:cls, reg a2:*, reg a3:V, reg p30:p(V +), reg r129:V, reg shQuote1:cls, reg b2:*, reg b3:V, reg p31:p(V +), reg r131:V, reg c35:cls, reg r132:V, reg p32:p(V +), reg tf:*, reg tf1:V, reg p33:p(V +), reg tf2:*, reg tf3:V, reg p34:p(V +), reg r136:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r137:V, reg r138:V, reg status:*, reg status1:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r139:V, reg r140:V, reg out10:*, reg out11:V, reg readLines2:cls, reg tf4:*, reg tf5:V, reg p35:p(V +), reg r142:V, reg c36:cls, reg r143:V, reg list4:cls, reg r144:V, reg system3:cls, reg paste1:cls, reg shQuote2:cls, reg a4:*, reg a5:V, reg p36:p(V +), reg r146:V, reg p37:p(V +), reg shQuote3:cls, reg b4:*, reg b5:V, reg p38:p(V +), reg r149:V, reg p39:p(V +), reg r151:V, reg p40:p(V +), reg r153:V |
    mkenv;
    st from = from;
    st to = to;
    useDiff_isMissing = missing.0(useDiff);
    if useDiff_isMissing then L0(FALSE) else L0(useDiff);
  L0(useDiff_orDefault):
    st useDiff = useDiff_orDefault;
    forEx_isMissing = missing.0(forEx);
    if forEx_isMissing then L1(FALSE) else L1(forEx);
  L1(forEx_orDefault):
    st forEx = forEx_orDefault;
    nullPointers_isMissing = missing.0(nullPointers);
    if nullPointers_isMissing then L2(TRUE) else L2(nullPointers);
  L2(nullPointers_orDefault):
    st nullPointers = nullPointers_orDefault;
    Log_isMissing = missing.0(Log);
    if Log_isMissing then L3(FALSE) else L3(Log);
  L3(Log_orDefault):
    st Log = Log_orDefault;
    r = clos inner4259292012;
    st clean = r;
    r1 = clos inner4259292012;
    st clean2 = r1;
    r2 = clos inner4259292012;
    st trimPDF = r2;
    useDiff1 = ld useDiff;
    check L44() else D0();
  D0():
    deopt 9 [useDiff1];
  L44():
    useDiff2 = force? useDiff1;
    checkMissing(useDiff2);
    st useDiff0 = useDiff2;
    readLines = ldf readLines;
    check L45() else D1();
  D1():
    deopt 13 [];
  L45():
    p = prom<V +>{
      from1 = ld from;
      from2 = force? from1;
      checkMissing(from2);
      return from2;
    };
    r4 = dyn readLines(p);
    check L46() else D2();
  D2():
    deopt 15 [r4];
  L46():
    st left = r4;
    readLines1 = ldf readLines;
    check L47() else D3();
  D3():
    deopt 18 [];
  L47():
    p1 = prom<V +>{
      to1 = ld to;
      to2 = force? to1;
      checkMissing(to2);
      return to2;
    };
    r6 = dyn readLines1(p1);
    check L48() else D4();
  D4():
    deopt 20 [r6];
  L48():
    st right = r6;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L49() else L50();
  L4(r8):
    r10 = `>=`(r8, 1);
    c = `as.logical`(r10);
    if c then L53() else L5(c);
  L49():
    left = ld left;
    check L51() else D5();
  L50():
    r7 = dyn base(<sym left>);
    goto L4(r7);
  D5():
    deopt 24 [left];
  L5(c2):
    st asPDF = c2;
    useDiff3 = ld useDiff;
    check L57() else D9();
  L51():
    left1 = force? left;
    checkMissing(left1);
    length = ldf length in base;
    r9 = dyn length(left1);
    check L52() else D6();
  L53():
    startsWith = ldf startsWith;
    check L54() else D7();
  D6():
    deopt 27 [r9];
  D7():
    deopt 31 [c];
  D9():
    deopt 37 [useDiff3];
  L52():
    goto L4(r9);
  L54():
    p2 = prom<V +>{
      left2 = ld left;
      left3 = force? left2;
      checkMissing(left3);
      c3 = `is.object`(left3);
      if c3 then L1() else L2(left3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", left3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(left5):
      __ = ldf `[` in base;
      r11 = dyn __(left5, 1);
      goto L0(r11);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r13 = dyn startsWith(p2, "%PDF");
    check L55() else D8();
  L57():
    useDiff4 = force? useDiff3;
    checkMissing(useDiff4);
    c7 = `as.logical`(useDiff4);
    if c7 then L58() else L6(c7);
  D8():
    deopt 34 [c, r13];
  L6(c9):
    c16 = `as.logical`(c9);
    if c16 then L65() else L8();
  L55():
    c4 = `as.logical`(r13);
    c5 = `&&`(c, c4);
    goto L5(c5);
  L58():
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L59() else L60();
  L7(c12, r15):
    r18 = `!`(r15);
    c13 = `as.logical`(r18);
    c14 = `&&`(c12, c13);
    goto L6(c14);
  L8():
    goto L11();
  L11():
    asPDF2 = ld asPDF;
    check L72() else D16();
  L59():
    Sys_which = ldf `Sys.which`;
    check L61() else D10();
  L60():
    r14 = dyn base1(<lang Sys.which("diff")>);
    goto L7(c7, r14);
  L65():
    asPDF = ld asPDF;
    check L66() else D13();
  D10():
    deopt 42 [c7];
  D13():
    deopt 49 [asPDF];
  D16():
    deopt 63 [asPDF2];
  L61():
    r16 = dyn Sys_which("diff");
    check L62() else D11();
  L66():
    asPDF1 = force? asPDF;
    checkMissing(asPDF1);
    r19 = `!`(asPDF1);
    c17 = `as.logical`(r19);
    if c17 then L67() else L9();
  L72():
    asPDF3 = force? asPDF2;
    checkMissing(asPDF3);
    c18 = `as.logical`(asPDF3);
    if c18 then L73() else L12();
  D11():
    deopt 44 [c7, r16];
  L9():
    goto L10();
  L10():
    st useDiff = FALSE;
    goto L11();
  L12():
    clean = ldf clean;
    check L99() else D29();
  L21():
    useDiff9 = ld useDiff;
    check L112() else D40();
  L62():
    nzchar = ldf nzchar in base;
    r17 = dyn nzchar(r16);
    check L63() else D12();
  L67():
    warning = ldf warning;
    check L68() else D14();
  L73():
    useDiff5 = ld useDiff;
    check L74() else D17();
  D12():
    deopt 46 [c7, r17];
  D14():
    deopt 53 [];
  D17():
    deopt 65 [useDiff5];
  D29():
    deopt 111 [];
  D40():
    deopt 142 [useDiff9];
  L63():
    goto L7(c7, r17);
  L68():
    r20 = dyn warning("'diff' is not available so useDiff = FALSE will be used");
    check L69() else D15();
  L74():
    useDiff6 = force? useDiff5;
    checkMissing(useDiff6);
    r23 = `!`(useDiff6);
    c19 = `as.logical`(r23);
    if c19 then L75() else L13();
  L99():
    p6 = prom<V +>{
      left8 = ld left;
      left9 = force? left8;
      checkMissing(left9);
      return left9;
    };
    r43 = dyn clean(p6);
    check L100() else D30();
  L112():
    useDiff10 = force? useDiff9;
    checkMissing(useDiff10);
    r52 = `!`(useDiff10);
    c23 = `as.logical`(r52);
    if c23 then L113() else L23();
  D15():
    deopt 55 [r20];
  D30():
    deopt 113 [r43];
  L13():
    trimPDF = ldf trimPDF;
    check L94() else D25();
  L23():
    character1 = ldf character;
    check L184() else D82();
  L69():
    goto L10();
  L75():
    useDiff7 = ld useDiff0;
    check L76() else D18();
  L100():
    st left = r43;
    clean1 = ldf clean;
    check L101() else D31();
  L113():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L114() else L115();
  D18():
    deopt 68 [useDiff7];
  D25():
    deopt 101 [];
  D31():
    deopt 116 [];
  D82():
    deopt 305 [];
  L24(r54):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L118() else L119();
  L76():
    useDiff8 = force? useDiff7;
    checkMissing(useDiff8);
    r24 = `!`(useDiff8);
    c20 = `as.logical`(r24);
    if c20 then L77() else L14();
  L94():
    p4 = prom<V +>{
      left6 = ld left;
      left7 = force? left6;
      checkMissing(left7);
      return left7;
    };
    r38 = dyn trimPDF(p4);
    check L95() else D26();
  L101():
    p7 = prom<V +>{
      right2 = ld right;
      right3 = force? right2;
      checkMissing(right3);
      return right3;
    };
    r45 = dyn clean1(p7);
    check L102() else D32();
  L114():
    left14 = ld left;
    check L116() else D41();
  L115():
    r53 = dyn base4(<sym left>);
    goto L24(r53);
  L184():
    r116 = dyn character1();
    check L185() else D83();
  D26():
    deopt 103 [r38];
  D32():
    deopt 118 [r45];
  D41():
    deopt 147 [left14];
  D83():
    deopt 306 [r116];
  L14():
    goto L15("comparing PDF files requires 'diff'");
  L15(r25):
    st out = r25;
    Log1 = ld Log;
    check L79() else D19();
  L25(r59, r60):
    r62 = `==`(r59, r60);
    c24 = `as.logical`(r62);
    if c24 then L122() else L26();
  L77():
    goto L15("comparing PDF files requires useDiff = TRUE");
  L95():
    st left = r38;
    trimPDF1 = ldf trimPDF;
    check L96() else D27();
  L102():
    st right = r45;
    forEx1 = ld forEx;
    check L103() else D33();
  L116():
    left15 = force? left14;
    checkMissing(left15);
    length1 = ldf length in base;
    r55 = dyn length1(left15);
    check L117() else D42();
  L118():
    right6 = ld right;
    check L120() else D43();
  L119():
    r58 = dyn base5(<sym right>);
    goto L25(r54, r58);
  L185():
    st out = r116;
    tempfile = ldf tempfile;
    check L186() else D84();
  D19():
    deopt 76 [Log1];
  D27():
    deopt 106 [];
  D33():
    deopt 120 [forEx1];
  D42():
    deopt 150 [r55];
  D43():
    deopt 152 [r54, right6];
  D84():
    deopt 309 [];
  L26():
    st out = "files differ in number of lines";
    Log7 = ld Log;
    check L171() else D76();
  L79():
    Log2 = force? Log1;
    checkMissing(Log2);
    c21 = `as.logical`(Log2);
    if c21 then L80() else L16();
  L96():
    p5 = prom<V +>{
      right = ld right;
      right1 = force? right;
      checkMissing(right1);
      return right1;
    };
    r40 = dyn trimPDF1(p5);
    check L97() else D28();
  L103():
    forEx2 = force? forEx1;
    checkMissing(forEx2);
    c22 = `as.logical`(forEx2);
    if c22 then L104() else L22();
  L117():
    goto L24(r55);
  L120():
    right7 = force? right6;
    checkMissing(right7);
    length2 = ldf length in base;
    r61 = dyn length2(right7);
    check L121() else D44();
  L122():
    gsub = ldf gsub;
    check L123() else D45();
  L186():
    r117 = dyn tempfile("Rdiffa");
    check L187() else D85();
  D28():
    deopt 108 [r40];
  D44():
    deopt 155 [r54, r61];
  D45():
    deopt 158 [];
  D76():
    deopt 284 [Log7];
  D85():
    deopt 311 [r117];
  L16():
    message = ldf message;
    check L87() else D22();
  L22():
    goto L21();
  L80():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L81() else L82();
  L97():
    st right = r40;
    goto L21();
  L104():
    clean2 = ldf clean2;
    check L105() else D34();
  L121():
    goto L25(r54, r61);
  L123():
    p11 = prom<V +>{
      left16 = ld left;
      left17 = force? left16;
      checkMissing(left17);
      return left17;
    };
    r64 = dyn gsub[, , , useBytes]("[[:space:]]*$", "", p11, TRUE);
    check L124() else D46();
  L171():
    Log8 = force? Log7;
    checkMissing(Log8);
    c33 = `as.logical`(Log8);
    if c33 then L172() else L38();
  L187():
    st a = r117;
    writeLines = ldf writeLines;
    check L188() else D86();
  D22():
    deopt 89 [];
  D34():
    deopt 123 [];
  D46():
    deopt 164 [r64];
  D86():
    deopt 314 [];
  L17(r27):
    popenv;
    return r27;
  L38():
    message1 = ldf message;
    check L178() else D79();
  L81():
    out = ld out;
    check L83() else D20();
  L82():
    r26 = dyn base2[status, out](0, <sym out>);
    goto L17(r26);
  L87():
    p3 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    r32 = dyn message(p3);
    check L88() else D23();
  L105():
    p8 = prom<V +>{
      left10 = ld left;
      left11 = force? left10;
      checkMissing(left11);
      return left11;
    };
    r47 = dyn clean2(p8);
    check L106() else D35();
  L124():
    st bleft = r64;
    gsub1 = ldf gsub;
    check L125() else D47();
  L172():
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L173() else L174();
  L188():
    p26 = prom<V +>{
      left26 = ld left;
      left27 = force? left26;
      checkMissing(left27);
      return left27;
    };
    p27 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    r120 = dyn writeLines(p26, p27);
    check L189() else D87();
  D20():
    deopt 82 [out];
  D23():
    deopt 91 [r32];
  D35():
    deopt 125 [r47];
  D47():
    deopt 167 [];
  D79():
    deopt 296 [];
  D87():
    deopt 317 [r120];
  L39(r109):
    popenv;
    return r109;
  L83():
    out1 = force? out;
    checkMissing(out1);
    list = ldf list in base;
    r28 = dyn list(0, out1);
    check L84() else D21();
  L88():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L89() else L90();
  L106():
    st left = r47;
    filtergrep = ldf filtergrep;
    check L107() else D36();
  L125():
    p12 = prom<V +>{
      right8 = ld right;
      right9 = force? right8;
      checkMissing(right9);
      return right9;
    };
    r66 = dyn gsub1[, , , useBytes]("[[:space:]]*$", "", p12, TRUE);
    check L126() else D48();
  L173():
    out6 = ld out;
    check L175() else D77();
  L174():
    r108 = dyn base10[status, out](2, <sym out>);
    goto L39(r108);
  L178():
    p25 = prom<V +>{
      out8 = ld out;
      out9 = force? out8;
      checkMissing(out9);
      return out9;
    };
    r112 = dyn message1(p25);
    check L179() else D80();
  L189():
    tempfile1 = ldf tempfile;
    check L190() else D88();
  D21():
    deopt 86 [r28];
  D36():
    deopt 128 [];
  D48():
    deopt 173 [r66];
  D77():
    deopt 290 [out6];
  D80():
    deopt 298 [r112];
  D88():
    deopt 319 [];
  L19(r34):
    popenv;
    return r34;
  L84():
    goto L17(r28);
  L89():
    invisible = ldf invisible in base;
    r35 = dyn invisible(0);
    check L91() else D24();
  L90():
    r33 = dyn base3(0);
    goto L19(r33);
  L107():
    p9 = prom<V +>{
      left12 = ld left;
      left13 = force? left12;
      checkMissing(left13);
      return left13;
    };
    r49 = dyn filtergrep[, , useBytes]("[.](format_|)ptime", p9, TRUE);
    check L108() else D37();
  L126():
    st bright = r66;
    gsub2 = ldf gsub;
    check L127() else D49();
  L175():
    out7 = force? out6;
    checkMissing(out7);
    list3 = ldf list in base;
    r110 = dyn list3(2, out7);
    check L176() else D78();
  L179():
    sym11 = ldf invisible;
    base11 = ldf invisible in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L180() else L181();
  L190():
    r121 = dyn tempfile1("Rdiffb");
    check L191() else D89();
  D24():
    deopt 96 [r35];
  D37():
    deopt 133 [r49];
  D49():
    deopt 176 [];
  D78():
    deopt 294 [r110];
  D89():
    deopt 321 [r121];
  L40(r114):
    popenv;
    return r114;
  L91():
    goto L19(r35);
  L108():
    st left = r49;
    clean3 = ldf clean2;
    check L109() else D38();
  L127():
    p13 = prom<V +>{
      bleft = ld bleft;
      bleft1 = force? bleft;
      checkMissing(bleft1);
      return bleft1;
    };
    r68 = dyn gsub2[, , , useBytes]("[[:space:]]+", " ", p13, TRUE);
    check L128() else D50();
  L176():
    goto L39(r110);
  L180():
    invisible2 = ldf invisible in base;
    r115 = dyn invisible2(2);
    check L182() else D81();
  L181():
    r113 = dyn base11(2);
    goto L40(r113);
  L191():
    st b = r121;
    writeLines1 = ldf writeLines;
    check L192() else D90();
  D38():
    deopt 136 [];
  D50():
    deopt 182 [r68];
  D81():
    deopt 303 [r115];
  D90():
    deopt 324 [];
  L109():
    p10 = prom<V +>{
      right4 = ld right;
      right5 = force? right4;
      checkMissing(right5);
      return right5;
    };
    r51 = dyn clean3(p10);
    check L110() else D39();
  L128():
    st bleft = r68;
    gsub3 = ldf gsub;
    check L129() else D51();
  L182():
    goto L40(r115);
  L192():
    p28 = prom<V +>{
      right18 = ld right;
      right19 = force? right18;
      checkMissing(right19);
      return right19;
    };
    p29 = prom<V +>{
      b = ld b;
      b1 = force? b;
      checkMissing(b1);
      return b1;
    };
    r124 = dyn writeLines1(p28, p29);
    check L193() else D91();
  D39():
    deopt 138 [r51];
  D51():
    deopt 185 [];
  D91():
    deopt 327 [r124];
  L110():
    st right = r51;
    goto L21();
  L129():
    p14 = prom<V +>{
      bright = ld bright;
      bright1 = force? bright;
      checkMissing(bright1);
      return bright1;
    };
    r70 = dyn gsub3[, , , useBytes]("[[:space:]]+", " ", p14, TRUE);
    check L130() else D52();
  L193():
    Log9 = ld Log;
    check L194() else D92();
  D52():
    deopt 191 [r70];
  D92():
    deopt 328 [Log9];
  L130():
    st bright = r70;
    sym6 = ldf all;
    base6 = ldf all in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L131() else L132();
  L194():
    Log10 = force? Log9;
    checkMissing(Log10);
    c34 = `as.logical`(Log10);
    if c34 then L195() else L41();
  L27(r72):
    c25 = `as.logical`(r72);
    if c25 then L136() else L28();
  L41():
    system3 = ldf system;
    check L211() else D103();
  L131():
    bleft2 = ld bleft;
    check L133() else D53();
  L132():
    r71 = dyn base6(<lang `==`(bleft, bright)>);
    goto L27(r71);
  L195():
    tempfile2 = ldf tempfile;
    check L196() else D93();
  D53():
    deopt 195 [bleft2];
  D93():
    deopt 331 [];
  D103():
    deopt 363 [];
  L28():
    cat = ldf cat;
    check L147() else D60();
  L133():
    bleft3 = force? bleft2;
    checkMissing(bleft3);
    bright2 = ld bright;
    check L134() else D54();
  L136():
    Log3 = ld Log;
    check L137() else D56();
  L196():
    r125 = dyn tempfile2();
    check L197() else D94();
  L211():
    p40 = prom<V +>{
      paste1 = ldf paste;
      p37 = prom<V +>{
        shQuote2 = ldf shQuote;
        p36 = prom<V +>{
          a4 = ld a;
          a5 = force? a4;
          checkMissing(a5);
          return a5;
        };
        r146 = dyn shQuote2(p36);
        return r146;
      };
      p39 = prom<V +>{
        shQuote3 = ldf shQuote;
        p38 = prom<V +>{
          b4 = ld b;
          b5 = force? b4;
          checkMissing(b5);
          return b5;
        };
        r149 = dyn shQuote3(p38);
        return r149;
      };
      r151 = dyn paste1("diff -bw", p37, p39);
      return r151;
    };
    r153 = dyn system3(p40);
    check L212() else D104();
  D54():
    deopt 196 [bleft3, bright2];
  D56():
    deopt 201 [Log3];
  D60():
    deopt 219 [];
  D94():
    deopt 332 [r125];
  D104():
    deopt 365 [r153];
  L134():
    bright3 = force? bright2;
    checkMissing(bright3);
    r73 = `==`(bleft3, bright3);
    all = ldf all in base;
    r74 = dyn all(r73);
    check L135() else D55();
  L137():
    Log4 = force? Log3;
    checkMissing(Log4);
    c26 = `as.logical`(Log4);
    if c26 then L138() else L29();
  L147():
    r82 = dyn cat("\n");
    check L148() else D61();
  L197():
    st tf = r125;
    system2 = ldf system2;
    check L198() else D95();
  L212():
    popenv;
    return r153;
  D55():
    deopt 200 [r74];
  D61():
    deopt 221 [r82];
  D95():
    deopt 335 [];
  L29():
    goto L31(0);
  L31(r79):
    popenv;
    return r79;
  L135():
    goto L27(r74);
  L138():
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L139() else L140();
  L148():
    bleft4 = ld bleft;
    check L149() else D62();
  L198():
    p32 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r127):
      return r127;
    L1():
      shQuote = ldf shQuote;
      p30 = prom<V +>{
        a2 = ld a;
        a3 = force? a2;
        checkMissing(a3);
        return a3;
      };
      r129 = dyn shQuote(p30);
      shQuote1 = ldf shQuote;
      p31 = prom<V +>{
        b2 = ld b;
        b3 = force? b2;
        checkMissing(b3);
        return b3;
      };
      r131 = dyn shQuote1(p31);
      c35 = ldf c in base;
      r132 = dyn c35("-bw", r129, r131);
      goto L0(r132);
    L2():
      r126 = dyn base12("-bw", <lang shQuote(a)>, <lang shQuote(b)>);
      goto L0(r126);
    };
    p33 = prom<V +>{
      tf = ld tf;
      tf1 = force? tf;
      checkMissing(tf1);
      return tf1;
    };
    p34 = prom<V +>{
      tf2 = ld tf;
      tf3 = force? tf2;
      checkMissing(tf3);
      return tf3;
    };
    r136 = dyn system2[, , stdout, stderr]("diff", p32, p33, p34);
    check L199() else D96();
  D62():
    deopt 222 [bleft4];
  D96():
    deopt 342 [r136];
  L30(r76):
    goto L31(r76);
  L139():
    character = ldf character;
    check L141() else D57();
  L140():
    r75 = dyn base7[status, out](0, <lang character()>);
    goto L30(r75);
  L149():
    bleft5 = force? bleft4;
    checkMissing(bleft5);
    bright4 = ld bright;
    check L150() else D63();
  L199():
    st status = r136;
    sym13 = ldf list;
    base13 = ldf list in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L200() else L201();
  D57():
    deopt 208 [];
  D63():
    deopt 223 [bleft5, bright4];
  L42(r138):
    popenv;
    return r138;
  L141():
    r77 = dyn character();
    check L142() else D58();
  L150():
    bright5 = force? bright4;
    checkMissing(bright5);
    r83 = `!=`(bleft5, bright5);
    st diff = r83;
    which = ldf which;
    check L151() else D64();
  L200():
    status = ld status;
    check L202() else D97();
  L201():
    r137 = dyn base13[status, out](<sym status>, <lang c(out, readLines(tf))>);
    goto L42(r137);
  D58():
    deopt 209 [r77];
  D64():
    deopt 228 [];
  D97():
    deopt 346 [status];
  L142():
    list1 = ldf list in base;
    r78 = dyn list1(0, r77);
    check L143() else D59();
  L151():
    p15 = prom<V +>{
      diff = ld diff;
      diff1 = force? diff;
      checkMissing(diff1);
      return diff1;
    };
    r85 = dyn which(p15);
    check L152() else D65();
  L202():
    status1 = force? status;
    checkMissing(status1);
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L203() else L204();
  D59():
    deopt 212 [r78];
  D65():
    deopt 230 [r85];
  L43(r140):
    list4 = ldf list in base;
    r144 = dyn list4(status1, r140);
    check L209() else D102();
  L143():
    goto L30(r78);
  L152():
    s = toForSeq(r85);
    l = length(s);
    i = 0;
    goto L33(i);
  L203():
    out10 = ld out;
    check L205() else D98();
  L204():
    r139 = dyn base14(<sym out>, <lang readLines(tf)>);
    goto L43(r139);
  D98():
    deopt 351 [out10];
  D102():
    deopt 361 [r144];
  L33(i1):
    i2 = `+`.1(i1, 1);
    c27 = `<`.1(l, i2);
    if c27 then L153() else L34();
  L205():
    out11 = force? out10;
    checkMissing(out11);
    readLines2 = ldf readLines;
    check L206() else D99();
  L209():
    goto L42(r144);
  D99():
    deopt 354 [];
  L34():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    cat1 = ldf cat;
    check L154() else D66();
  L153():
    Log5 = ld Log;
    check L156() else D68();
  L206():
    p35 = prom<V +>{
      tf4 = ld tf;
      tf5 = force? tf4;
      checkMissing(tf5);
      return tf5;
    };
    r142 = dyn readLines2(p35);
    check L207() else D100();
  D66():
    deopt 232 [i2];
  D68():
    deopt 248 [Log5];
  D100():
    deopt 356 [r142];
  L154():
    p16 = prom<V +>{
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      return i6;
    };
    p17 = prom<V +>{
      i7 = ld i;
      i8 = force? i7;
      checkMissing(i8);
      return i8;
    };
    p18 = prom<V +>{
      left18 = ld left;
      left19 = force? left18;
      checkMissing(left19);
      c28 = `is.object`(left19);
      if c28 then L1() else L2(left19);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", left19);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(left21):
      i9 = ld i;
      i10 = force? i9;
      __1 = ldf `[` in base;
      r88 = dyn __1(left21, i10);
      goto L0(r88);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p19 = prom<V +>{
      right10 = ld right;
      right11 = force? right10;
      checkMissing(right11);
      c29 = `is.object`(right11);
      if c29 then L1() else L2(right11);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", right11);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(right13):
      i11 = ld i;
      i12 = force? i11;
      __2 = ldf `[` in base;
      r90 = dyn __2(right13, i12);
      goto L0(r90);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r92 = dyn cat1[, , , , , , , , , sep](p16, "c", p17, "\n< ", p18, "\n", "---\n> ", p19, "\n", "");
    check L155() else D67();
  L156():
    Log6 = force? Log5;
    checkMissing(Log6);
    c30 = `as.logical`(Log6);
    if c30 then L157() else L35();
  L207():
    c36 = ldf c in base;
    r143 = dyn c36(out11, r142);
    check L208() else D101();
  D67():
    deopt 244 [i2, r92];
  D101():
    deopt 358 [r143];
  L35():
    sym9 = ldf invisible;
    base9 = ldf invisible in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L167() else L168();
  L155():
    goto L33(i2);
  L157():
    which1 = ldf which;
    check L158() else D69();
  L208():
    goto L43(r143);
  D69():
    deopt 251 [];
  L37(r106):
    popenv;
    return r106;
  L158():
    p20 = prom<V +>{
      diff2 = ld diff;
      diff3 = force? diff2;
      checkMissing(diff3);
      return diff3;
    };
    r94 = dyn which1(p20);
    check L159() else D70();
  L167():
    invisible1 = ldf invisible in base;
    r107 = dyn invisible1(1);
    check L169() else D75();
  L168():
    r105 = dyn base9(1);
    goto L37(r105);
  D70():
    deopt 253 [r94];
  D75():
    deopt 280 [r107];
  L159():
    st i = r94;
    paste0 = ldf paste0;
    check L160() else D71();
  L169():
    goto L37(r107);
  D71():
    deopt 256 [];
  L160():
    p21 = prom<V +>{
      i13 = ld i;
      i14 = force? i13;
      checkMissing(i14);
      return i14;
    };
    p22 = prom<V +>{
      i15 = ld i;
      i16 = force? i15;
      checkMissing(i16);
      return i16;
    };
    p23 = prom<V +>{
      left22 = ld left;
      left23 = force? left22;
      checkMissing(left23);
      c31 = `is.object`(left23);
      if c31 then L1() else L2(left23);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", left23);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(left25):
      i17 = ld i;
      i18 = force? i17;
      __3 = ldf `[` in base;
      r97 = dyn __3(left25, i18);
      goto L0(r97);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p24 = prom<V +>{
      right14 = ld right;
      right15 = force? right14;
      checkMissing(right15);
      c32 = `is.object`(right15);
      if c32 then L1() else L2(right15);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", right15);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(right17):
      i19 = ld i;
      i20 = force? i19;
      __4 = ldf `[` in base;
      r99 = dyn __4(right17, i20);
      goto L0(r99);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r101 = dyn paste0(p21, "c", p22, "\n< ", p23, "\n", "---\n> ", p24);
    check L161() else D72();
  D72():
    deopt 265 [r101];
  L161():
    st out = r101;
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L162() else L163();
  L36(r103):
    popenv;
    return r103;
  L162():
    out4 = ld out;
    check L164() else D73();
  L163():
    r102 = dyn base8[status, out](1, <sym out>);
    goto L36(r102);
  D73():
    deopt 271 [out4];
  L164():
    out5 = force? out4;
    checkMissing(out5);
    list2 = ldf list in base;
    r104 = dyn list2(1, out5);
    check L165() else D74();
  D74():
    deopt 275 [r104];
  L165():
    goto L36(r104);
  }
}
fun inner4259292012(txt) {
  (reg txt:*) -+> V { var txt:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg txt1:*, reg txt2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg txt3:*, reg txt4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg grep:cls, reg txt5:*, reg txt6:V, reg p:p(V +), reg r9:V, reg length1:cls, reg r10:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg c6:L, reg r12:V, reg grep1:cls, reg txt7:*, reg txt8:V, reg p1:p(V +), reg r14:V, reg length2:cls, reg r15:V, reg c7:L, reg c8:V, reg c10:L, reg txt9:*, reg txt10:V, reg c11:L, reg txt12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg top:*, reg top1:V, reg c12:L, reg txt14:V, reg top3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg txt16:V, reg dx3:V, reg __:cls, reg r16:V, reg bot:*, reg bot1:V, reg c13:L, reg txt18:V, reg dx5:V, reg bot3:V, reg dr4:V, reg dc2:L, reg dx7:V, reg txt20:V, reg dx8:V, reg dx9:V, reg __1:cls, reg r17:V, reg r18:V, reg r19:V, reg __2:cls, reg r20:V, reg grep2:cls, reg txt21:*, reg txt22:V, reg p2:p(V +), reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg ll:*, reg ll1:V, reg length3:cls, reg r25:V, reg c14:L, reg txt23:*, reg txt24:V, reg c15:L, reg txt26:V, reg dr6:V, reg dc3:L, reg dx11:V, reg dx12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg txt29:V, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg txt32:V, reg r29:V, reg ll2:*, reg ll3:V, reg max:cls, reg r30:V, reg r31:I, reg r32:V, reg __3:cls, reg r33:V, reg grep3:cls, reg txt33:*, reg txt34:V, reg p3:p(V +), reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg ll4:*, reg ll5:V, reg length4:cls, reg r38:V, reg c16:L, reg txt35:*, reg txt36:V, reg c17:L, reg txt38:V, reg dr8:V, reg dc4:L, reg dx14:V, reg dx15:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg txt41:V, reg r40:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg txt44:V, reg r42:V, reg ll6:*, reg ll7:V, reg max1:cls, reg r43:V, reg r44:V, reg r45:I, reg __4:cls, reg r46:V, reg forEx:*, reg forEx1:V, reg c18:L, reg grep4:cls, reg txt45:*, reg txt46:V, reg p4:p(V +), reg r48:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg ll8:*, reg ll9:V, reg length5:cls, reg r51:V, reg c19:L, reg txt47:*, reg txt48:V, reg c20:L, reg txt50:V, reg dr10:V, reg dc5:L, reg dx17:V, reg dx18:V, reg ll10:*, reg ll11:V, reg r52:V, reg __5:cls, reg r53:V, reg dx19:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg txt51:*, reg txt52:V, reg length6:cls, reg r56:V, reg nl:*, reg nl1:V, reg r57:V, reg c21:L, reg c23:V, reg startsWith:cls, reg txt53:*, reg txt54:V, reg c24:L, reg txt56:V, reg dr12:V, reg dc6:L, reg dx21:V, reg dx22:V, reg nl2:*, reg nl3:V, reg r58:V, reg __6:cls, reg r59:V, reg p5:p(V +), reg r61:V, reg c25:L, reg c26:V, reg c28:L, reg txt57:*, reg txt58:V, reg c29:L, reg txt60:V, reg dr14:V, reg dc7:L, reg dx23:V, reg dx24:V, reg nl4:*, reg nl5:V, reg r62:V, reg r63:V, reg __7:cls, reg r64:V, reg txt61:*, reg txt62:V, reg c30:L, reg txt64:V, reg dr16:V, reg dc8:L, reg dx26:V, reg dx27:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r65:V, reg txt67:V, reg r66:V, reg txt68:*, reg txt69:V, reg r67:V, reg cumsum:cls, reg r68:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r71:V, reg txt72:V, reg r72:V, reg r73:V, reg txt73:*, reg txt74:V, reg r74:V, reg cumsum1:cls, reg r75:V, reg r76:V, reg __8:cls, reg r77:V, reg nullPointers:*, reg nullPointers1:V, reg c31:L, reg gsub:cls, reg txt75:*, reg txt76:V, reg p6:p(V +), reg r79:V, reg sub:cls, reg txt77:*, reg txt78:V, reg p7:p(V +), reg r81:V, reg _canonicalize_quotes:cls, reg txt79:*, reg txt80:V, reg p8:p(V +), reg r84:V, reg _Platform:*, reg _Platform1:V, reg c32:L, reg _Platform3:V, reg dr18:V, reg dc9:L, reg dx28:V, reg dx29:V, reg r85:V, reg r86:V, reg c33:L, reg gsub1:cls, reg paste0:cls, reg rawToChar:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r87:V, reg r88:V, reg as_raw:cls, reg r89:V, reg p9:p(V +), reg r91:V, reg p10:p(V +), reg rawToChar1:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r93:V, reg r94:V, reg as_raw1:cls, reg r95:V, reg p11:p(V +), reg r97:V, reg p12:p(V +), reg r99:V, reg p13:p(V +), reg txt81:*, reg txt82:V, reg p14:p(V +), reg r102:V, reg gsub2:cls, reg paste1:cls, reg rawToChar2:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r103:V, reg r104:V, reg as_raw2:cls, reg r105:V, reg p15:p(V +), reg r107:V, reg p16:p(V +), reg rawToChar3:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r109:V, reg r110:V, reg as_raw3:cls, reg r111:V, reg p17:p(V +), reg r113:V, reg p18:p(V +), reg r115:V, reg p19:p(V +), reg txt83:*, reg txt84:V, reg p20:p(V +), reg r118:V, reg txt85:*, reg txt86:V, reg c34:L, reg txt88:V, reg dr20:V, reg dc10:L, reg dx30:V, reg dx31:V, reg grepl:cls, reg txt89:*, reg txt90:V, reg p21:p(V +), reg r121:V, reg r122:V, reg __9:cls, reg r123:V, reg txt91:*, reg txt92:V, reg c35:L, reg txt94:V, reg dr22:V, reg dc11:L, reg dx32:V, reg dx33:V, reg grepl1:cls, reg pat:*, reg pat1:V, reg p22:p(V +), reg txt95:*, reg txt96:V, reg p23:p(V +), reg r126:V, reg r127:V, reg __10:cls, reg r128:V |
    mkenv;
    st txt = txt;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L43() else L44();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L47() else L1();
  L43():
    txt1 = ld txt;
    check L45() else D0();
  L44():
    r = dyn base(<sym txt>);
    goto L0(r);
  D0():
    deopt 2 [txt1];
  L1():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L51() else L52();
  L45():
    txt2 = force? txt1;
    checkMissing(txt2);
    length = ldf length in base;
    r2 = dyn length(txt2);
    check L46() else D1();
  L47():
    txt3 = ld txt;
    check L48() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [txt3];
  L3(r7):
    c1 = `as.logical`(r7);
    if c1 then L56() else L4(c1);
  L46():
    goto L0(r2);
  L48():
    txt4 = force? txt3;
    checkMissing(txt4);
    popenv;
    return txt4;
  L51():
    grep = ldf grep;
    check L53() else D3();
  L52():
    r6 = dyn base1(<lang `<-`(top, grep("^(R version|R : Copyright|R Under development)", txt, perl=TRUE, useBytes=TRUE))>);
    goto L3(r6);
  D3():
    deopt 15 [];
  L4(c3):
    c10 = `as.logical`(c3);
    if c10 then L63() else L6();
  L53():
    p = prom<V +>{
      txt5 = ld txt;
      txt6 = force? txt5;
      checkMissing(txt6);
      return txt6;
    };
    r9 = dyn grep[, , perl, useBytes]("^(R version|R : Copyright|R Under development)", p, TRUE, TRUE);
    check L54() else D4();
  L56():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L57() else L58();
  D4():
    deopt 22 [r9];
  L5(c6, r12):
    c7 = `as.logical`(r12);
    c8 = `&&`(c6, c7);
    goto L4(c8);
  L6():
    goto L10();
  L10():
    grep2 = ldf grep;
    check L77() else D12();
  L54():
    st top = r9;
    length1 = ldf length in base;
    r10 = dyn length1(r9);
    check L55() else D5();
  L57():
    grep1 = ldf grep;
    check L59() else D6();
  L58():
    r11 = dyn base2(<lang `<-`(bot, grep("quit R.$", txt, perl=TRUE, useBytes=TRUE))>);
    goto L5(c1, r11);
  L63():
    txt9 = ld txt;
    check L64() else D9();
  D5():
    deopt 25 [r10];
  D6():
    deopt 29 [c1];
  D9():
    deopt 41 [txt9];
  D12():
    deopt 59 [];
  L55():
    goto L3(r10);
  L59():
    p1 = prom<V +>{
      txt7 = ld txt;
      txt8 = force? txt7;
      checkMissing(txt8);
      return txt8;
    };
    r14 = dyn grep1[, , perl, useBytes]("quit R.$", p1, TRUE, TRUE);
    check L60() else D7();
  L64():
    txt10 = force? txt9;
    checkMissing(txt10);
    c11 = `is.object`(txt10);
    if c11 then L65() else L66(txt10);
  L77():
    p2 = prom<V +>{
      txt21 = ld txt;
      txt22 = force? txt21;
      checkMissing(txt22);
      return txt22;
    };
    r22 = dyn grep2[, , fixed, useBytes]("</HEADER>", p2, TRUE, TRUE);
    check L78() else D13();
  D7():
    deopt 36 [c1, r14];
  D13():
    deopt 66 [r22];
  L7(dx1):
    st txt = dx1;
    goto L10();
  L60():
    st bot = r14;
    length2 = ldf length in base;
    r15 = dyn length2(r14);
    check L61() else D8();
  L65():
    dr = tryDispatchBuiltin.1("[", txt10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L67() else L66(dr);
  L66(txt12):
    top = ld top;
    check L68() else D10();
  L78():
    st ll = r22;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L79() else L80();
  D8():
    deopt 39 [c1, r15];
  D10():
    deopt 43 [txt12, top];
  L11(r24):
    c14 = `as.logical`(r24);
    if c14 then L83() else L12();
  L61():
    goto L5(c1, r15);
  L67():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L68():
    top1 = force? top;
    checkMissing(top1);
    c12 = `is.object`(top1);
    if c12 then L69() else L70(txt12, top1);
  L79():
    ll = ld ll;
    check L81() else D14();
  L80():
    r23 = dyn base3(<sym ll>);
    goto L11(r23);
  D14():
    deopt 70 [ll];
  L8(txt16, dx3):
    bot = ld bot;
    check L72() else D11();
  L12():
    goto L16();
  L16():
    grep3 = ldf grep;
    check L95() else D19();
  L69():
    dr2 = tryDispatchBuiltin.1("[", top1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L71() else L70(txt12, dr2);
  L70(txt14, top3):
    __ = ldf `[` in base;
    r16 = dyn __(top3, 1);
    goto L8(txt14, r16);
  L81():
    ll1 = force? ll;
    checkMissing(ll1);
    length3 = ldf length in base;
    r25 = dyn length3(ll1);
    check L82() else D15();
  L83():
    txt23 = ld txt;
    check L84() else D16();
  D11():
    deopt 47 [txt16, dx3, bot];
  D15():
    deopt 73 [r25];
  D16():
    deopt 74 [txt23];
  D19():
    deopt 90 [];
  L71():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(txt12, dx2);
  L72():
    bot1 = force? bot;
    checkMissing(bot1);
    c13 = `is.object`(bot1);
    if c13 then L73() else L74(txt16, dx3, bot1);
  L82():
    goto L11(r25);
  L84():
    txt24 = force? txt23;
    checkMissing(txt24);
    c15 = `is.object`(txt24);
    if c15 then L85() else L86(txt24);
  L95():
    p3 = prom<V +>{
      txt33 = ld txt;
      txt34 = force? txt33;
      checkMissing(txt34);
      return txt34;
    };
    r35 = dyn grep3[, , fixed, useBytes]("<FOOTER>", p3, TRUE, TRUE);
    check L96() else D20();
  D20():
    deopt 97 [r35];
  L9(txt20, dx8, dx9):
    r18 = `:`(dx8, dx9);
    r19 = `-`(<missing>, r18);
    __2 = ldf `[` in base;
    r20 = dyn __2(txt20, r19);
    goto L7(r20);
  L13(dx12):
    st txt = dx12;
    goto L16();
  L73():
    dr4 = tryDispatchBuiltin.1("[", bot1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L75() else L74(txt16, dx3, dr4);
  L74(txt18, dx5, bot3):
    __1 = ldf `[` in base;
    r17 = dyn __1(bot3, 1);
    goto L9(txt18, dx5, r17);
  L85():
    dr6 = tryDispatchBuiltin.1("[", txt24);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L87() else L86(dr6);
  L86(txt26):
    sym4 = ldf seq_len;
    base4 = ldf seq_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L88() else L89();
  L96():
    st ll = r35;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L97() else L98();
  L14(txt29, r27):
    r32 = `-`(<missing>, r27);
    __3 = ldf `[` in base;
    r33 = dyn __3(txt29, r32);
    goto L13(r33);
  L17(r37):
    c16 = `as.logical`(r37);
    if c16 then L101() else L18();
  L75():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L9(txt16, dx3, dx7);
  L87():
    dx11 = getTryDispatchBuiltinValue(dr6);
    goto L13(dx11);
  L88():
    sym5 = ldf max;
    base5 = ldf max in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L90() else L91();
  L89():
    r26 = dyn base4(<lang max(ll)>);
    goto L14(txt26, r26);
  L97():
    ll4 = ld ll;
    check L99() else D21();
  L98():
    r36 = dyn base6(<sym ll>);
    goto L17(r36);
  D21():
    deopt 101 [ll4];
  L15(txt32, r29):
    r31 = seq_len(r29);
    goto L14(txt32, r31);
  L18():
    goto L22();
  L22():
    forEx = ld forEx;
    check L113() else D26();
  L90():
    ll2 = ld ll;
    check L92() else D17();
  L91():
    r28 = dyn base5(<sym ll>);
    goto L15(txt26, r28);
  L99():
    ll5 = force? ll4;
    checkMissing(ll5);
    length4 = ldf length in base;
    r38 = dyn length4(ll5);
    check L100() else D22();
  L101():
    txt35 = ld txt;
    check L102() else D23();
  D17():
    deopt 79 [txt26, ll2];
  D22():
    deopt 104 [r38];
  D23():
    deopt 105 [txt35];
  D26():
    deopt 121 [forEx];
  L92():
    ll3 = force? ll2;
    checkMissing(ll3);
    max = ldf max in base;
    r30 = dyn max(ll3);
    check L93() else D18();
  L100():
    goto L17(r38);
  L102():
    txt36 = force? txt35;
    checkMissing(txt36);
    c17 = `is.object`(txt36);
    if c17 then L103() else L104(txt36);
  L113():
    forEx1 = force? forEx;
    checkMissing(forEx1);
    c18 = `as.logical`(forEx1);
    if c18 then L114() else L23();
  D18():
    deopt 82 [txt26, r30];
  L19(dx15):
    st txt = dx15;
    goto L22();
  L23():
    goto L28();
  L28():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L129() else L130();
  L93():
    goto L15(txt26, r30);
  L103():
    dr8 = tryDispatchBuiltin.1("[", txt36);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L105() else L104(dr8);
  L104(txt38):
    sym7 = ldf seq_len;
    base7 = ldf seq_len in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L106() else L107();
  L114():
    grep4 = ldf grep;
    check L115() else D27();
  D27():
    deopt 124 [];
  L20(txt41, r40):
    __4 = ldf `[` in base;
    r46 = dyn __4(txt41, r40);
    goto L19(r46);
  L29(r55):
    st nl = r55;
    nl = ld nl;
    check L133() else D35();
  L105():
    dx14 = getTryDispatchBuiltinValue(dr8);
    goto L19(dx14);
  L106():
    sym8 = ldf max;
    base8 = ldf max in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L108() else L109();
  L107():
    r39 = dyn base7(<lang `-`(max(ll), 1)>);
    goto L20(txt38, r39);
  L115():
    p4 = prom<V +>{
      txt45 = ld txt;
      txt46 = force? txt45;
      checkMissing(txt46);
      return txt46;
    };
    r48 = dyn grep4[, , fixed, useBytes]("\".old_wd\"", p4, TRUE, TRUE);
    check L116() else D28();
  L129():
    txt51 = ld txt;
    check L131() else D33();
  L130():
    r54 = dyn base10(<sym txt>);
    goto L29(r54);
  D28():
    deopt 131 [r48];
  D33():
    deopt 152 [txt51];
  D35():
    deopt 157 [nl];
  L21(txt44, r42):
    r44 = `-`(r42, 1);
    r45 = seq_len(r44);
    goto L20(txt44, r45);
  L108():
    ll6 = ld ll;
    check L110() else D24();
  L109():
    r41 = dyn base8(<sym ll>);
    goto L21(txt38, r41);
  L116():
    st ll = r48;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L117() else L118();
  L131():
    txt52 = force? txt51;
    checkMissing(txt52);
    length6 = ldf length in base;
    r56 = dyn length6(txt52);
    check L132() else D34();
  L133():
    nl1 = force? nl;
    checkMissing(nl1);
    r57 = `>`(nl1, 3);
    c21 = `as.logical`(r57);
    if c21 then L134() else L30(c21);
  D24():
    deopt 110 [txt38, ll6];
  D34():
    deopt 155 [r56];
  L24(r50):
    c19 = `as.logical`(r50);
    if c19 then L121() else L25();
  L30(c23):
    c28 = `as.logical`(c23);
    if c28 then L138() else L31();
  L110():
    ll7 = force? ll6;
    checkMissing(ll7);
    max1 = ldf max in base;
    r43 = dyn max1(ll7);
    check L111() else D25();
  L117():
    ll8 = ld ll;
    check L119() else D29();
  L118():
    r49 = dyn base9(<sym ll>);
    goto L24(r49);
  L132():
    goto L29(r56);
  L134():
    startsWith = ldf startsWith;
    check L135() else D36();
  D25():
    deopt 113 [txt38, r43];
  D29():
    deopt 135 [ll8];
  D36():
    deopt 162 [c21];
  L25():
    goto L27(NULL);
  L27(dx19):
    goto L28();
  L31():
    goto L33();
  L33():
    txt61 = ld txt;
    check L145() else D40();
  L111():
    goto L21(txt38, r43);
  L119():
    ll9 = force? ll8;
    checkMissing(ll9);
    length5 = ldf length in base;
    r51 = dyn length5(ll9);
    check L120() else D30();
  L121():
    txt47 = ld txt;
    check L122() else D31();
  L135():
    p5 = prom<V +>{
      txt53 = ld txt;
      txt54 = force? txt53;
      checkMissing(txt54);
      c24 = `is.object`(txt54);
      if c24 then L1() else L2(txt54);
    L0(dx22):
      return dx22;
    L1():
      dr12 = tryDispatchBuiltin.1("[", txt54);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(txt56):
      nl2 = ld nl;
      nl3 = force? nl2;
      checkMissing(nl3);
      r58 = `-`(nl3, 2);
      __6 = ldf `[` in base;
      r59 = dyn __6(txt56, r58);
      goto L0(r59);
    L3():
      dx21 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx21);
    };
    r61 = dyn startsWith(p5, "> proc.time()");
    check L136() else D37();
  L138():
    txt57 = ld txt;
    check L139() else D38();
  D30():
    deopt 138 [r51];
  D31():
    deopt 139 [txt47];
  D37():
    deopt 165 [c21, r61];
  D38():
    deopt 167 [txt57];
  D40():
    deopt 179 [txt61];
  L120():
    goto L24(r51);
  L122():
    txt48 = force? txt47;
    checkMissing(txt48);
    c20 = `is.object`(txt48);
    if c20 then L123() else L124(txt48);
  L136():
    c25 = `as.logical`(r61);
    c26 = `&&`(c21, c25);
    goto L30(c26);
  L139():
    txt58 = force? txt57;
    checkMissing(txt58);
    c29 = `is.object`(txt58);
    if c29 then L140() else L141(txt58);
  L145():
    txt62 = force? txt61;
    checkMissing(txt62);
    c30 = `is.object`(txt62);
    if c30 then L146() else L147(txt62);
  L26(dx18):
    st txt = dx18;
    goto L27(dx18);
  L32(dx24):
    st txt = dx24;
    goto L33();
  L34(dx27):
    st txt = dx27;
    nullPointers = ld nullPointers;
    check L157() else D45();
  L123():
    dr10 = tryDispatchBuiltin.1("[", txt48);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L125() else L124(dr10);
  L124(txt50):
    ll10 = ld ll;
    check L126() else D32();
  L140():
    dr14 = tryDispatchBuiltin.1("[", txt58);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L142() else L141(dr14);
  L141(txt60):
    nl4 = ld nl;
    check L143() else D39();
  L146():
    dr16 = tryDispatchBuiltin.1("[", txt62);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L148() else L147(dr16);
  L147(txt64):
    sym11 = ldf cumsum;
    base11 = ldf cumsum in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L149() else L150();
  D32():
    deopt 141 [txt50, ll10];
  D39():
    deopt 170 [txt60, 1.0, nl4];
  D45():
    deopt 199 [nullPointers];
  L35(txt67, r66):
    sym12 = ldf cumsum;
    base12 = ldf cumsum in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L153() else L154();
  L125():
    dx17 = getTryDispatchBuiltinValue(dr10);
    goto L26(dx17);
  L126():
    ll11 = force? ll10;
    checkMissing(ll11);
    r52 = `-`(<missing>, ll11);
    __5 = ldf `[` in base;
    r53 = dyn __5(txt50, r52);
    goto L26(r53);
  L142():
    dx23 = getTryDispatchBuiltinValue(dr14);
    goto L32(dx23);
  L143():
    nl5 = force? nl4;
    checkMissing(nl5);
    r62 = `-`(nl5, 3);
    r63 = `:`(1.0, r62);
    __7 = ldf `[` in base;
    r64 = dyn __7(txt60, r63);
    goto L32(r64);
  L148():
    dx26 = getTryDispatchBuiltinValue(dr16);
    goto L34(dx26);
  L149():
    txt68 = ld txt;
    check L151() else D41();
  L150():
    r65 = dyn base11(<lang `==`(txt, "> ## IGNORE_RDIFF_BEGIN")>);
    goto L35(txt64, r65);
  L157():
    nullPointers1 = force? nullPointers;
    checkMissing(nullPointers1);
    c31 = `as.logical`(nullPointers1);
    if c31 then L158() else L37();
  D41():
    deopt 183 [txt64, txt68];
  L36(txt72, r72, r73):
    r76 = `<=`(r72, r73);
    __8 = ldf `[` in base;
    r77 = dyn __8(txt72, r76);
    goto L34(r77);
  L37():
    goto L38();
  L38():
    _canonicalize_quotes = ldf `.canonicalize_quotes`;
    check L164() else D50();
  L151():
    txt69 = force? txt68;
    checkMissing(txt69);
    r67 = `==`(txt69, "> ## IGNORE_RDIFF_BEGIN");
    cumsum = ldf cumsum in base;
    r68 = dyn cumsum(r67);
    check L152() else D42();
  L153():
    txt73 = ld txt;
    check L155() else D43();
  L154():
    r71 = dyn base12(<lang `==`(txt, "> ## IGNORE_RDIFF_END")>);
    goto L36(txt67, r66, r71);
  L158():
    gsub = ldf gsub;
    check L159() else D46();
  D42():
    deopt 188 [txt64, r68];
  D43():
    deopt 190 [txt67, r66, txt73];
  D46():
    deopt 202 [];
  D50():
    deopt 222 [];
  L152():
    goto L35(txt64, r68);
  L155():
    txt74 = force? txt73;
    checkMissing(txt74);
    r74 = `==`(txt74, "> ## IGNORE_RDIFF_END");
    cumsum1 = ldf cumsum in base;
    r75 = dyn cumsum1(r74);
    check L156() else D44();
  L159():
    p6 = prom<V +>{
      txt75 = ld txt;
      txt76 = force? txt75;
      checkMissing(txt76);
      return txt76;
    };
    r79 = dyn gsub[, , , useBytes]("<(environment|bytecode|pointer|promise): [x[:xdigit:]]+>", "<\\1: 0>", p6, TRUE);
    check L160() else D47();
  L164():
    p8 = prom<V +>{
      txt79 = ld txt;
      txt80 = force? txt79;
      checkMissing(txt80);
      return txt80;
    };
    r84 = dyn _canonicalize_quotes(p8);
    check L165() else D51();
  D44():
    deopt 195 [txt67, r66, r75];
  D47():
    deopt 208 [r79];
  D51():
    deopt 224 [r84];
  L156():
    goto L36(txt67, r66, r75);
  L160():
    st txt = r79;
    sub = ldf sub;
    check L161() else D48();
  L165():
    st txt = r84;
    _Platform = ld `.Platform`;
    check L166() else D52();
  D48():
    deopt 211 [];
  D52():
    deopt 226 [_Platform];
  L161():
    p7 = prom<V +>{
      txt77 = ld txt;
      txt78 = force? txt77;
      checkMissing(txt78);
      return txt78;
    };
    r81 = dyn sub[, , , useBytes]("<hashtable.*>", "<hashtable output>", p7, TRUE);
    check L162() else D49();
  L166():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c32 = `is.object`(_Platform1);
    if c32 then L168() else L169(_Platform1);
  D49():
    deopt 217 [r81];
  L162():
    st txt = r81;
    goto L38();
  L167(dx29):
    r86 = `==`(dx29, "windows");
    c33 = `as.logical`(r86);
    if c33 then L171() else L39();
  L168():
    dr18 = tryDispatchBuiltin.1("$", _Platform1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L170() else L169(dr18);
  L169(_Platform3):
    r85 = `$`(_Platform3, <sym OS.type>);
    goto L167(r85);
  L39():
    goto L40();
  L40():
    txt85 = ld txt;
    check L177() else D57();
  L170():
    dx28 = getTryDispatchBuiltinValue(dr18);
    goto L167(dx28);
  L171():
    gsub1 = ldf gsub;
    check L172() else D53();
  D53():
    deopt 232 [];
  D57():
    deopt 255 [txt85];
  L172():
    p13 = prom<V +>{
      paste0 = ldf paste0;
      p10 = prom<V +>{
        rawToChar = ldf rawToChar;
        p9 = prom<V +>{
          sym13 = ldf `as.raw`;
          base13 = ldf `as.raw` in base;
          guard13 = `==`.4(sym13, base13);
          if guard13 then L1() else L2();
        L0(r88):
          return r88;
        L1():
          as_raw = ldf `as.raw` in base;
          r89 = dyn as_raw(145.0);
          goto L0(r89);
        L2():
          r87 = dyn base13(145.0);
          goto L0(r87);
        };
        r91 = dyn rawToChar(p9);
        return r91;
      };
      p12 = prom<V +>{
        rawToChar1 = ldf rawToChar;
        p11 = prom<V +>{
          sym14 = ldf `as.raw`;
          base14 = ldf `as.raw` in base;
          guard14 = `==`.4(sym14, base14);
          if guard14 then L1() else L2();
        L0(r94):
          return r94;
        L1():
          as_raw1 = ldf `as.raw` in base;
          r95 = dyn as_raw1(146.0);
          goto L0(r95);
        L2():
          r93 = dyn base14(146.0);
          goto L0(r93);
        };
        r97 = dyn rawToChar1(p11);
        return r97;
      };
      r99 = dyn paste0("(", p10, "|", p12, ")");
      return r99;
    };
    p14 = prom<V +>{
      txt81 = ld txt;
      txt82 = force? txt81;
      checkMissing(txt82);
      return txt82;
    };
    r102 = dyn gsub1[, , , perl, useBytes](p13, "'", p14, TRUE, TRUE);
    check L173() else D54();
  L177():
    txt86 = force? txt85;
    checkMissing(txt86);
    c34 = `is.object`(txt86);
    if c34 then L178() else L179(txt86);
  D54():
    deopt 240 [r102];
  L41(dx31):
    st txt = dx31;
    st pat = "(^Time |^Loading required package|^Package [A-Za-z][A-Za-z0-9]+ loaded|^<(environment|promise|pointer|bytecode):|^End.Don't show)";
    txt91 = ld txt;
    check L183() else D60();
  L173():
    st txt = r102;
    gsub2 = ldf gsub;
    check L174() else D55();
  L178():
    dr20 = tryDispatchBuiltin.1("[", txt86);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L180() else L179(dr20);
  L179(txt88):
    grepl = ldf grepl;
    check L181() else D58();
  D55():
    deopt 243 [];
  D58():
    deopt 258 [txt88];
  D60():
    deopt 272 [txt91];
  L174():
    p19 = prom<V +>{
      paste1 = ldf paste0;
      p16 = prom<V +>{
        rawToChar2 = ldf rawToChar;
        p15 = prom<V +>{
          sym15 = ldf `as.raw`;
          base15 = ldf `as.raw` in base;
          guard15 = `==`.4(sym15, base15);
          if guard15 then L1() else L2();
        L0(r104):
          return r104;
        L1():
          as_raw2 = ldf `as.raw` in base;
          r105 = dyn as_raw2(147.0);
          goto L0(r105);
        L2():
          r103 = dyn base15(147.0);
          goto L0(r103);
        };
        r107 = dyn rawToChar2(p15);
        return r107;
      };
      p18 = prom<V +>{
        rawToChar3 = ldf rawToChar;
        p17 = prom<V +>{
          sym16 = ldf `as.raw`;
          base16 = ldf `as.raw` in base;
          guard16 = `==`.4(sym16, base16);
          if guard16 then L1() else L2();
        L0(r110):
          return r110;
        L1():
          as_raw3 = ldf `as.raw` in base;
          r111 = dyn as_raw3(148.0);
          goto L0(r111);
        L2():
          r109 = dyn base16(148.0);
          goto L0(r109);
        };
        r113 = dyn rawToChar3(p17);
        return r113;
      };
      r115 = dyn paste1("(", p16, "|", p18, ")");
      return r115;
    };
    p20 = prom<V +>{
      txt83 = ld txt;
      txt84 = force? txt83;
      checkMissing(txt84);
      return txt84;
    };
    r118 = dyn gsub2[, , , perl, useBytes](p19, "\"", p20, TRUE, TRUE);
    check L175() else D56();
  L180():
    dx30 = getTryDispatchBuiltinValue(dr20);
    goto L41(dx30);
  L181():
    p21 = prom<V +>{
      txt89 = ld txt;
      txt90 = force? txt89;
      checkMissing(txt90);
      return txt90;
    };
    r121 = dyn grepl[, , fixed, useBytes]("options(pager = \"console\")", p21, TRUE, TRUE);
    check L182() else D59();
  L183():
    txt92 = force? txt91;
    checkMissing(txt92);
    c35 = `is.object`(txt92);
    if c35 then L184() else L185(txt92);
  D56():
    deopt 251 [r118];
  D59():
    deopt 265 [txt88, r121];
  L42(dx33):
    popenv;
    return dx33;
  L175():
    st txt = r118;
    goto L40();
  L182():
    r122 = `!`(r121);
    __9 = ldf `[` in base;
    r123 = dyn __9(txt88, r122);
    goto L41(r123);
  L184():
    dr22 = tryDispatchBuiltin.1("[", txt92);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L186() else L185(dr22);
  L185(txt94):
    grepl1 = ldf grepl;
    check L187() else D61();
  D61():
    deopt 275 [txt94];
  L186():
    dx32 = getTryDispatchBuiltinValue(dr22);
    goto L42(dx32);
  L187():
    p22 = prom<V +>{
      pat = ld pat;
      pat1 = force? pat;
      checkMissing(pat1);
      return pat1;
    };
    p23 = prom<V +>{
      txt95 = ld txt;
      txt96 = force? txt95;
      checkMissing(txt96);
      return txt96;
    };
    r126 = dyn grepl1[, , perl, useBytes](p22, p23, TRUE, TRUE);
    check L188() else D62();
  D62():
    deopt 282 [txt94, r126];
  L188():
    r127 = `!`(r126);
    __10 = ldf `[` in base;
    r128 = dyn __10(txt94, r127);
    goto L42(r128);
  }
}