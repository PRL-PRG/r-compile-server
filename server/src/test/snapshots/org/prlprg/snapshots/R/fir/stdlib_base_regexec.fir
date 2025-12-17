fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4170804266;
    st regexec = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4170804266(pattern, text, `ignore.case`, perl, fixed, useBytes) {
  (reg pattern:*, reg text:*, reg ignore_case:*, reg perl:*, reg fixed:*, reg useBytes:*) -+> V { var pattern:*, var text:*, var `ignore.case`:*, reg ignore_case_isMissing:L, reg ignore_case_orDefault:*, var perl:*, reg perl_isMissing:L, reg perl_orDefault:*, var fixed:*, reg fixed_isMissing:L, reg fixed_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, reg is_factor:cls, reg text1:*, reg text2:V, reg p:p(V +), reg r1:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg c5:L, reg r3:V, reg levels:cls, reg text3:*, reg text4:V, reg p1:p(V +), reg r5:V, reg length:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg c8:L, reg r10:V, reg r11:V, reg text5:*, reg text6:V, reg length1:cls, reg r12:V, reg r13:V, reg c9:L, reg c10:V, reg c12:L, reg regexec:cls, reg pattern1:*, reg pattern2:V, reg p2:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg levels1:cls, reg text7:*, reg text8:V, reg p3:p(V +), reg r18:V, reg c13:cls, reg r19:V, reg p4:p(V +), reg ignore_case1:*, reg ignore_case2:V, reg p5:p(V +), reg perl1:*, reg perl2:V, reg p6:p(V +), reg fixed1:*, reg fixed2:V, reg p7:p(V +), reg useBytes1:*, reg useBytes2:V, reg p8:p(V +), reg r25:V, reg out:*, reg out1:V, reg c14:L, reg out3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg out6:V, reg r27:V, reg out7:*, reg out8:V, reg length2:cls, reg r28:V, reg __:cls, reg r29:V, reg out9:*, reg out10:V, reg c15:L, reg out12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg text9:*, reg text10:V, reg __1:cls, reg r30:V, reg outna:*, reg outna1:V, reg l:*, reg c16:L, reg outna3:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg outna10:V, reg l5:*, reg outna11:V, reg r32:V, reg text11:*, reg text12:V, reg is_na:cls, reg r33:V, reg ___:cls, reg r34:V, reg out13:*, reg out14:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg text13:*, reg text14:V, reg c17:L, reg r39:V, reg c18:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg text15:*, reg text16:V, reg as_character:cls, reg r42:V, reg perl3:*, reg perl4:V, reg r44:V, reg c19:L, reg c20:V, reg fixed3:*, reg fixed4:V, reg c22:L, reg c23:V, reg c25:L, reg perl5:*, reg perl6:V, reg c26:L, reg warning:cls, reg gettextf:cls, reg r45:V, reg p9:p(V +), reg r47:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r49:V, reg r50:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg r52:V, reg pattern3:*, reg pattern4:V, reg as_character1:cls, reg r53:V, reg text17:*, reg text18:V, reg ignore_case3:*, reg ignore_case4:V, reg fixed5:*, reg fixed6:V, reg useBytes3:*, reg useBytes4:V, reg regexec1:cls, reg r54:V, reg regexpr:cls, reg pattern5:*, reg pattern6:V, reg p10:p(V +), reg text19:*, reg text20:V, reg p11:p(V +), reg ignore_case5:*, reg ignore_case6:V, reg p12:p(V +), reg useBytes5:*, reg useBytes6:V, reg p13:p(V +), reg r61:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r62:V, reg r63:V, reg m:*, reg m1:V, reg attr:cls, reg r64:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r65:V, reg r66:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r67:V, reg r68:V, reg nm:*, reg nm1:V, reg nzchar:cls, reg r69:V, reg any:cls, reg r70:V, reg c27:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r71:V, reg r72:V, reg nm2:*, reg nm3:V, reg c28:cls, reg r73:V, reg r74:V, reg r75:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r76:V, reg r77:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r78:V, reg r79:V, reg text21:*, reg text22:V, reg length3:cls, reg r80:V, reg vector:cls, reg r81:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r82:V, reg r83:V, reg match_data_from_pos_and_len:cls, reg r84:V, reg list:cls, reg r85:V, reg l6:*, reg c29:L, reg r87:V, reg l8:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r94:V, reg r95:V, reg l11:*, reg r96:V, reg r97:V, reg m2:*, reg m3:V, reg is_na1:cls, reg r98:V, reg ___1:cls, reg r99:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r100:V, reg r101:V, reg m4:*, reg m5:V, reg is_na2:cls, reg r102:V, reg r103:V, reg m6:*, reg m7:V, reg r104:V, reg r105:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r106:V, reg r107:V, reg ind:*, reg ind1:V, reg any1:cls, reg r108:V, reg c30:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r109:V, reg r110:V, reg match_data_from_pos_and_len1:cls, reg p14:p(V +), reg p15:p(V +), reg r113:V, reg list1:cls, reg r114:V, reg l12:*, reg c31:L, reg r116:V, reg l14:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r118:V, reg dx9:V, reg ind2:*, reg ind3:V, reg ___2:cls, reg r119:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r121:V, reg r122:V, reg m8:*, reg m9:V, reg is_na3:cls, reg r123:V, reg r124:V, reg ind4:*, reg ind5:V, reg r125:V, reg r126:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r127:V, reg r128:V, reg ind6:*, reg ind7:V, reg any2:cls, reg r129:V, reg c32:L, reg cbind:cls, reg m10:*, reg m11:V, reg c33:L, reg m13:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ind8:*, reg ind9:V, reg __2:cls, reg r130:V, reg p16:p(V +), reg sym22:cls, reg base22:cls, reg guard22:L, reg r132:V, reg r133:V, reg m14:*, reg m15:V, reg attr1:cls, reg r134:V, reg c34:L, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg ind10:*, reg ind11:V, reg __3:cls, reg r137:V, reg p17:p(V +), reg r139:V, reg cbind1:cls, reg sym23:cls, reg base23:cls, reg guard23:L, reg r140:V, reg r141:V, reg m16:*, reg m17:V, reg attr2:cls, reg r142:V, reg c35:L, reg r144:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg ind12:*, reg ind13:V, reg __4:cls, reg r145:V, reg p18:p(V +), reg sym24:cls, reg base24:cls, reg guard24:L, reg r147:V, reg r148:V, reg m18:*, reg m19:V, reg attr3:cls, reg r149:V, reg c36:L, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg ind14:*, reg ind15:V, reg __5:cls, reg r152:V, reg p19:p(V +), reg r154:V, reg Map:cls, reg match_data_from_pos_and_len2:*, reg match_data_from_pos_and_len3:V, reg p20:p(V +), reg split:cls, reg pos:*, reg pos1:V, reg p21:p(V +), reg row:cls, reg pos2:*, reg pos3:V, reg p22:p(V +), reg r158:V, reg p23:p(V +), reg r160:V, reg p24:p(V +), reg split1:cls, reg len:*, reg len1:V, reg p25:p(V +), reg row1:cls, reg len2:*, reg len3:V, reg p26:p(V +), reg r164:V, reg p27:p(V +), reg r166:V, reg p28:p(V +), reg sym25:cls, reg base25:cls, reg guard25:L, reg r168:V, reg r169:V, reg nm4:*, reg nm5:V, reg list2:cls, reg r170:V, reg p29:p(V +), reg r172:V, reg l15:*, reg c37:L, reg r174:V, reg l17:*, reg dr18:V, reg dc9:L, reg dx18:V, reg r176:V, reg dx19:V, reg ind16:*, reg ind17:V, reg ___3:cls, reg r177:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r179:V, reg r180:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r181:V, reg r182:V, reg m20:*, reg m21:V, reg attr4:cls, reg r183:V, reg identical:cls, reg r184:V, reg c38:L, reg lapply:cls, reg y:*, reg y1:V, reg p30:p(V +), reg attr__:*, reg attr__1:V, reg p31:p(V +), reg r187:V, reg lapply1:cls, reg y2:*, reg y3:V, reg p32:p(V +), reg attr__2:*, reg attr__3:V, reg p33:p(V +), reg sym28:cls, reg base28:cls, reg guard28:L, reg r191:V, reg r192:V, reg m22:*, reg m23:V, reg attr5:cls, reg r193:V, reg p34:p(V +), reg r195:V |
    mkenv;
    st pattern = pattern;
    st text = text;
    ignore_case_isMissing = missing.0(ignore_case);
    if ignore_case_isMissing then L0(FALSE) else L0(ignore_case);
  L0(ignore_case_orDefault):
    st `ignore.case` = ignore_case_orDefault;
    perl_isMissing = missing.0(perl);
    if perl_isMissing then L1(FALSE) else L1(perl);
  L1(perl_orDefault):
    st perl = perl_orDefault;
    fixed_isMissing = missing.0(fixed);
    if fixed_isMissing then L2(FALSE) else L2(fixed);
  L2(fixed_orDefault):
    st fixed = fixed_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L3(FALSE) else L3(useBytes);
  L3(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    is_factor = ldf `is.factor`;
    check L51() else D0();
  D0():
    deopt 1 [];
  L51():
    p = prom<V +>{
      text1 = ld text;
      text2 = force? text1;
      checkMissing(text2);
      return text2;
    };
    r1 = dyn is_factor(p);
    check L52() else D1();
  D1():
    deopt 3 [r1];
  L52():
    c = `as.logical`(r1);
    if c then L53() else L4(c);
  L4(c2):
    c12 = `as.logical`(c2);
    if c12 then L64() else L7();
  L53():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L54() else L55();
  L5(c5, r3):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L59() else L60();
  L7():
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L91() else L92();
  L54():
    levels = ldf levels;
    check L56() else D2();
  L55():
    r2 = dyn base(<lang levels(text)>);
    goto L5(c, r2);
  L64():
    regexec = ldf regexec;
    check L65() else D7();
  D2():
    deopt 7 [c];
  D7():
    deopt 20 [];
  L6(c8, r10, r11):
    r13 = `<`(r10, r11);
    c9 = `as.logical`(r13);
    c10 = `&&`(c8, c9);
    goto L4(c10);
  L14(r38):
    r39 = `!`(r38);
    c18 = `as.logical`(r39);
    if c18 then L94() else L15();
  L56():
    p1 = prom<V +>{
      text3 = ld text;
      text4 = force? text3;
      checkMissing(text4);
      return text4;
    };
    r5 = dyn levels(p1);
    check L57() else D3();
  L59():
    text5 = ld text;
    check L61() else D5();
  L60():
    r9 = dyn base1(<sym text>);
    goto L6(c5, r3, r9);
  L65():
    p2 = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      levels1 = ldf levels;
      p3 = prom<V +>{
        text7 = ld text;
        text8 = force? text7;
        checkMissing(text8);
        return text8;
      };
      r18 = dyn levels1(p3);
      c13 = ldf c in base;
      r19 = dyn c13(r18, NA_STR);
      goto L0(r19);
    L2():
      r15 = dyn base2(<lang levels(text)>, NA_STR);
      goto L0(r15);
    };
    p5 = prom<V +>{
      ignore_case1 = ld `ignore.case`;
      ignore_case2 = force? ignore_case1;
      checkMissing(ignore_case2);
      return ignore_case2;
    };
    p6 = prom<V +>{
      perl1 = ld perl;
      perl2 = force? perl1;
      checkMissing(perl2);
      return perl2;
    };
    p7 = prom<V +>{
      fixed1 = ld fixed;
      fixed2 = force? fixed1;
      checkMissing(fixed2);
      return fixed2;
    };
    p8 = prom<V +>{
      useBytes1 = ld useBytes;
      useBytes2 = force? useBytes1;
      checkMissing(useBytes2);
      return useBytes2;
    };
    r25 = dyn regexec(p2, p4, p5, p6, p7, p8);
    check L66() else D8();
  L91():
    text13 = ld text;
    check L93() else D18();
  L92():
    r37 = dyn base5(<sym text>);
    goto L14(r37);
  D3():
    deopt 9 [c, r5];
  D5():
    deopt 13 [c5, r3, text5];
  D8():
    deopt 27 [r25];
  D18():
    deopt 62 [text13];
  L15():
    goto L17();
  L17():
    perl3 = ld perl;
    check L100() else D21();
  L57():
    length = ldf length in base;
    r6 = dyn length(r5);
    check L58() else D4();
  L61():
    text6 = force? text5;
    checkMissing(text6);
    length1 = ldf length in base;
    r12 = dyn length1(text6);
    check L62() else D6();
  L66():
    st out = r25;
    out = ld out;
    check L67() else D9();
  L93():
    text14 = force? text13;
    checkMissing(text14);
    c17 = `is.character`(text14);
    goto L14(c17);
  L94():
    sym6 = ldf `as.character`;
    base6 = ldf `as.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L95() else L96();
  D4():
    deopt 11 [c, r6];
  D6():
    deopt 16 [c5, r3, r12];
  D9():
    deopt 29 [out];
  D21():
    deopt 75 [perl3];
  L16(r41):
    st text = r41;
    goto L17();
  L58():
    goto L5(c, r6);
  L62():
    goto L6(c5, r3, r12);
  L67():
    out1 = force? out;
    checkMissing(out1);
    c14 = `is.object`(out1);
    if c14 then L68() else L69(out1);
  L95():
    text15 = ld text;
    check L97() else D19();
  L96():
    r40 = dyn base6(<sym text>);
    goto L16(r40);
  L100():
    perl4 = force? perl3;
    checkMissing(perl4);
    r44 = `!`(perl4);
    c19 = `as.logical`(r44);
    if c19 then L18(c19) else L101();
  D19():
    deopt 68 [text15];
  L8(dx1):
    st outna = dx1;
    out9 = ld out;
    check L75() else D12();
  L18(c20):
    c25 = `as.logical`(c20);
    if c25 then L104() else L19();
  L68():
    dr = tryDispatchBuiltin.1("[", out1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L70() else L69(dr);
  L69(out3):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L71() else L72();
  L97():
    text16 = force? text15;
    checkMissing(text16);
    as_character = ldf `as.character` in base;
    r42 = dyn as_character(text16);
    check L98() else D20();
  L101():
    fixed3 = ld fixed;
    check L102() else D22();
  D12():
    deopt 39 [out9];
  D20():
    deopt 71 [r42];
  D22():
    deopt 78 [c19, fixed3];
  L9(out6, r27):
    __ = ldf `[` in base;
    r29 = dyn __(out6, r27);
    goto L8(r29);
  L19():
    regexpr = ldf regexpr;
    check L123() else D33();
  L70():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L71():
    out7 = ld out;
    check L73() else D10();
  L72():
    r26 = dyn base3(<sym out>);
    goto L9(out3, r26);
  L75():
    out10 = force? out9;
    checkMissing(out10);
    c15 = `is.object`(out10);
    if c15 then L76() else L77(out10);
  L98():
    goto L16(r42);
  L102():
    fixed4 = force? fixed3;
    checkMissing(fixed4);
    c22 = `as.logical`(fixed4);
    c23 = `||`(c19, c22);
    goto L18(c23);
  L104():
    perl5 = ld perl;
    check L105() else D23();
  D10():
    deopt 33 [out3, out7];
  D23():
    deopt 81 [perl5];
  D33():
    deopt 113 [];
  L10(dx3):
    st out = dx3;
    outna = ld outna;
    check L80() else D14();
  L73():
    out8 = force? out7;
    checkMissing(out8);
    length2 = ldf length in base;
    r28 = dyn length2(out8);
    check L74() else D11();
  L76():
    dr2 = tryDispatchBuiltin.1("[", out10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L78() else L77(dr2);
  L77(out12):
    text9 = ld text;
    check L79() else D13();
  L105():
    perl6 = force? perl5;
    checkMissing(perl6);
    c26 = `as.logical`(perl6);
    if c26 then L106() else L20();
  L123():
    p10 = prom<V +>{
      pattern5 = ld pattern;
      pattern6 = force? pattern5;
      checkMissing(pattern6);
      return pattern6;
    };
    p11 = prom<V +>{
      text19 = ld text;
      text20 = force? text19;
      checkMissing(text20);
      return text20;
    };
    p12 = prom<V +>{
      ignore_case5 = ld `ignore.case`;
      ignore_case6 = force? ignore_case5;
      checkMissing(ignore_case6);
      return ignore_case6;
    };
    p13 = prom<V +>{
      useBytes5 = ld useBytes;
      useBytes6 = force? useBytes5;
      checkMissing(useBytes6);
      return useBytes6;
    };
    r61 = dyn regexpr[, , `ignore.case`, useBytes, perl](p10, p11, p12, p13, TRUE);
    check L124() else D34();
  D11():
    deopt 36 [out3, r28];
  D13():
    deopt 41 [out12, text9];
  D14():
    deopt 45 [outna];
  D34():
    deopt 122 [r61];
  L20():
    goto L21();
  L21():
    sym7 = ldf `.Internal`;
    base7 = ldf `.Internal` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L110() else L111();
  L74():
    goto L9(out3, r28);
  L78():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L79():
    text10 = force? text9;
    __1 = ldf `[` in base;
    r30 = dyn __1(out12, text10);
    goto L10(r30);
  L80():
    outna1 = force? outna;
    checkMissing(outna1);
    l = ld out;
    c16 = `is.object`(l);
    if c16 then L81() else L82(outna1, l);
  L106():
    warning = ldf warning;
    check L107() else D24();
  L124():
    st m = r61;
    sym9 = ldf attr;
    base9 = ldf attr in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L125() else L126();
  D24():
    deopt 84 [];
  L11(dx5):
    st out = dx5;
    out13 = ld out;
    check L88() else D17();
  L22(r50):
    popenv;
    return r50;
  L25(r63):
    st nm = r63;
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L129() else L130();
  L81():
    dr4 = tryDispatchBuiltin.0("[<-", l, outna1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L83() else L82(outna1, dr4);
  L82(outna3, l2):
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L84() else L85();
  L107():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      r45 = dyn gettextf("argument '%s' will be ignored", "perl = TRUE");
      return r45;
    };
    r47 = dyn warning[, domain](p9, NA_LGL);
    check L108() else D25();
  L110():
    sym8 = ldf `as.character`;
    base8 = ldf `as.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L112() else L113();
  L111():
    r49 = dyn base7(<lang regexec(as.character(pattern), text, ignore.case, fixed, useBytes)>);
    goto L22(r49);
  L125():
    m = ld m;
    check L127() else D35();
  L126():
    r62 = dyn base9(<sym m>, "capture.names");
    goto L25(r62);
  D17():
    deopt 56 [out13];
  D25():
    deopt 88 [r47];
  D35():
    deopt 126 [m];
  L12(outna10, l5, outna11, r32):
    ___ = ldf `[<-` in base;
    r34 = dyn ___(l5, outna11, r32);
    goto L11(r34);
  L23(r52):
    text17 = ld text;
    check L116() else D28();
  L26(r66):
    c27 = `as.logical`(r66);
    if c27 then L136() else L28();
  L83():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(dx4);
  L84():
    text11 = ld text;
    check L86() else D15();
  L85():
    r31 = dyn base4(<sym text>);
    goto L12(outna3, l2, outna1, r31);
  L88():
    out14 = force? out13;
    checkMissing(out14);
    popenv;
    return out14;
  L108():
    goto L21();
  L112():
    pattern3 = ld pattern;
    check L114() else D26();
  L113():
    r51 = dyn base8(<sym pattern>);
    goto L23(r51);
  L127():
    m1 = force? m;
    checkMissing(m1);
    attr = ldf attr in base;
    r64 = dyn attr(m1, "capture.names");
    check L128() else D36();
  L129():
    sym11 = ldf nzchar;
    base11 = ldf nzchar in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L131() else L132();
  L130():
    r65 = dyn base10(<lang nzchar(nm)>);
    goto L26(r65);
  D15():
    deopt 50 [outna3, l2, outna1, text11];
  D26():
    deopt 95 [pattern3];
  D28():
    deopt 99 [text17];
  D36():
    deopt 130 [r64];
  L27(r68):
    any = ldf any in base;
    r70 = dyn any(r68);
    check L135() else D39();
  L28():
    goto L30(NULL);
  L30(r74):
    st nm = r74;
    r75 = clos inner1717359296;
    st match_data_from_pos_and_len = r75;
    sym13 = ldf vector;
    base13 = ldf vector in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L142() else L143();
  L86():
    text12 = force? text11;
    checkMissing(text12);
    is_na = ldf `is.na` in base;
    r33 = dyn is_na(text12);
    check L87() else D16();
  L114():
    pattern4 = force? pattern3;
    checkMissing(pattern4);
    as_character1 = ldf `as.character` in base;
    r53 = dyn as_character1(pattern4);
    check L115() else D27();
  L116():
    text18 = force? text17;
    checkMissing(text18);
    ignore_case3 = ld `ignore.case`;
    check L117() else D29();
  L128():
    goto L25(r64);
  L131():
    nm = ld nm;
    check L133() else D37();
  L132():
    r67 = dyn base11(<sym nm>);
    goto L27(r67);
  L136():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L137() else L138();
  D16():
    deopt 53 [outna3, l2, outna1, r33];
  D27():
    deopt 98 [r53];
  D29():
    deopt 101 [ignore_case3];
  D37():
    deopt 136 [nm];
  D39():
    deopt 141 [r70];
  L29(r72):
    goto L30(r72);
  L31(r77):
    st y = r77;
    sym15 = ldf list;
    base15 = ldf list in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L149() else L150();
  L87():
    goto L12(outna3, l2, outna1, r33);
  L115():
    goto L23(r53);
  L117():
    ignore_case4 = force? ignore_case3;
    checkMissing(ignore_case4);
    fixed5 = ld fixed;
    check L118() else D30();
  L133():
    nm1 = force? nm;
    checkMissing(nm1);
    nzchar = ldf nzchar in base;
    r69 = dyn nzchar(nm1);
    check L134() else D38();
  L135():
    goto L26(r70);
  L137():
    nm2 = ld nm;
    check L139() else D40();
  L138():
    r71 = dyn base12("", <sym nm>);
    goto L29(r71);
  L142():
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L144() else L145();
  L143():
    r76 = dyn base13("list", <lang length(text)>);
    goto L31(r76);
  D30():
    deopt 103 [fixed5];
  D38():
    deopt 139 [r69];
  D40():
    deopt 145 [nm2];
  L32(r79):
    vector = ldf vector in base;
    r81 = dyn vector("list", r79);
    check L148() else D44();
  L33(r83):
    l6 = ld y;
    c29 = `is.object`(l6);
    if c29 then L154() else L155(r83, l6);
  L118():
    fixed6 = force? fixed5;
    checkMissing(fixed6);
    useBytes3 = ld useBytes;
    check L119() else D31();
  L134():
    goto L27(r69);
  L139():
    nm3 = force? nm2;
    checkMissing(nm3);
    c28 = ldf c in base;
    r73 = dyn c28("", nm3);
    check L140() else D41();
  L144():
    text21 = ld text;
    check L146() else D42();
  L145():
    r78 = dyn base14(<sym text>);
    goto L32(r78);
  L149():
    match_data_from_pos_and_len = ldf match_data_from_pos_and_len;
    check L151() else D45();
  L150():
    r82 = dyn base15(<lang match_data_from_pos_and_len(NA_INT, NA_INT)>);
    goto L33(r82);
  D31():
    deopt 105 [useBytes3];
  D41():
    deopt 148 [r73];
  D42():
    deopt 160 [text21];
  D44():
    deopt 165 [r81];
  D45():
    deopt 170 [];
  L34(dx7):
    st y = dx7;
    sym17 = ldf `is.na`;
    base17 = ldf `is.na` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L161() else L162();
  L119():
    useBytes4 = force? useBytes3;
    checkMissing(useBytes4);
    regexec1 = ldf regexec in base;
    r54 = dyn regexec1(r52, text18, ignore_case4, fixed6, useBytes4);
    check L120() else D32();
  L140():
    goto L29(r73);
  L146():
    text22 = force? text21;
    checkMissing(text22);
    length3 = ldf length in base;
    r80 = dyn length3(text22);
    check L147() else D43();
  L148():
    goto L31(r81);
  L151():
    r84 = dyn match_data_from_pos_and_len(NA_INT, NA_INT);
    check L152() else D46();
  L154():
    dr6 = tryDispatchBuiltin.0("[<-", l6, r83);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L156() else L155(r83, dr6);
  L155(r87, l8):
    sym16 = ldf `is.na`;
    base16 = ldf `is.na` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L157() else L158();
  D32():
    deopt 108 [r54];
  D43():
    deopt 163 [r80];
  D46():
    deopt 173 [r84];
  L35(r95, l11, r96, r97):
    ___1 = ldf `[<-` in base;
    r99 = dyn ___1(l11, r96, r97);
    goto L34(r99);
  L36(r101):
    r103 = `!`(r101);
    m6 = ld m;
    check L165() else D52();
  L120():
    goto L22(r54);
  L147():
    goto L32(r80);
  L152():
    list = ldf list in base;
    r85 = dyn list(r84);
    check L153() else D47();
  L156():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L34(dx6);
  L157():
    m2 = ld m;
    check L159() else D48();
  L158():
    r94 = dyn base16(<sym m>);
    goto L35(r87, l8, r83, r94);
  L161():
    m4 = ld m;
    check L163() else D50();
  L162():
    r100 = dyn base17(<sym m>);
    goto L36(r100);
  D47():
    deopt 175 [r85];
  D48():
    deopt 179 [r87, l8, r83, m2];
  D50():
    deopt 187 [m4];
  D52():
    deopt 191 [r103, m6];
  L153():
    goto L33(r85);
  L159():
    m3 = force? m2;
    checkMissing(m3);
    is_na1 = ldf `is.na` in base;
    r98 = dyn is_na1(m3);
    check L160() else D49();
  L163():
    m5 = force? m4;
    checkMissing(m5);
    is_na2 = ldf `is.na` in base;
    r102 = dyn is_na2(m5);
    check L164() else D51();
  L165():
    m7 = force? m6;
    checkMissing(m7);
    r104 = `==`(m7, -1);
    r105 = `&&`(r103, r104);
    st ind = r105;
    sym18 = ldf any;
    base18 = ldf any in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L166() else L167();
  D49():
    deopt 182 [r87, l8, r83, r98];
  D51():
    deopt 190 [r102];
  L37(r107):
    c30 = `as.logical`(r107);
    if c30 then L170() else L38();
  L160():
    goto L35(r87, l8, r83, r98);
  L164():
    goto L36(r102);
  L166():
    ind = ld ind;
    check L168() else D53();
  L167():
    r106 = dyn base18(<sym ind>);
    goto L37(r106);
  D53():
    deopt 199 [ind];
  L38():
    goto L41();
  L41():
    sym20 = ldf `is.na`;
    base20 = ldf `is.na` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L181() else L182();
  L168():
    ind1 = force? ind;
    checkMissing(ind1);
    any1 = ldf any in base;
    r108 = dyn any1(ind1);
    check L169() else D54();
  L170():
    sym19 = ldf list;
    base19 = ldf list in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L171() else L172();
  D54():
    deopt 202 [r108];
  L39(r110):
    l12 = ld y;
    c31 = `is.object`(l12);
    if c31 then L176() else L177(r110, l12);
  L42(r122):
    r124 = `!`(r122);
    ind4 = ld ind;
    check L185() else D61();
  L169():
    goto L37(r108);
  L171():
    match_data_from_pos_and_len1 = ldf match_data_from_pos_and_len;
    check L173() else D55();
  L172():
    r109 = dyn base19(<lang match_data_from_pos_and_len(`-`(1), `-`(1))>);
    goto L39(r109);
  L181():
    m8 = ld m;
    check L183() else D59();
  L182():
    r121 = dyn base20(<sym m>);
    goto L42(r121);
  D55():
    deopt 206 [];
  D59():
    deopt 221 [m8];
  D61():
    deopt 225 [r124, ind4];
  L40(r118, dx9):
    st y = dx9;
    goto L41();
  L173():
    p14 = prom<V +>{
      return -1;
    };
    p15 = prom<V +>{
      return -1;
    };
    r113 = dyn match_data_from_pos_and_len1(p14, p15);
    check L174() else D56();
  L176():
    dr8 = tryDispatchBuiltin.0("[<-", l12, r110);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L178() else L177(r110, dr8);
  L177(r116, l14):
    ind2 = ld ind;
    check L179() else D58();
  L183():
    m9 = force? m8;
    checkMissing(m9);
    is_na3 = ldf `is.na` in base;
    r123 = dyn is_na3(m9);
    check L184() else D60();
  L185():
    ind5 = force? ind4;
    checkMissing(ind5);
    r125 = `!`(ind5);
    r126 = `&&`(r124, r125);
    st ind = r126;
    sym21 = ldf any;
    base21 = ldf any in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L186() else L187();
  D56():
    deopt 209 [r113];
  D58():
    deopt 213 [r116, l14, r110, ind2];
  D60():
    deopt 224 [r123];
  L43(r128):
    c32 = `as.logical`(r128);
    if c32 then L190() else L44();
  L174():
    list1 = ldf list in base;
    r114 = dyn list1(r113);
    check L175() else D57();
  L178():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L40(r110, dx8);
  L179():
    ind3 = force? ind2;
    ___2 = ldf `[<-` in base;
    r119 = dyn ___2(l14, r110, ind3);
    goto L40(r116, r119);
  L184():
    goto L42(r123);
  L186():
    ind6 = ld ind;
    check L188() else D62();
  L187():
    r127 = dyn base21(<sym ind>);
    goto L43(r127);
  D57():
    deopt 211 [r114];
  D62():
    deopt 232 [ind6];
  L44():
    goto L46();
  L46():
    sym26 = ldf identical;
    base26 = ldf identical in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L202() else L203();
  L175():
    goto L39(r114);
  L188():
    ind7 = force? ind6;
    checkMissing(ind7);
    any2 = ldf any in base;
    r129 = dyn any2(ind7);
    check L189() else D63();
  L190():
    cbind = ldf cbind;
    check L191() else D64();
  D63():
    deopt 235 [r129];
  D64():
    deopt 237 [];
  L47(r180):
    c38 = `as.logical`(r180);
    if c38 then L209() else L49();
  L189():
    goto L43(r129);
  L191():
    p16 = prom<V +>{
      m10 = ld m;
      m11 = force? m10;
      checkMissing(m11);
      c33 = `is.object`(m11);
      if c33 then L1() else L2(m11);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", m11);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(m13):
      ind8 = ld ind;
      ind9 = force? ind8;
      __2 = ldf `[` in base;
      r130 = dyn __2(m13, ind9);
      goto L0(r130);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p17 = prom<V +>{
      sym22 = ldf attr;
      base22 = ldf attr in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L2() else L3();
    L0(r133):
      c34 = `is.object`(r133);
      if c34 then L4() else L5();
    L2():
      m14 = ld m;
      m15 = force? m14;
      checkMissing(m15);
      attr1 = ldf attr in base;
      r134 = dyn attr1(m15, "capture.start");
      goto L0(r134);
    L3():
      r132 = dyn base22(<sym m>, "capture.start");
      goto L0(r132);
    L1(dx13):
      return dx13;
    L4():
      dr12 = tryDispatchBuiltin.1("[", r133);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L6() else L5();
    L5():
      ind10 = ld ind;
      ind11 = force? ind10;
      __3 = ldf `[` in base;
      r137 = dyn __3(r133, ind11, <missing>, FALSE);
      goto L1(r137);
    L6():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L1(dx12);
    };
    r139 = dyn cbind(p16, p17);
    check L192() else D65();
  L202():
    sym27 = ldf attr;
    base27 = ldf attr in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L204() else L205();
  L203():
    r179 = dyn base26(<lang attr(m, "useBytes")>, TRUE);
    goto L47(r179);
  D65():
    deopt 240 [r139];
  L48(r182):
    identical = ldf identical in base;
    r184 = dyn identical(r182, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L208() else D73();
  L49():
    goto L50();
  L50():
    lapply1 = ldf lapply;
    check L213() else D76();
  L192():
    st pos = r139;
    cbind1 = ldf cbind;
    check L193() else D66();
  L204():
    m20 = ld m;
    check L206() else D71();
  L205():
    r181 = dyn base27(<sym m>, "useBytes");
    goto L48(r181);
  L209():
    lapply = ldf lapply;
    check L210() else D74();
  D66():
    deopt 243 [];
  D71():
    deopt 266 [m20];
  D73():
    deopt 280 [r184];
  D74():
    deopt 282 [];
  D76():
    deopt 292 [];
  L193():
    p18 = prom<V +>{
      sym23 = ldf attr;
      base23 = ldf attr in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L2() else L3();
    L0(r141):
      c35 = `is.object`(r141);
      if c35 then L4() else L5(r141);
    L2():
      m16 = ld m;
      m17 = force? m16;
      checkMissing(m17);
      attr2 = ldf attr in base;
      r142 = dyn attr2(m17, "match.length");
      goto L0(r142);
    L3():
      r140 = dyn base23(<sym m>, "match.length");
      goto L0(r140);
    L1(dx15):
      return dx15;
    L4():
      dr14 = tryDispatchBuiltin.1("[", r141);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L6() else L5(dr14);
    L5(r144):
      ind12 = ld ind;
      ind13 = force? ind12;
      __4 = ldf `[` in base;
      r145 = dyn __4(r144, ind13);
      goto L1(r145);
    L6():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L1(dx14);
    };
    p19 = prom<V +>{
      sym24 = ldf attr;
      base24 = ldf attr in base;
      guard24 = `==`.4(sym24, base24);
      if guard24 then L2() else L3();
    L0(r148):
      c36 = `is.object`(r148);
      if c36 then L4() else L5();
    L2():
      m18 = ld m;
      m19 = force? m18;
      checkMissing(m19);
      attr3 = ldf attr in base;
      r149 = dyn attr3(m19, "capture.length");
      goto L0(r149);
    L3():
      r147 = dyn base24(<sym m>, "capture.length");
      goto L0(r147);
    L1(dx17):
      return dx17;
    L4():
      dr16 = tryDispatchBuiltin.1("[", r148);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L6() else L5();
    L5():
      ind14 = ld ind;
      ind15 = force? ind14;
      __5 = ldf `[` in base;
      r152 = dyn __5(r148, ind15, <missing>, FALSE);
      goto L1(r152);
    L6():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L1(dx16);
    };
    r154 = dyn cbind1(p18, p19);
    check L194() else D67();
  L206():
    m21 = force? m20;
    checkMissing(m21);
    attr4 = ldf attr in base;
    r183 = dyn attr4(m21, "useBytes");
    check L207() else D72();
  L208():
    goto L47(r184);
  L210():
    p30 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p31 = prom<V +>{
      attr__ = ld `attr<-`;
      attr__1 = force? attr__;
      checkMissing(attr__1);
      return attr__1;
    };
    r187 = dyn lapply(p30, p31, "useBytes", TRUE);
    check L211() else D75();
  L213():
    p32 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p33 = prom<V +>{
      attr__2 = ld `attr<-`;
      attr__3 = force? attr__2;
      checkMissing(attr__3);
      return attr__3;
    };
    p34 = prom<V +>{
      sym28 = ldf attr;
      base28 = ldf attr in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L1() else L2();
    L0(r192):
      return r192;
    L1():
      m22 = ld m;
      m23 = force? m22;
      checkMissing(m23);
      attr5 = ldf attr in base;
      r193 = dyn attr5(m23, "index.type");
      goto L0(r193);
    L2():
      r191 = dyn base28(<sym m>, "index.type");
      goto L0(r191);
    };
    r195 = dyn lapply1(p32, p33, "index.type", p34);
    check L214() else D77();
  D67():
    deopt 246 [r154];
  D72():
    deopt 270 [r183];
  D75():
    deopt 287 [r187];
  D77():
    deopt 297 [r195];
  L194():
    st len = r154;
    Map = ldf Map;
    check L195() else D68();
  L207():
    goto L48(r183);
  L211():
    st y = r187;
    goto L50();
  L214():
    popenv;
    return r195;
  D68():
    deopt 249 [];
  L195():
    p20 = prom<V +>{
      match_data_from_pos_and_len2 = ld match_data_from_pos_and_len;
      match_data_from_pos_and_len3 = force? match_data_from_pos_and_len2;
      checkMissing(match_data_from_pos_and_len3);
      return match_data_from_pos_and_len3;
    };
    p24 = prom<V +>{
      split = ldf split;
      p21 = prom<V +>{
        pos = ld pos;
        pos1 = force? pos;
        checkMissing(pos1);
        return pos1;
      };
      p23 = prom<V +>{
        row = ldf row;
        p22 = prom<V +>{
          pos2 = ld pos;
          pos3 = force? pos2;
          checkMissing(pos3);
          return pos3;
        };
        r158 = dyn row(p22);
        return r158;
      };
      r160 = dyn split(p21, p23);
      return r160;
    };
    p28 = prom<V +>{
      split1 = ldf split;
      p25 = prom<V +>{
        len = ld len;
        len1 = force? len;
        checkMissing(len1);
        return len1;
      };
      p27 = prom<V +>{
        row1 = ldf row;
        p26 = prom<V +>{
          len2 = ld len;
          len3 = force? len2;
          checkMissing(len3);
          return len3;
        };
        r164 = dyn row1(p26);
        return r164;
      };
      r166 = dyn split1(p25, p27);
      return r166;
    };
    p29 = prom<V +>{
      sym25 = ldf list;
      base25 = ldf list in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L1() else L2();
    L0(r169):
      return r169;
    L1():
      nm4 = ld nm;
      nm5 = force? nm4;
      checkMissing(nm5);
      list2 = ldf list in base;
      r170 = dyn list2(nm5);
      goto L0(r170);
    L2():
      r168 = dyn base25(<sym nm>);
      goto L0(r168);
    };
    r172 = dyn Map(p20, p24, p28, p29);
    check L196() else D69();
  D69():
    deopt 254 [r172];
  L196():
    l15 = ld y;
    c37 = `is.object`(l15);
    if c37 then L197() else L198(r172, l15);
  L45(r176, dx19):
    st y = dx19;
    goto L46();
  L197():
    dr18 = tryDispatchBuiltin.0("[<-", l15, r172);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L199() else L198(r172, dr18);
  L198(r174, l17):
    ind16 = ld ind;
    check L200() else D70();
  D70():
    deopt 256 [r174, l17, r172, ind16];
  L199():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L45(r172, dx18);
  L200():
    ind17 = force? ind16;
    ___3 = ldf `[<-` in base;
    r177 = dyn ___3(l17, r172, ind17);
    goto L45(r174, r177);
  }
}
fun inner1717359296(pos, len, nm) {
  (reg pos:*, reg len:*, reg nm:*) -+> V { var pos:*, var len:*, var nm:*, reg nm_isMissing:L, reg nm_orDefault:*, reg len1:*, reg len2:V, reg l:*, reg attr__:cls, reg r:V, reg nm1:*, reg nm2:V, reg l1:*, reg names__:cls, reg r1:V, reg pos1:*, reg pos2:V |
    mkenv;
    st pos = pos;
    st len = len;
    nm_isMissing = missing.0(nm);
    if nm_isMissing then L0(NULL) else L0(nm);
  L0(nm_orDefault):
    st nm = nm_orDefault;
    len1 = ld len;
    check L1() else D0();
  D0():
    deopt 0 [len1];
  L1():
    len2 = force? len1;
    checkMissing(len2);
    l = ld pos;
    attr__ = ldf `attr<-`;
    check L2() else D1();
  D1():
    deopt 3 [len2, l, len2];
  L2():
    r = dyn attr__(l, NULL, "match.length", len2);
    check L3() else D2();
  D2():
    deopt 6 [len2, r];
  L3():
    st pos = r;
    nm1 = ld nm;
    check L4() else D3();
  D3():
    deopt 8 [nm1];
  L4():
    nm2 = force? nm1;
    checkMissing(nm2);
    l1 = ld pos;
    names__ = ldf `names<-`;
    check L5() else D4();
  D4():
    deopt 11 [nm2, l1, nm2];
  L5():
    r1 = dyn names__(l1, NULL, nm2);
    check L6() else D5();
  D5():
    deopt 13 [nm2, r1];
  L6():
    st pos = r1;
    pos1 = ld pos;
    check L7() else D6();
  D6():
    deopt 15 [pos1];
  L7():
    pos2 = force? pos1;
    checkMissing(pos2);
    popenv;
    return pos2;
  }
}