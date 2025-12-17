fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner912936234;
    st `as.character.Rd` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner912936234(x, deparse, `...`) {
  (reg x:*, reg deparse:*, reg ddd:dots) -+> V { var x:*, var deparse:*, reg deparse_isMissing:L, reg deparse_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c1:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg c2:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg c3:cls, reg r11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg r13:V, reg c4:cls, reg r14:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r15:V, reg r16:V, reg c5:cls, reg r17:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r18:V, reg r19:V, reg c6:cls, reg r20:V, reg r21:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r22:V, reg r23:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r24:V, reg r25:V, reg x1:*, reg x2:V, reg attr:cls, reg r26:V, reg c7:V, reg c8:L, reg l:*, reg attr__:cls, reg r27:V, reg pr:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r30:V |
    mkenv;
    st x = x;
    deparse_isMissing = missing.0(deparse);
    if deparse_isMissing then L0(FALSE) else L0(deparse);
  L0(deparse_orDefault):
    st deparse = deparse_orDefault;
    st `...` = ddd;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L1(r1):
    st ZEROARG = r1;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L12():
    c = ldf c in base;
    r2 = dyn c("\\cr", "\\dots", "\\ldots", "\\R", "\\tab");
    check L14() else D0();
  L13():
    r = dyn base("\\cr", "\\dots", "\\ldots", "\\R", "\\tab");
    goto L1(r);
  D0():
    deopt 8 [r2];
  L2(r4):
    st MULTIARG = r4;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L14():
    goto L1(r2);
  L15():
    c1 = ldf c in base;
    r5 = dyn c1("\\section", "\\subsection", "\\item", "\\enc", "\\method", "\\S3method", "\\S4method", "\\tabular", "\\if", "\\href", "\\ifelse");
    check L17() else D1();
  L16():
    r3 = dyn base1("\\section", "\\subsection", "\\item", "\\enc", "\\method", "\\S3method", "\\S4method", "\\tabular", "\\if", "\\href", "\\ifelse");
    goto L2(r3);
  D1():
    deopt 24 [r5];
  L3(r7):
    st USERMACROS = r7;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L21() else L22();
  L17():
    goto L2(r5);
  L18():
    c2 = ldf c in base;
    r8 = dyn c2("USERMACRO", "\\newcommand", "\\renewcommand");
    check L20() else D2();
  L19():
    r6 = dyn base2("USERMACRO", "\\newcommand", "\\renewcommand");
    goto L3(r6);
  D2():
    deopt 32 [r8];
  L4(r10):
    st EQN = r10;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L24() else L25();
  L20():
    goto L3(r8);
  L21():
    c3 = ldf c in base;
    r11 = dyn c3("\\deqn", "\\eqn", "\\figure");
    check L23() else D3();
  L22():
    r9 = dyn base3("\\deqn", "\\eqn", "\\figure");
    goto L4(r9);
  D3():
    deopt 40 [r11];
  L5(r13):
    st modes = r13;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L27() else L28();
  L23():
    goto L4(r11);
  L24():
    c4 = ldf c in base;
    r14 = dyn c4(1, 2, 3, 4, 5, 6);
    check L26() else D4();
  L25():
    r12 = dyn base4[RLIKE, LATEXLIKE, VERBATIM, INOPTION, COMMENTMODE, UNKNOWNMODE](1, 2, 3, 4, 5, 6);
    goto L5(r12);
  D4():
    deopt 57 [r14];
  L6(r16):
    st tags = r16;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L30() else L31();
  L26():
    goto L5(r14);
  L27():
    c5 = ldf c in base;
    r17 = dyn c5(1, 2, 3, 5, 6);
    check L29() else D5();
  L28():
    r15 = dyn base5[RCODE, TEXT, VERB, COMMENT, UNKNOWN](1, 2, 3, 5, 6);
    goto L6(r15);
  D5():
    deopt 72 [r17];
  L7(r19):
    st state = r19;
    st needBraces = FALSE;
    st inEqn = 0;
    r21 = clos inner3235627120;
    st pr = r21;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L33() else L34();
  L29():
    goto L6(r17);
  L30():
    c6 = ldf c in base;
    r20 = dyn c6(0, 0);
    check L32() else D6();
  L31():
    r18 = dyn base6[braceDepth, inRString](0, 0);
    goto L7(r18);
  D6():
    deopt 81 [r20];
  L8(r23):
    c8 = `as.logical`(r23);
    if c8 then L39() else L10();
  L32():
    goto L7(r20);
  L33():
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L35() else L36();
  L34():
    r22 = dyn base7(<lang attr(x, "Rd_tag")>);
    goto L8(r22);
  L9(r25):
    c7 = `==`(r25, NULL);
    goto L8(c7);
  L10():
    goto L11();
  L11():
    pr = ldf pr;
    check L43() else D11();
  L35():
    x1 = ld x;
    check L37() else D7();
  L36():
    r24 = dyn base8(<sym x>, "Rd_tag");
    goto L9(r24);
  L39():
    l = ld x;
    attr__ = ldf `attr<-`;
    check L40() else D9();
  D7():
    deopt 95 [x1];
  D9():
    deopt 104 ["Rd", l, "Rd"];
  D11():
    deopt 112 [];
  L37():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r26 = dyn attr(x2, "Rd_tag");
    check L38() else D8();
  L40():
    r27 = dyn attr__(l, NULL, "Rd_tag", "Rd");
    check L41() else D10();
  L43():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r30 = dyn pr[, quoteBraces](p, FALSE);
    check L44() else D12();
  D8():
    deopt 99 [r26];
  D10():
    deopt 107 ["Rd", r27];
  D12():
    deopt 116 [r30];
  L38():
    goto L9(r26);
  L41():
    st x = r27;
    goto L11();
  L44():
    popenv;
    return r30;
  }
}
fun inner3235627120(x, quoteBraces) {
  (reg x:*, reg quoteBraces:*) -+> V { var x:*, var quoteBraces:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg tag:*, reg tag1:V, reg c:V, reg c1:L, reg c2:V, reg tag2:*, reg tag3:V, reg r5:V, reg c4:L, reg c5:V, reg c7:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg is_list:cls, reg r9:V, reg c8:L, reg state:*, reg state1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg c9:cls, reg r12:V, reg tag4:*, reg tag5:V, reg r13:V, reg c10:L, reg character:cls, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg x5:*, reg x6:V, reg r17:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c11:L, reg x7:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg i7:I, reg r19:V, reg result:*, reg result1:V, reg pr:cls, reg x8:*, reg x9:V, reg c12:L, reg x11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i8:*, reg i9:V, reg __:cls, reg r20:V, reg p:p(V +), reg quoteBraces1:*, reg quoteBraces2:V, reg p1:p(V +), reg r23:V, reg c13:cls, reg r24:V, reg startsWith:cls, reg tag6:*, reg tag7:V, reg p2:p(V +), reg r26:V, reg c14:L, reg deparse:*, reg deparse1:V, reg c15:L, reg deparseRdElement:cls, reg x12:*, reg x13:V, reg c16:L, reg x15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r27:V, reg c17:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r28:V, reg p3:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg state2:*, reg state3:V, reg modes:*, reg modes1:V, reg c18:L, reg modes3:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r32:V, reg inEqn:*, reg inEqn1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg quoteBraces3:*, reg quoteBraces4:V, reg as_integer:cls, reg r35:V, reg c19:cls, reg r36:V, reg p4:p(V +), reg r38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg tag8:*, reg tag9:V, reg dep:*, reg dep1:V, reg c20:L, reg dep3:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg __4:cls, reg r41:V, reg c21:cls, reg r42:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r44:V, reg r45:V, reg tag10:*, reg tag11:V, reg x16:*, reg x17:V, reg c22:L, reg x19:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __5:cls, reg r46:V, reg c23:L, reg dx15:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg __6:cls, reg r47:V, reg c24:cls, reg r48:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r49:V, reg r50:V, reg x20:*, reg x21:V, reg c25:L, reg x23:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg __7:cls, reg r51:V, reg r52:I, reg s1:V, reg l1:I, reg i11:I, reg i12:I, reg i13:I, reg c26:L, reg x24:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r53:V, reg i18:I, reg r54:V, reg result2:*, reg result3:V, reg pr1:cls, reg x25:*, reg x26:V, reg c27:L, reg x28:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg __8:cls, reg r55:V, reg c28:L, reg dx23:V, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg i19:*, reg i20:V, reg __9:cls, reg r56:V, reg p5:p(V +), reg quoteBraces5:*, reg quoteBraces6:V, reg p6:p(V +), reg r59:V, reg c29:cls, reg r60:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r61:V, reg r62:V, reg result4:*, reg result5:V, reg c30:cls, reg r63:V, reg _in_:cls, reg tag12:*, reg tag13:V, reg p7:p(V +), reg ZEROARG:*, reg ZEROARG1:V, reg p8:p(V +), reg r66:V, reg c31:L, reg tag14:*, reg tag15:V, reg _in_1:cls, reg tag16:*, reg tag17:V, reg p9:p(V +), reg MULTIARG:*, reg MULTIARG1:V, reg p10:p(V +), reg r69:V, reg c32:L, reg tag18:*, reg tag19:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r70:V, reg r71:V, reg x29:*, reg x30:V, reg r72:I, reg s2:V, reg l2:I, reg i21:I, reg i22:I, reg i23:I, reg c33:L, reg x31:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r73:V, reg i28:I, reg r74:V, reg result6:*, reg result7:V, reg pr2:cls, reg x32:*, reg x33:V, reg c34:L, reg x35:V, reg dr20:V, reg dc10:L, reg dx26:V, reg dx27:V, reg i29:*, reg i30:V, reg __10:cls, reg r75:V, reg p11:p(V +), reg quoteBraces7:*, reg quoteBraces8:V, reg p12:p(V +), reg r78:V, reg c35:cls, reg r79:V, reg _in_2:cls, reg tag20:*, reg tag21:V, reg p13:p(V +), reg EQN:*, reg EQN1:V, reg p14:p(V +), reg r82:V, reg c36:L, reg tag22:*, reg tag23:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r83:V, reg r84:V, reg result8:*, reg result9:V, reg pr3:cls, reg x36:*, reg x37:V, reg c37:L, reg x39:V, reg dr22:V, reg dc11:L, reg dx28:V, reg dx29:V, reg __11:cls, reg r85:V, reg p15:p(V +), reg quoteBraces9:*, reg quoteBraces10:V, reg p16:p(V +), reg r88:V, reg c38:cls, reg r89:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r90:V, reg r91:V, reg x40:*, reg x41:V, reg length:cls, reg r92:V, reg r93:V, reg c39:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r94:V, reg r95:V, reg result10:*, reg result11:V, reg pr4:cls, reg x42:*, reg x43:V, reg c40:L, reg x45:V, reg dr24:V, reg dc12:L, reg dx30:V, reg dx31:V, reg __12:cls, reg r96:V, reg p17:p(V +), reg quoteBraces11:*, reg quoteBraces12:V, reg p18:p(V +), reg r99:V, reg c41:cls, reg r100:V, reg r101:V, reg tag24:*, reg tag25:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r102:V, reg r103:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r104:V, reg r105:V, reg x46:*, reg x47:V, reg attr1:cls, reg r106:V, reg c42:V, reg r107:V, reg c43:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r108:V, reg r109:V, reg result12:*, reg result13:V, reg pr5:cls, reg option:*, reg option1:V, reg p19:p(V +), reg quoteBraces13:*, reg quoteBraces14:V, reg p20:p(V +), reg r112:V, reg c44:cls, reg r113:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r115:V, reg r116:V, reg result14:*, reg result15:V, reg c45:cls, reg r117:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r118:V, reg r119:V, reg x48:*, reg x49:V, reg r120:I, reg s3:V, reg l3:I, reg i31:I, reg i32:I, reg i33:I, reg c46:L, reg x50:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r121:V, reg i38:I, reg r122:V, reg result16:*, reg result17:V, reg pr6:cls, reg x51:*, reg x52:V, reg c47:L, reg x54:V, reg dr26:V, reg dc13:L, reg dx32:V, reg dx33:V, reg i39:*, reg i40:V, reg __13:cls, reg r123:V, reg p21:p(V +), reg quoteBraces15:*, reg quoteBraces16:V, reg p22:p(V +), reg r126:V, reg c48:cls, reg r127:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r128:V, reg r129:V, reg result18:*, reg result19:V, reg c49:cls, reg r130:V, reg state4:*, reg state5:V, reg c50:L, reg state7:V, reg dr28:V, reg dc14:L, reg dx34:V, reg dx35:V, reg __14:cls, reg r131:V, reg c51:L, reg pr7:cls, reg x55:*, reg x56:V, reg p23:p(V +), reg r133:V, reg savestate:*, reg savestate1:V, reg _in_3:cls, reg tag26:*, reg tag27:V, reg p24:p(V +), reg USERMACROS:*, reg USERMACROS1:V, reg p25:p(V +), reg r137:V, reg c52:L, reg sym25:cls, reg base25:cls, reg guard25:L, reg r138:V, reg r139:V, reg c53:cls, reg r140:V, reg deparse2:*, reg deparse3:V, reg c54:L, reg deparseRdElement1:cls, reg sym26:cls, reg base26:cls, reg guard26:L, reg r141:V, reg r142:V, reg x57:*, reg x58:V, reg as_character:cls, reg r143:V, reg p26:p(V +), reg sym27:cls, reg base27:cls, reg guard27:L, reg r145:V, reg r146:V, reg state8:*, reg state9:V, reg tags:*, reg tags1:V, reg c55:L, reg tags3:V, reg dr30:V, reg dc15:L, reg dx36:V, reg dx37:V, reg tag28:*, reg tag29:V, reg __15:cls, reg r147:V, reg inEqn2:*, reg inEqn3:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r148:V, reg r149:V, reg quoteBraces17:*, reg quoteBraces18:V, reg as_integer1:cls, reg r150:V, reg c56:cls, reg r151:V, reg p27:p(V +), reg r153:V, reg dep4:*, reg dep5:V, reg c57:L, reg dep7:V, reg dr32:V, reg dc16:L, reg dx38:V, reg dx39:V, reg __16:cls, reg r154:V, reg dep8:*, reg dep9:V, reg c58:L, reg dep11:V, reg dr34:V, reg dc17:L, reg dx40:V, reg dx41:V, reg __17:cls, reg r155:V, reg c59:L, reg dx43:V, reg dr36:V, reg dc18:L, reg dx44:V, reg dx45:V, reg __18:cls, reg r156:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r157:V, reg r158:V, reg x59:*, reg x60:V, reg inherits:cls, reg r159:V, reg c60:L, reg setdiff:cls, reg sym30:cls, reg base30:cls, reg guard30:L, reg r160:V, reg r161:V, reg x61:*, reg x62:V, reg class:cls, reg r162:V, reg p28:p(V +), reg r164:V, reg l4:*, reg class__:cls, reg r165:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r167:V, reg r168:V, reg x63:*, reg x64:V, reg as_character1:cls, reg r169:V, reg needBraces:*, reg needBraces1:V, reg c61:L, reg grepl:cls, reg result20:*, reg result21:V, reg p29:p(V +), reg r171:V, reg c62:L, reg sym32:cls, reg base32:cls, reg guard32:L, reg r172:V, reg r173:V, reg result22:*, reg result23:V, reg c63:cls, reg r174:V, reg result24:*, reg result25:V |
    mkenv;
    st x = x;
    st quoteBraces = quoteBraces;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L70() else L71();
  L0(r1):
    st tag = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L74() else L75();
  L70():
    x1 = ld x;
    check L72() else D0();
  L71():
    r = dyn base(<sym x>, "Rd_tag");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L2(c1) else L77();
  L72():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r2 = dyn attr(x2, "Rd_tag");
    check L73() else D1();
  L74():
    tag = ld tag;
    check L76() else D2();
  L75():
    r3 = dyn base1(<sym tag>);
    goto L1(r3);
  D1():
    deopt 6 [r2];
  D2():
    deopt 9 [tag];
  L2(c2):
    c7 = `as.logical`(c2);
    if c7 then L80() else L3();
  L73():
    goto L0(r2);
  L76():
    tag1 = force? tag;
    checkMissing(tag1);
    c = `==`(tag1, NULL);
    goto L1(c);
  L77():
    tag2 = ld tag;
    check L78() else D3();
  D3():
    deopt 12 [c1, tag2];
  L3():
    goto L4();
  L4():
    sym2 = ldf `is.list`;
    base2 = ldf `is.list` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L82() else L83();
  L78():
    tag3 = force? tag2;
    checkMissing(tag3);
    r5 = `==`(tag3, "LIST");
    c4 = `as.logical`(r5);
    c5 = `||`(c1, c4);
    goto L2(c5);
  L80():
    st tag = "";
    goto L4();
  L5(r8):
    c8 = `as.logical`(r8);
    if c8 then L86() else L6();
  L82():
    x3 = ld x;
    check L84() else D4();
  L83():
    r7 = dyn base2(<sym x>);
    goto L5(r7);
  D4():
    deopt 24 [x3];
  L6():
    _in_3 = ldf `%in%`;
    check L237() else D78();
  L54():
    result24 = ld result;
    check L285() else D99();
  L84():
    x4 = force? x3;
    checkMissing(x4);
    is_list = ldf `is.list` in base;
    r9 = dyn is_list(x4);
    check L85() else D5();
  L86():
    state = ld state;
    check L87() else D6();
  D5():
    deopt 27 [r9];
  D6():
    deopt 28 [state];
  D78():
    deopt 306 [];
  D99():
    deopt 387 [result24];
  L85():
    goto L5(r9);
  L87():
    state1 = force? state;
    checkMissing(state1);
    st savestate = state1;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L88() else L89();
  L237():
    p24 = prom<V +>{
      tag26 = ld tag;
      tag27 = force? tag26;
      checkMissing(tag27);
      return tag27;
    };
    p25 = prom<V +>{
      USERMACROS = ld USERMACROS;
      USERMACROS1 = force? USERMACROS;
      checkMissing(USERMACROS1);
      return USERMACROS1;
    };
    r137 = dyn _in_3(p24, p25);
    check L238() else D79();
  L285():
    result25 = force? result24;
    checkMissing(result25);
    popenv;
    return result25;
  D79():
    deopt 309 [r137];
  L7(r11):
    sst state = r11;
    sst needBraces = FALSE;
    tag4 = ld tag;
    check L91() else D8();
  L88():
    c9 = ldf c in base;
    r12 = dyn c9(0, 0);
    check L90() else D7();
  L89():
    r10 = dyn base3(0, 0);
    goto L7(r10);
  L238():
    c52 = `as.logical`(r137);
    if c52 then L239() else L55();
  D7():
    deopt 36 [r12];
  D8():
    deopt 41 [tag4];
  L55():
    deparse2 = ld deparse;
    check L244() else D81();
  L90():
    goto L7(r12);
  L91():
    tag5 = force? tag4;
    checkMissing(tag5);
    r13 = `==`(tag5, "Rd");
    c10 = `as.logical`(r13);
    if c10 then L92() else L8();
  L239():
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L240() else L241();
  D81():
    deopt 315 [deparse2];
  L8():
    startsWith = ldf startsWith;
    check L106() else D16();
  L13():
    state4 = ld state;
    check L227() else D74();
  L56(r139):
    st result = r139;
    goto L54();
  L92():
    character = ldf character;
    check L93() else D9();
  L240():
    c53 = ldf c in base;
    r140 = dyn c53();
    check L242() else D80();
  L241():
    r138 = dyn base25();
    goto L56(r138);
  L244():
    deparse3 = force? deparse2;
    checkMissing(deparse3);
    c54 = `as.logical`(deparse3);
    if c54 then L245() else L57();
  D9():
    deopt 46 [];
  D16():
    deopt 69 [];
  D74():
    deopt 289 [state4];
  D80():
    deopt 313 [r140];
  L57():
    sym29 = ldf inherits;
    base29 = ldf inherits in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L260() else L261();
  L61():
    needBraces = ld needBraces;
    check L274() else D94();
  L93():
    r14 = dyn character();
    check L94() else D10();
  L106():
    p2 = prom<V +>{
      tag6 = ld tag;
      tag7 = force? tag6;
      checkMissing(tag7);
      return tag7;
    };
    r26 = dyn startsWith(p2, "#");
    check L107() else D17();
  L227():
    state5 = force? state4;
    checkMissing(state5);
    c50 = `is.object`(state5);
    if c50 then L228() else L229(state5);
  L242():
    goto L56(r140);
  L245():
    deparseRdElement1 = ldf deparseRdElement;
    check L246() else D82();
  D10():
    deopt 47 [r14];
  D17():
    deopt 72 [r26];
  D82():
    deopt 318 [];
  D94():
    deopt 365 [needBraces];
  L51(dx35):
    c51 = `as.logical`(dx35);
    if c51 then L231() else L52();
  L62(r158):
    c60 = `as.logical`(r158);
    if c60 then L264() else L63();
  L94():
    st result = r14;
    sym4 = ldf seq_along;
    base4 = ldf seq_along in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L95() else L96();
  L107():
    c14 = `as.logical`(r26);
    if c14 then L108() else L14();
  L228():
    dr28 = tryDispatchBuiltin.1("[", state5);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L230() else L229(dr28);
  L229(state7):
    __14 = ldf `[` in base;
    r131 = dyn __14(state7, 1);
    goto L51(r131);
  L246():
    p26 = prom<V +>{
      sym26 = ldf `as.character`;
      base26 = ldf `as.character` in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L1() else L2();
    L0(r142):
      return r142;
    L1():
      x57 = ld x;
      x58 = force? x57;
      checkMissing(x58);
      as_character = ldf `as.character` in base;
      r143 = dyn as_character(x58);
      goto L0(r143);
    L2():
      r141 = dyn base26(<sym x>);
      goto L0(r141);
    };
    p27 = prom<V +>{
      sym27 = ldf c;
      base27 = ldf c in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L3() else L4();
    L0(r146):
      return r146;
    L3():
      state8 = ld state;
      state9 = force? state8;
      checkMissing(state9);
      tags = ld tags;
      tags1 = force? tags;
      checkMissing(tags1);
      c55 = `is.object`(tags1);
      if c55 then L5() else L6(tags1);
    L4():
      r145 = dyn base27(<sym state>, <lang `[`(tags, tag)>, <sym inEqn>, <lang as.integer(quoteBraces)>);
      goto L0(r145);
    L1(dx37):
      inEqn2 = ld inEqn;
      inEqn3 = force? inEqn2;
      checkMissing(inEqn3);
      sym28 = ldf `as.integer`;
      base28 = ldf `as.integer` in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L8() else L9();
    L5():
      dr30 = tryDispatchBuiltin.1("[", tags1);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L7() else L6(dr30);
    L6(tags3):
      tag28 = ld tag;
      tag29 = force? tag28;
      __15 = ldf `[` in base;
      r147 = dyn __15(tags3, tag29);
      goto L1(r147);
    L2(r149):
      c56 = ldf c in base;
      r151 = dyn c56(state9, dx37, inEqn3, r149);
      goto L0(r151);
    L7():
      dx36 = getTryDispatchBuiltinValue(dr30);
      goto L1(dx36);
    L8():
      quoteBraces17 = ld quoteBraces;
      quoteBraces18 = force? quoteBraces17;
      checkMissing(quoteBraces18);
      as_integer1 = ldf `as.integer` in base;
      r150 = dyn as_integer1(quoteBraces18);
      goto L2(r150);
    L9():
      r148 = dyn base28(<sym quoteBraces>);
      goto L2(r148);
    };
    r153 = dyn deparseRdElement1(p26, p27);
    check L247() else D83();
  L260():
    x59 = ld x;
    check L262() else D86();
  L261():
    r157 = dyn base29(<sym x>, "Rd");
    goto L62(r157);
  L274():
    needBraces1 = force? needBraces;
    checkMissing(needBraces1);
    c61 = `as.logical`(needBraces1);
    if c61 then L275() else L66();
  D83():
    deopt 321 [r153];
  D86():
    deopt 340 [x59];
  L9(r16):
    s = toForSeq(r16);
    l = length(s);
    i = 0;
    goto L10(i);
  L14():
    _in_ = ldf `%in%`;
    check L151() else D34();
  L52():
    goto L53();
  L53():
    savestate = ld savestate;
    check L235() else D77();
  L63():
    goto L64();
  L64():
    sym31 = ldf `as.character`;
    base31 = ldf `as.character` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L270() else L271();
  L66():
    goto L54();
  L95():
    x5 = ld x;
    check L97() else D11();
  L96():
    r15 = dyn base4(<sym x>);
    goto L9(r15);
  L108():
    deparse = ld deparse;
    check L109() else D18();
  L230():
    dx34 = getTryDispatchBuiltinValue(dr28);
    goto L51(dx34);
  L231():
    pr7 = ldf pr;
    check L232() else D75();
  L247():
    st dep = r153;
    dep4 = ld dep;
    check L248() else D84();
  L262():
    x60 = force? x59;
    checkMissing(x60);
    inherits = ldf inherits in base;
    r159 = dyn inherits(x60, "Rd", FALSE);
    check L263() else D87();
  L264():
    setdiff = ldf setdiff;
    check L265() else D88();
  L275():
    grepl = ldf grepl;
    check L276() else D95();
  D11():
    deopt 50 [x5];
  D18():
    deopt 73 [deparse];
  D34():
    deopt 139 [];
  D75():
    deopt 295 [];
  D77():
    deopt 302 [savestate];
  D84():
    deopt 323 [dep4];
  D87():
    deopt 345 [r159];
  D88():
    deopt 347 [];
  D95():
    deopt 368 [];
  L10(i1):
    i2 = `+`.1(i1, 1);
    c11 = `<`.1(l, i2);
    if c11 then L98() else L12();
  L65(r168):
    st result = r168;
    goto L61();
  L97():
    x6 = force? x5;
    checkMissing(x6);
    r17 = seq_along(x6);
    goto L9(r17);
  L109():
    deparse1 = force? deparse;
    checkMissing(deparse1);
    c15 = `as.logical`(deparse1);
    if c15 then L110() else L15();
  L151():
    p7 = prom<V +>{
      tag12 = ld tag;
      tag13 = force? tag12;
      checkMissing(tag13);
      return tag13;
    };
    p8 = prom<V +>{
      ZEROARG = ld ZEROARG;
      ZEROARG1 = force? ZEROARG;
      checkMissing(ZEROARG1);
      return ZEROARG1;
    };
    r66 = dyn _in_(p7, p8);
    check L152() else D35();
  L232():
    p23 = prom<V +>{
      x55 = ld x;
      x56 = force? x55;
      checkMissing(x56);
      return x56;
    };
    r133 = dyn pr7(p23, TRUE);
    check L233() else D76();
  L235():
    savestate1 = force? savestate;
    checkMissing(savestate1);
    sst state = savestate1;
    goto L54();
  L248():
    dep5 = force? dep4;
    checkMissing(dep5);
    c57 = `is.object`(dep5);
    if c57 then L249() else L250(dep5);
  L263():
    goto L62(r159);
  L265():
    p28 = prom<V +>{
      sym30 = ldf class;
      base30 = ldf class in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r161):
      return r161;
    L1():
      x61 = ld x;
      x62 = force? x61;
      checkMissing(x62);
      class = ldf class in base;
      r162 = dyn class(x62);
      goto L0(r162);
    L2():
      r160 = dyn base30(<sym x>);
      goto L0(r160);
    };
    r164 = dyn setdiff(p28, "Rd");
    check L266() else D89();
  L270():
    x63 = ld x;
    check L272() else D92();
  L271():
    r167 = dyn base31(<sym x>);
    goto L65(r167);
  L276():
    p29 = prom<V +>{
      result20 = ld result;
      result21 = force? result20;
      checkMissing(result21);
      return result21;
    };
    r171 = dyn grepl("^[[:alpha:]]", p29);
    check L277() else D96();
  D35():
    deopt 142 [r66];
  D76():
    deopt 298 [r133];
  D89():
    deopt 350 [r164];
  D92():
    deopt 360 [x63];
  D96():
    deopt 371 [r171];
  L12():
    x7 = `[[`(s, i2, NULL, TRUE);
    st i = x7;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L99() else L100();
  L15():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L122() else L123();
  L18():
    sym10 = ldf seq_along;
    base10 = ldf seq_along in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L133() else L134();
  L58(dx39):
    st result = dx39;
    dep8 = ld dep;
    check L252() else D85();
  L98():
    goto L13();
  L110():
    deparseRdElement = ldf deparseRdElement;
    check L111() else D19();
  L152():
    c31 = `as.logical`(r66);
    if c31 then L153() else L28();
  L233():
    st result = r133;
    goto L53();
  L249():
    dr32 = tryDispatchBuiltin.1("[[", dep5);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L251() else L250(dr32);
  L250(dep7):
    __16 = ldf `[[` in base;
    r154 = dyn __16(dep7, 1);
    goto L58(r154);
  L266():
    l4 = ld x;
    class__ = ldf `class<-`;
    check L267() else D90();
  L272():
    x64 = force? x63;
    checkMissing(x64);
    as_character1 = ldf `as.character` in base;
    r169 = dyn as_character1(x64);
    check L273() else D93();
  L277():
    c62 = `as.logical`(r171);
    if c62 then L278() else L67();
  D19():
    deopt 76 [];
  D85():
    deopt 329 [dep8];
  D90():
    deopt 352 [r164, l4, r164];
  D93():
    deopt 363 [r169];
  L11(i7, r19):
    st result = r19;
    goto L10(i7);
  L19(r45):
    st result = r45;
    goto L18();
  L22(r50):
    s1 = toForSeq(r50);
    l1 = length(s1);
    i11 = 0;
    goto L24(i11);
  L28():
    _in_1 = ldf `%in%`;
    check L156() else D37();
  L67():
    goto L69();
  L69():
    sst needBraces = FALSE;
    goto L54();
  L99():
    result = ld result;
    check L101() else D12();
  L100():
    r18 = dyn base5(<sym result>, <lang pr(`[[`(x, i), quoteBraces)>);
    goto L11(i2, r18);
  L111():
    p3 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      c16 = `is.object`(x13);
      if c16 then L2() else L3(x13);
    L0(dx3):
      c17 = `is.object`(dx3);
      if c17 then L5() else L6(dx3);
    L2():
      dr2 = tryDispatchBuiltin.1("[[", x13);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(x15):
      __1 = ldf `[[` in base;
      r27 = dyn __1(x15, 1);
      goto L0(r27);
    L1(dx7):
      return dx7;
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      dr4 = tryDispatchBuiltin.1("[[", dx3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6(dr4);
    L6(dx5):
      __2 = ldf `[[` in base;
      r28 = dyn __2(dx5, 1);
      goto L1(r28);
    L7():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx6);
    };
    p4 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L3() else L4();
    L0(r31):
      return r31;
    L3():
      state2 = ld state;
      state3 = force? state2;
      checkMissing(state3);
      modes = ld modes;
      modes1 = force? modes;
      checkMissing(modes1);
      c18 = `is.object`(modes1);
      if c18 then L5() else L6(modes1);
    L4():
      r30 = dyn base6(<sym state>, <lang `[`(modes, "LATEXLIKE")>, <sym inEqn>, <lang as.integer(quoteBraces)>);
      goto L0(r30);
    L1(dx9):
      inEqn = ld inEqn;
      inEqn1 = force? inEqn;
      checkMissing(inEqn1);
      sym7 = ldf `as.integer`;
      base7 = ldf `as.integer` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L8() else L9();
    L5():
      dr6 = tryDispatchBuiltin.1("[", modes1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L7() else L6(dr6);
    L6(modes3):
      __3 = ldf `[` in base;
      r32 = dyn __3(modes3, "LATEXLIKE");
      goto L1(r32);
    L2(r34):
      c19 = ldf c in base;
      r36 = dyn c19(state3, dx9, inEqn1, r34);
      goto L0(r36);
    L7():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx8);
    L8():
      quoteBraces3 = ld quoteBraces;
      quoteBraces4 = force? quoteBraces3;
      checkMissing(quoteBraces4);
      as_integer = ldf `as.integer` in base;
      r35 = dyn as_integer(quoteBraces4);
      goto L2(r35);
    L9():
      r33 = dyn base7(<sym quoteBraces>);
      goto L2(r33);
    };
    r38 = dyn deparseRdElement(p3, p4);
    check L112() else D20();
  L122():
    tag10 = ld tag;
    check L124() else D24();
  L123():
    r44 = dyn base9(<sym tag>, <lang `[[`(`[[`(x, 1), 1)>);
    goto L19(r44);
  L133():
    x20 = ld x;
    check L135() else D27();
  L134():
    r49 = dyn base10(<lang `[[`(x, 2)>);
    goto L22(r49);
  L153():
    tag14 = ld tag;
    check L154() else D36();
  L251():
    dx38 = getTryDispatchBuiltinValue(dr32);
    goto L58(dx38);
  L252():
    dep9 = force? dep8;
    checkMissing(dep9);
    c58 = `is.object`(dep9);
    if c58 then L253() else L254(dep9);
  L267():
    r165 = dyn class__(l4, NULL, r164);
    check L268() else D91();
  L273():
    goto L65(r169);
  L278():
    sym32 = ldf c;
    base32 = ldf c in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L279() else L280();
  D12():
    deopt 55 [i2, result];
  D20():
    deopt 79 [r38];
  D24():
    deopt 95 [tag10];
  D27():
    deopt 109 [x20];
  D36():
    deopt 143 [tag14];
  D37():
    deopt 150 [];
  D91():
    deopt 354 [r164, r165];
  L24(i12):
    i13 = `+`.1(i12, 1);
    c26 = `<`.1(l1, i13);
    if c26 then L139() else L26();
  L59(dx41):
    c59 = `is.object`(dx41);
    if c59 then L256() else L257(dx41);
  L68(r173):
    st result = r173;
    goto L69();
  L101():
    result1 = force? result;
    checkMissing(result1);
    pr = ldf pr;
    check L102() else D13();
  L112():
    st dep = r38;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L113() else L114();
  L124():
    tag11 = force? tag10;
    checkMissing(tag11);
    x16 = ld x;
    check L125() else D25();
  L135():
    x21 = force? x20;
    checkMissing(x21);
    c25 = `is.object`(x21);
    if c25 then L136() else L137(x21);
  L154():
    tag15 = force? tag14;
    checkMissing(tag15);
    st result = tag15;
    sst needBraces = TRUE;
    goto L13();
  L156():
    p9 = prom<V +>{
      tag16 = ld tag;
      tag17 = force? tag16;
      checkMissing(tag17);
      return tag17;
    };
    p10 = prom<V +>{
      MULTIARG = ld MULTIARG;
      MULTIARG1 = force? MULTIARG;
      checkMissing(MULTIARG1);
      return MULTIARG1;
    };
    r69 = dyn _in_1(p9, p10);
    check L157() else D38();
  L253():
    dr34 = tryDispatchBuiltin.1("[[", dep9);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L255() else L254(dr34);
  L254(dep11):
    __17 = ldf `[[` in base;
    r155 = dyn __17(dep11, 2);
    goto L59(r155);
  L268():
    st x = r165;
    goto L64();
  L279():
    result22 = ld result;
    check L281() else D97();
  L280():
    r172 = dyn base32("{}", <sym result>);
    goto L68(r172);
  D13():
    deopt 58 [i2];
  D25():
    deopt 97 [x16];
  D38():
    deopt 153 [r69];
  D97():
    deopt 375 [result22];
  L16(r40):
    st result = r40;
    goto L18();
  L23(dx19):
    r52 = seq_along(dx19);
    goto L22(r52);
  L26():
    x24 = `[[`(s1, i13, NULL, TRUE);
    st i = x24;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L140() else L141();
  L60(dx45):
    sst state = dx45;
    goto L61();
  L102():
    p = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      c12 = `is.object`(x9);
      if c12 then L1() else L2(x9);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", x9);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x11):
      i8 = ld i;
      i9 = force? i8;
      __ = ldf `[[` in base;
      r20 = dyn __(x11, i9);
      goto L0(r20);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      quoteBraces1 = ld quoteBraces;
      quoteBraces2 = force? quoteBraces1;
      checkMissing(quoteBraces2);
      return quoteBraces2;
    };
    r23 = dyn pr(p, p1);
    check L103() else D14();
  L113():
    tag8 = ld tag;
    check L115() else D21();
  L114():
    r39 = dyn base8(<sym tag>, <lang `[[`(dep, 1)>);
    goto L16(r39);
  L125():
    x17 = force? x16;
    checkMissing(x17);
    c22 = `is.object`(x17);
    if c22 then L126() else L127(x17);
  L136():
    dr14 = tryDispatchBuiltin.1("[[", x21);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L138() else L137(dr14);
  L137(x23):
    __7 = ldf `[[` in base;
    r51 = dyn __7(x23, 2);
    goto L23(r51);
  L139():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L146() else L147();
  L157():
    c32 = `as.logical`(r69);
    if c32 then L158() else L29();
  L255():
    dx40 = getTryDispatchBuiltinValue(dr34);
    goto L59(dx40);
  L256():
    dr36 = tryDispatchBuiltin.1("[", dx41);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L258() else L257(dr36);
  L257(dx43):
    __18 = ldf `[` in base;
    r156 = dyn __18(dx43, <int 1, 2>);
    goto L60(r156);
  L281():
    result23 = force? result22;
    checkMissing(result23);
    c63 = ldf c in base;
    r174 = dyn c63("{}", result23);
    check L282() else D98();
  D14():
    deopt 61 [i2, r23];
  D21():
    deopt 83 [tag8];
  D98():
    deopt 378 [r174];
  L20(dx13):
    c23 = `is.object`(dx13);
    if c23 then L129() else L130(dx13);
  L25(i18, r54):
    st result = r54;
    goto L24(i18);
  L27(r62):
    st result = r62;
    goto L13();
  L29():
    _in_2 = ldf `%in%`;
    check L171() else D45();
  L103():
    c13 = ldf c in base;
    r24 = dyn c13(result1, r23);
    check L104() else D15();
  L115():
    tag9 = force? tag8;
    checkMissing(tag9);
    dep = ld dep;
    check L116() else D22();
  L126():
    dr10 = tryDispatchBuiltin.1("[[", x17);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L128() else L127(dr10);
  L127(x19):
    __5 = ldf `[[` in base;
    r46 = dyn __5(x19, 1);
    goto L20(r46);
  L138():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L23(dx18);
  L140():
    result2 = ld result;
    check L142() else D28();
  L141():
    r53 = dyn base11(<sym result>, <lang pr(`[[`(`[[`(x, 2), i), quoteBraces)>);
    goto L25(i13, r53);
  L146():
    result4 = ld result;
    check L148() else D32();
  L147():
    r61 = dyn base12(<sym result>, "#endif\n");
    goto L27(r61);
  L158():
    tag18 = ld tag;
    check L159() else D39();
  L258():
    dx44 = getTryDispatchBuiltinValue(dr36);
    goto L60(dx44);
  L282():
    goto L68(r174);
  D15():
    deopt 63 [i2, r24];
  D22():
    deopt 85 [dep];
  D28():
    deopt 117 [i13, result2];
  D32():
    deopt 132 [result4];
  D39():
    deopt 154 [tag18];
  D45():
    deopt 177 [];
  L21(dx17):
    c24 = ldf c in base;
    r48 = dyn c24(tag11, dx17);
    check L132() else D26();
  L104():
    goto L11(i2, r24);
  L116():
    dep1 = force? dep;
    checkMissing(dep1);
    c20 = `is.object`(dep1);
    if c20 then L117() else L118(dep1);
  L128():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L20(dx12);
  L129():
    dr12 = tryDispatchBuiltin.1("[[", dx13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L131() else L130(dr12);
  L130(dx15):
    __6 = ldf `[[` in base;
    r47 = dyn __6(dx15, 1);
    goto L21(r47);
  L142():
    result3 = force? result2;
    checkMissing(result3);
    pr1 = ldf pr;
    check L143() else D29();
  L148():
    result5 = force? result4;
    checkMissing(result5);
    c30 = ldf c in base;
    r63 = dyn c30(result5, "#endif\n");
    check L149() else D33();
  L159():
    tag19 = force? tag18;
    checkMissing(tag19);
    st result = tag19;
    sym13 = ldf seq_along;
    base13 = ldf seq_along in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L160() else L161();
  L171():
    p13 = prom<V +>{
      tag20 = ld tag;
      tag21 = force? tag20;
      checkMissing(tag21);
      return tag21;
    };
    p14 = prom<V +>{
      EQN = ld EQN;
      EQN1 = force? EQN;
      checkMissing(EQN1);
      return EQN1;
    };
    r82 = dyn _in_2(p13, p14);
    check L172() else D46();
  D26():
    deopt 106 [r48];
  D29():
    deopt 120 [i13];
  D33():
    deopt 136 [r63];
  D46():
    deopt 180 [r82];
  L17(dx11):
    c21 = ldf c in base;
    r42 = dyn c21(tag9, dx11);
    check L120() else D23();
  L30(r71):
    s2 = toForSeq(r71);
    l2 = length(s2);
    i21 = 0;
    goto L31(i21);
  L117():
    dr8 = tryDispatchBuiltin.1("[[", dep1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L119() else L118(dr8);
  L118(dep3):
    __4 = ldf `[[` in base;
    r41 = dyn __4(dep3, 1);
    goto L17(r41);
  L131():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L21(dx16);
  L132():
    goto L19(r48);
  L143():
    p5 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      c27 = `is.object`(x26);
      if c27 then L2() else L3(x26);
    L0(dx21):
      c28 = `is.object`(dx21);
      if c28 then L5() else L6(dx21);
    L2():
      dr16 = tryDispatchBuiltin.1("[[", x26);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L4() else L3(dr16);
    L3(x28):
      __8 = ldf `[[` in base;
      r55 = dyn __8(x28, 2);
      goto L0(r55);
    L1(dx25):
      return dx25;
    L4():
      dx20 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx20);
    L5():
      dr18 = tryDispatchBuiltin.1("[[", dx21);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L7() else L6(dr18);
    L6(dx23):
      i19 = ld i;
      i20 = force? i19;
      __9 = ldf `[[` in base;
      r56 = dyn __9(dx23, i20);
      goto L1(r56);
    L7():
      dx24 = getTryDispatchBuiltinValue(dr18);
      goto L1(dx24);
    };
    p6 = prom<V +>{
      quoteBraces5 = ld quoteBraces;
      quoteBraces6 = force? quoteBraces5;
      checkMissing(quoteBraces6);
      return quoteBraces6;
    };
    r59 = dyn pr1(p5, p6);
    check L144() else D30();
  L149():
    goto L27(r63);
  L160():
    x29 = ld x;
    check L162() else D40();
  L161():
    r70 = dyn base13(<sym x>);
    goto L30(r70);
  L172():
    c36 = `as.logical`(r82);
    if c36 then L173() else L34();
  D23():
    deopt 91 [r42];
  D30():
    deopt 123 [i13, r59];
  D40():
    deopt 158 [x29];
  L31(i22):
    i23 = `+`.1(i22, 1);
    c33 = `<`.1(l2, i23);
    if c33 then L163() else L33();
  L34():
    tag24 = ld tag;
    check L194() else D58();
  L119():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L17(dx10);
  L120():
    goto L16(r42);
  L144():
    c29 = ldf c in base;
    r60 = dyn c29(result3, r59);
    check L145() else D31();
  L162():
    x30 = force? x29;
    checkMissing(x30);
    r72 = seq_along(x30);
    goto L30(r72);
  L173():
    tag22 = ld tag;
    check L174() else D47();
  D31():
    deopt 125 [i13, r60];
  D47():
    deopt 181 [tag22];
  D58():
    deopt 224 [tag24];
  L33():
    x31 = `[[`(s2, i23, NULL, TRUE);
    st i = x31;
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L164() else L165();
  L145():
    goto L25(i13, r60);
  L163():
    goto L13();
  L174():
    tag23 = force? tag22;
    checkMissing(tag23);
    st result = tag23;
    sst inEqn = 1;
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L175() else L176();
  L194():
    tag25 = force? tag24;
    checkMissing(tag25);
    st result = tag25;
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L195() else L196();
  L32(i28, r74):
    st result = r74;
    goto L31(i28);
  L35(r84):
    st result = r84;
    sst inEqn = 0;
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L181() else L182();
  L40(r103):
    r107 = `!`(r103);
    c43 = `as.logical`(r107);
    if c43 then L201() else L42();
  L164():
    result6 = ld result;
    check L166() else D41();
  L165():
    r73 = dyn base14(<sym result>, <lang pr(`[[`(x, i), quoteBraces)>);
    goto L32(i23, r73);
  L175():
    result8 = ld result;
    check L177() else D48();
  L176():
    r83 = dyn base15(<sym result>, <lang pr(`[[`(x, 1), quoteBraces)>);
    goto L35(r83);
  L195():
    sym19 = ldf attr;
    base19 = ldf attr in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L197() else L198();
  L196():
    r102 = dyn base18(<lang `<-`(option, attr(x, "Rd_option"))>);
    goto L40(r102);
  D41():
    deopt 163 [i23, result6];
  D48():
    deopt 189 [result8];
  L36(r91):
    r93 = `>`(r91, 1);
    c39 = `as.logical`(r93);
    if c39 then L185() else L37();
  L41(r105):
    st option = r105;
    c42 = `==`(r105, NULL);
    goto L40(c42);
  L42():
    goto L44();
  L44():
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L209() else L210();
  L166():
    result7 = force? result6;
    checkMissing(result7);
    pr2 = ldf pr;
    check L167() else D42();
  L177():
    result9 = force? result8;
    checkMissing(result9);
    pr3 = ldf pr;
    check L178() else D49();
  L181():
    x40 = ld x;
    check L183() else D52();
  L182():
    r90 = dyn base16(<sym x>);
    goto L36(r90);
  L197():
    x46 = ld x;
    check L199() else D59();
  L198():
    r104 = dyn base19(<sym x>, "Rd_option");
    goto L41(r104);
  L201():
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L202() else L203();
  D42():
    deopt 166 [i23];
  D49():
    deopt 192 [];
  D52():
    deopt 204 [x40];
  D59():
    deopt 230 [x46];
  L37():
    goto L39(NULL);
  L39(r101):
    goto L13();
  L43(r109):
    st result = r109;
    goto L44();
  L45(r116):
    st result = r116;
    sym22 = ldf seq_along;
    base22 = ldf seq_along in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L213() else L214();
  L167():
    p11 = prom<V +>{
      x32 = ld x;
      x33 = force? x32;
      checkMissing(x33);
      c34 = `is.object`(x33);
      if c34 then L1() else L2(x33);
    L0(dx27):
      return dx27;
    L1():
      dr20 = tryDispatchBuiltin.1("[[", x33);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(x35):
      i29 = ld i;
      i30 = force? i29;
      __10 = ldf `[[` in base;
      r75 = dyn __10(x35, i30);
      goto L0(r75);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx26);
    };
    p12 = prom<V +>{
      quoteBraces7 = ld quoteBraces;
      quoteBraces8 = force? quoteBraces7;
      checkMissing(quoteBraces8);
      return quoteBraces8;
    };
    r78 = dyn pr2(p11, p12);
    check L168() else D43();
  L178():
    p15 = prom<V +>{
      x36 = ld x;
      x37 = force? x36;
      checkMissing(x37);
      c37 = `is.object`(x37);
      if c37 then L1() else L2(x37);
    L0(dx29):
      return dx29;
    L1():
      dr22 = tryDispatchBuiltin.1("[[", x37);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(x39):
      __11 = ldf `[[` in base;
      r85 = dyn __11(x39, 1);
      goto L0(r85);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx28);
    };
    p16 = prom<V +>{
      quoteBraces9 = ld quoteBraces;
      quoteBraces10 = force? quoteBraces9;
      checkMissing(quoteBraces10);
      return quoteBraces10;
    };
    r88 = dyn pr3(p15, p16);
    check L179() else D50();
  L183():
    x41 = force? x40;
    checkMissing(x41);
    length = ldf length in base;
    r92 = dyn length(x41);
    check L184() else D53();
  L185():
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L186() else L187();
  L199():
    x47 = force? x46;
    checkMissing(x47);
    attr1 = ldf attr in base;
    r106 = dyn attr1(x47, "Rd_option");
    check L200() else D60();
  L202():
    result12 = ld result;
    check L204() else D61();
  L203():
    r108 = dyn base20(<sym result>, "[", <lang pr(option, quoteBraces)>, "]");
    goto L43(r108);
  L209():
    result14 = ld result;
    check L211() else D65();
  L210():
    r115 = dyn base21(<sym result>, "{");
    goto L45(r115);
  D43():
    deopt 169 [i23, r78];
  D50():
    deopt 195 [r88];
  D53():
    deopt 207 [r92];
  D60():
    deopt 234 [r106];
  D61():
    deopt 240 [result12];
  D65():
    deopt 256 [result14];
  L38(r95):
    st result = r95;
    goto L39(r95);
  L46(r119):
    s3 = toForSeq(r119);
    l3 = length(s3);
    i31 = 0;
    goto L47(i31);
  L168():
    c35 = ldf c in base;
    r79 = dyn c35(result7, r78);
    check L169() else D44();
  L179():
    c38 = ldf c in base;
    r89 = dyn c38(result9, r88);
    check L180() else D51();
  L184():
    goto L36(r92);
  L186():
    result10 = ld result;
    check L188() else D54();
  L187():
    r94 = dyn base17(<sym result>, <lang pr(`[[`(x, 2), quoteBraces)>);
    goto L38(r94);
  L200():
    goto L41(r106);
  L204():
    result13 = force? result12;
    checkMissing(result13);
    pr5 = ldf pr;
    check L205() else D62();
  L211():
    result15 = force? result14;
    checkMissing(result15);
    c45 = ldf c in base;
    r117 = dyn c45(result15, "{");
    check L212() else D66();
  L213():
    x48 = ld x;
    check L215() else D67();
  L214():
    r118 = dyn base22(<sym x>);
    goto L46(r118);
  D44():
    deopt 171 [i23, r79];
  D51():
    deopt 197 [r89];
  D54():
    deopt 212 [result10];
  D62():
    deopt 244 [];
  D66():
    deopt 260 [r117];
  D67():
    deopt 263 [x48];
  L47(i32):
    i33 = `+`.1(i32, 1);
    c46 = `<`.1(l3, i33);
    if c46 then L216() else L49();
  L169():
    goto L32(i23, r79);
  L180():
    goto L35(r89);
  L188():
    result11 = force? result10;
    checkMissing(result11);
    pr4 = ldf pr;
    check L189() else D55();
  L205():
    p19 = prom<V +>{
      option = ld option;
      option1 = force? option;
      checkMissing(option1);
      return option1;
    };
    p20 = prom<V +>{
      quoteBraces13 = ld quoteBraces;
      quoteBraces14 = force? quoteBraces13;
      checkMissing(quoteBraces14);
      return quoteBraces14;
    };
    r112 = dyn pr5(p19, p20);
    check L206() else D63();
  L212():
    goto L45(r117);
  L215():
    x49 = force? x48;
    checkMissing(x49);
    r120 = seq_along(x49);
    goto L46(r120);
  D55():
    deopt 215 [];
  D63():
    deopt 247 [r112];
  L49():
    x50 = `[[`(s3, i33, NULL, TRUE);
    st i = x50;
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L217() else L218();
  L189():
    p17 = prom<V +>{
      x42 = ld x;
      x43 = force? x42;
      checkMissing(x43);
      c40 = `is.object`(x43);
      if c40 then L1() else L2(x43);
    L0(dx31):
      return dx31;
    L1():
      dr24 = tryDispatchBuiltin.1("[[", x43);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(x45):
      __12 = ldf `[[` in base;
      r96 = dyn __12(x45, 2);
      goto L0(r96);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx30);
    };
    p18 = prom<V +>{
      quoteBraces11 = ld quoteBraces;
      quoteBraces12 = force? quoteBraces11;
      checkMissing(quoteBraces12);
      return quoteBraces12;
    };
    r99 = dyn pr4(p17, p18);
    check L190() else D56();
  L206():
    c44 = ldf c in base;
    r113 = dyn c44(result13, "[", r112, "]");
    check L207() else D64();
  L216():
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L223() else L224();
  D56():
    deopt 218 [r99];
  D64():
    deopt 250 [r113];
  L48(i38, r122):
    st result = r122;
    goto L47(i38);
  L50(r129):
    st result = r129;
    goto L13();
  L190():
    c41 = ldf c in base;
    r100 = dyn c41(result11, r99);
    check L191() else D57();
  L207():
    goto L43(r113);
  L217():
    result16 = ld result;
    check L219() else D68();
  L218():
    r121 = dyn base23(<sym result>, <lang pr(`[[`(x, i), quoteBraces)>);
    goto L48(i33, r121);
  L223():
    result18 = ld result;
    check L225() else D72();
  L224():
    r128 = dyn base24(<sym result>, "}");
    goto L50(r128);
  D57():
    deopt 220 [r100];
  D68():
    deopt 268 [i33, result16];
  D72():
    deopt 283 [result18];
  L191():
    goto L38(r100);
  L219():
    result17 = force? result16;
    checkMissing(result17);
    pr6 = ldf pr;
    check L220() else D69();
  L225():
    result19 = force? result18;
    checkMissing(result19);
    c49 = ldf c in base;
    r130 = dyn c49(result19, "}");
    check L226() else D73();
  D69():
    deopt 271 [i33];
  D73():
    deopt 287 [r130];
  L220():
    p21 = prom<V +>{
      x51 = ld x;
      x52 = force? x51;
      checkMissing(x52);
      c47 = `is.object`(x52);
      if c47 then L1() else L2(x52);
    L0(dx33):
      return dx33;
    L1():
      dr26 = tryDispatchBuiltin.1("[[", x52);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(x54):
      i39 = ld i;
      i40 = force? i39;
      __13 = ldf `[[` in base;
      r123 = dyn __13(x54, i40);
      goto L0(r123);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx32);
    };
    p22 = prom<V +>{
      quoteBraces15 = ld quoteBraces;
      quoteBraces16 = force? quoteBraces15;
      checkMissing(quoteBraces16);
      return quoteBraces16;
    };
    r126 = dyn pr6(p21, p22);
    check L221() else D70();
  L226():
    goto L50(r130);
  D70():
    deopt 274 [i33, r126];
  L221():
    c48 = ldf c in base;
    r127 = dyn c48(result17, r126);
    check L222() else D71();
  D71():
    deopt 276 [i33, r127];
  L222():
    goto L48(i33, r127);
  }
}