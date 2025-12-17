fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2658604929;
    st parse_Rd = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2658604929(file, srcfile, encoding, verbose, fragment, warningCalls, macros, permissive) {
  (reg file:*, reg srcfile:*, reg encoding:*, reg verbose:*, reg fragment:*, reg warningCalls:*, reg macros:*, reg permissive:*) -+> V { var file:*, var srcfile:*, reg srcfile_isMissing:L, reg srcfile_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var fragment:*, reg fragment_isMissing:L, reg fragment_orDefault:*, var warningCalls:*, reg warningCalls_isMissing:L, reg warningCalls_orDefault:*, var macros:*, reg macros_isMissing:L, reg macros_orDefault:*, reg file_path:cls, reg R_home:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var permissive:*, reg permissive_isMissing:L, reg permissive_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg file1:*, reg file2:V, reg c:L, reg c1:L, reg file3:*, reg file4:V, reg file5:*, reg file6:V, reg r6:V, reg c2:L, reg stdin:cls, reg r7:V, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg missing:cls, reg r11:V, reg c3:L, reg srcfile1:cls, reg file7:*, reg file8:V, reg p2:p(V +), reg r13:V, reg readLines:cls, reg file9:*, reg file10:V, reg p3:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg macros1:*, reg macros2:V, reg c4:L, reg c5:L, reg initialRdMacros:cls, reg macros3:*, reg macros4:V, reg p4:p(V +), reg r20:V, reg l:*, reg c6:L, reg r23:S, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg lines:*, reg lines1:V, reg r26:V, reg ___:cls, reg r27:V, reg grep:cls, reg lines2:*, reg lines3:V, reg p5:p(V +), reg r29:V, reg grep1:cls, reg enc:*, reg enc1:V, reg p6:p(V +), reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg enc2:*, reg enc3:V, reg length:cls, reg r34:V, reg c7:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg enc4:*, reg enc5:V, reg length1:cls, reg r37:V, reg r38:V, reg c8:L, reg warning:cls, reg file11:*, reg file12:V, reg p7:p(V +), reg warningCalls1:*, reg warningCalls2:V, reg p8:p(V +), reg r41:V, reg enc6:*, reg enc7:V, reg c9:L, reg enc9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r43:V, reg sub:cls, reg enc10:*, reg enc11:V, reg p9:p(V +), reg r45:V, reg verbose1:*, reg verbose2:V, reg c10:L, reg message:cls, reg enc12:*, reg enc13:V, reg p10:p(V +), reg r47:V, reg _in_:cls, reg enc14:*, reg enc15:V, reg p11:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg c11:cls, reg r52:V, reg p12:p(V +), reg r54:V, reg c12:L, reg r55:V, reg enc16:*, reg enc17:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r57:V, reg r58:V, reg encoding1:*, reg encoding2:V, reg length2:cls, reg r59:V, reg r60:V, reg c13:L, reg c14:V, reg encoding3:*, reg encoding4:V, reg r61:V, reg c16:L, reg c17:V, reg c19:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r63:V, reg r64:V, reg srcfile2:*, reg srcfile3:V, reg inherits:cls, reg r65:V, reg r66:V, reg c20:L, reg srcfile4:cls, reg file13:*, reg file14:V, reg p13:p(V +), reg r68:V, reg basename:cls, reg srcfile5:*, reg srcfile6:V, reg c21:L, reg srcfile8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r70:V, reg p14:p(V +), reg r72:V, reg encoding5:*, reg encoding6:V, reg l3:*, reg c22:L, reg encoding8:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r73:V, reg l6:*, reg c23:L, reg r75:S, reg l8:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r78:V, reg encoding11:*, reg encoding12:V, reg r79:V, reg c24:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r80:V, reg r81:V, reg iconv:cls, reg lines4:*, reg lines5:V, reg p15:p(V +), reg r83:V, reg anyNA:cls, reg r84:V, reg c25:L, reg stop:cls, reg file15:*, reg file16:V, reg p16:p(V +), reg warningCalls3:*, reg warningCalls4:V, reg p17:p(V +), reg r87:V, reg r88:V, reg config_val_to_logical:cls, reg Sys_getenv:cls, reg r90:V, reg p18:p(V +), reg r92:V, reg _in_1:cls, reg encoding13:*, reg encoding14:V, reg p19:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r94:V, reg r95:V, reg c26:cls, reg r96:V, reg p20:p(V +), reg r98:V, reg c27:L, reg c29:V, reg l10n_info:cls, reg r99:V, reg c30:L, reg c32:L, reg r101:V, reg dr10:V, reg dc5:L, reg dx10:V, reg c34:L, reg dx11:V, reg __1:cls, reg r102:V, reg c35:L, reg c36:V, reg c38:L, reg _in_2:cls, reg encoding15:*, reg encoding16:V, reg p21:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r105:V, reg r106:V, reg c39:cls, reg r107:V, reg p22:p(V +), reg r109:V, reg c40:L, reg validUTF8:cls, reg lines6:*, reg lines7:V, reg p23:p(V +), reg r111:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r112:V, reg r113:V, reg valid:*, reg valid1:V, reg r114:V, reg any:cls, reg r115:V, reg c41:L, reg validate:*, reg validate1:V, reg c42:L, reg stop1:cls, reg sprintf:cls, reg sQuote:cls, reg file17:*, reg file18:V, reg p24:p(V +), reg r117:V, reg p25:p(V +), reg r119:V, reg p26:p(V +), reg r121:V, reg r122:V, reg warning1:cls, reg sprintf1:cls, reg sQuote1:cls, reg file19:*, reg file20:V, reg p27:p(V +), reg r124:V, reg p28:p(V +), reg r126:V, reg p29:p(V +), reg r128:V, reg r129:V, reg encoding17:*, reg encoding18:V, reg r131:V, reg c43:L, reg iconv1:cls, reg lines8:*, reg lines9:V, reg p30:p(V +), reg encoding19:*, reg encoding20:V, reg p31:p(V +), reg r134:V, reg charToRaw:cls, reg lines10:*, reg lines11:V, reg c44:L, reg lines13:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __2:cls, reg r136:V, reg p32:p(V +), reg r138:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r139:V, reg r140:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r141:V, reg r142:V, reg bytes:*, reg bytes1:V, reg c45:L, reg bytes3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __3:cls, reg r143:V, reg as_integer:cls, reg r144:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r145:V, reg r146:V, reg c46:cls, reg r147:V, reg identical:cls, reg r148:V, reg c47:L, reg rawToChar:cls, reg bytes4:*, reg bytes5:V, reg c48:L, reg bytes7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __4:cls, reg r149:V, reg p33:p(V +), reg r151:V, reg l9:*, reg c49:L, reg r153:V, reg l11:*, reg dr18:V, reg dc9:L, reg dx18:V, reg r155:V, reg dx19:V, reg ___1:cls, reg r156:V, reg file21:cls, reg r157:V, reg writeLines:cls, reg lines14:*, reg lines15:V, reg p34:p(V +), reg tcon:*, reg tcon1:V, reg p35:p(V +), reg r160:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r161:V, reg on_exit:cls, reg r163:V, reg config_val_to_logical1:cls, reg Sys_getenv1:cls, reg r164:V, reg p36:p(V +), reg r166:V, reg permissive1:*, reg permissive2:V, reg c50:L, reg withCallingHandlers:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r167:V, reg r168:V, reg C_parseRd:*, reg C_parseRd1:V, reg tcon2:*, reg tcon3:V, reg srcfile9:*, reg srcfile10:V, reg verbose3:*, reg verbose4:V, reg basename1:*, reg basename2:V, reg fragment1:*, reg fragment2:V, reg warningCalls5:*, reg warningCalls6:V, reg macros5:*, reg macros6:V, reg warndups:*, reg warndups1:V, reg _External2:cls, reg r169:V, reg p37:p(V +), reg r171:cls, reg p38:p(V +), reg r173:V, reg r174:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r175:V, reg C_parseRd2:*, reg C_parseRd3:V, reg tcon4:*, reg tcon5:V, reg srcfile11:*, reg srcfile12:V, reg verbose5:*, reg verbose6:V, reg basename3:*, reg basename4:V, reg fragment3:*, reg fragment4:V, reg warningCalls7:*, reg warningCalls8:V, reg macros7:*, reg macros8:V, reg warndups2:*, reg warndups3:V, reg _External3:cls, reg r176:V, reg expandDynamicFlags:cls, reg result:*, reg result1:V, reg p39:p(V +), reg r178:V, reg permissive3:*, reg permissive4:V, reg c51:L, reg permissify:cls, reg result2:*, reg result3:V, reg p40:p(V +), reg r180:V, reg result4:*, reg result5:V |
    mkenv;
    st file = file;
    srcfile_isMissing = missing.0(srcfile);
    if srcfile_isMissing then L0(NULL) else L0(srcfile);
  L0(srcfile_orDefault):
    st srcfile = srcfile_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L1("unknown") else L1(encoding);
  L1(encoding_orDefault):
    st encoding = encoding_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L2(FALSE) else L2(verbose);
  L2(verbose_orDefault):
    st verbose = verbose_orDefault;
    fragment_isMissing = missing.0(fragment);
    if fragment_isMissing then L3(FALSE) else L3(fragment);
  L3(fragment_orDefault):
    st fragment = fragment_orDefault;
    warningCalls_isMissing = missing.0(warningCalls);
    if warningCalls_isMissing then L4(TRUE) else L4(warningCalls);
  L4(warningCalls_orDefault):
    st warningCalls = warningCalls_orDefault;
    macros_isMissing = missing.0(macros);
    if macros_isMissing then L5() else L6(macros);
  L5():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        R_home = ldf `R.home`;
        r = dyn R_home("share");
        return r;
      };
      r2 = dyn file_path(p, "Rd", "macros", "system.Rd");
      return r2;
    };
    goto L6(p1);
  L6(macros_orDefault):
    st macros = macros_orDefault;
    permissive_isMissing = missing.0(permissive);
    if permissive_isMissing then L7(FALSE) else L7(permissive);
  L7(permissive_orDefault):
    st permissive = permissive_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L65() else L66();
  L8(r5):
    c1 = `as.logical`(r5);
    if c1 then L68() else L9();
  L65():
    file1 = ld file;
    check L67() else D0();
  L66():
    r4 = dyn base(<sym file>);
    goto L8(r4);
  D0():
    deopt 1 [file1];
  L9():
    st file0 = "<connection>";
    goto L14();
  L14():
    readLines = ldf readLines;
    check L82() else D7();
  L67():
    file2 = force? file1;
    checkMissing(file2);
    c = `is.character`(file2);
    goto L8(c);
  L68():
    file3 = ld file;
    check L69() else D1();
  D1():
    deopt 4 [file3];
  D7():
    deopt 29 [];
  L69():
    file4 = force? file3;
    checkMissing(file4);
    st file0 = file4;
    file5 = ld file;
    check L70() else D2();
  L82():
    p3 = prom<V +>{
      file9 = ld file;
      file10 = force? file9;
      checkMissing(file10);
      return file10;
    };
    r16 = dyn readLines[, warn](p3, FALSE);
    check L83() else D8();
  D2():
    deopt 7 [file5];
  D8():
    deopt 33 [r16];
  L70():
    file6 = force? file5;
    checkMissing(file6);
    r6 = `==`(file6, "");
    c2 = `as.logical`(r6);
    if c2 then L71() else L10();
  L83():
    st lines = r16;
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L84() else L85();
  L10():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L75() else L76();
  L11(r8):
    goto L14();
  L15(r18):
    c5 = `as.logical`(r18);
    if c5 then L87() else L16();
  L71():
    stdin = ldf stdin;
    check L72() else D3();
  L84():
    macros1 = ld macros;
    check L86() else D9();
  L85():
    r17 = dyn base2(<sym macros>);
    goto L15(r17);
  D3():
    deopt 12 [];
  D9():
    deopt 36 [macros1];
  L12(r10):
    c3 = `as.logical`(r10);
    if c3 then L77() else L13();
  L16():
    goto L17();
  L17():
    l = ld lines;
    c6 = `is.object`(l);
    if c6 then L91() else L92("", l);
  L72():
    r7 = dyn stdin();
    check L73() else D4();
  L75():
    missing = ldf missing in base;
    r11 = dyn missing(<sym srcfile>);
    goto L12(r11);
  L76():
    r9 = dyn base1(<sym srcfile>);
    goto L12(r9);
  L86():
    macros2 = force? macros1;
    checkMissing(macros2);
    c4 = `is.character`(macros2);
    goto L15(c4);
  L87():
    initialRdMacros = ldf initialRdMacros;
    check L88() else D10();
  D4():
    deopt 13 [r7];
  D10():
    deopt 40 [];
  L13():
    goto L11(NULL);
  L18(dx1):
    st lines = dx1;
    grep = ldf grep;
    check L95() else D13();
  L73():
    st file = r7;
    goto L11(r7);
  L77():
    srcfile1 = ldf srcfile;
    check L78() else D5();
  L88():
    p4 = prom<V +>{
      macros3 = ld macros;
      macros4 = force? macros3;
      checkMissing(macros4);
      return macros4;
    };
    r20 = dyn initialRdMacros[macros](p4);
    check L89() else D11();
  L91():
    dr = tryDispatchBuiltin.0("[<-", l, "");
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L93() else L92("", dr);
  L92(r23, l2):
    lines = ld lines;
    check L94() else D12();
  D5():
    deopt 19 [];
  D11():
    deopt 43 [r20];
  D12():
    deopt 50 [r23, l2, "", lines];
  D13():
    deopt 57 [];
  L78():
    p2 = prom<V +>{
      file7 = ld file;
      file8 = force? file7;
      checkMissing(file8);
      return file8;
    };
    r13 = dyn srcfile1(p2);
    check L79() else D6();
  L89():
    st macros = r20;
    goto L17();
  L93():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  L94():
    lines1 = force? lines;
    checkMissing(lines1);
    r26 = `==`(lines1, "\\non_function{}");
    ___ = ldf `[<-` in base;
    r27 = dyn ___(l2, "", r26);
    goto L18(r27);
  L95():
    p5 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      return lines3;
    };
    r29 = dyn grep[, , fixed, useBytes, value]("\\encoding{", p5, TRUE, TRUE, TRUE);
    check L96() else D14();
  D6():
    deopt 21 [r13];
  D14():
    deopt 66 [r29];
  L79():
    st srcfile = r13;
    goto L11(r13);
  L96():
    st enc = r29;
    grep1 = ldf grep;
    check L97() else D15();
  D15():
    deopt 69 [];
  L97():
    p6 = prom<V +>{
      enc = ld enc;
      enc1 = force? enc;
      checkMissing(enc1);
      return enc1;
    };
    r31 = dyn grep1[, , value]("^[[:space:]]*\\\\encoding\\{([^}]*)\\}.*", p6, TRUE);
    check L98() else D16();
  D16():
    deopt 74 [r31];
  L98():
    st enc = r31;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L99() else L100();
  L19(r33):
    c7 = `as.logical`(r33);
    if c7 then L103() else L20();
  L99():
    enc2 = ld enc;
    check L101() else D17();
  L100():
    r32 = dyn base3(<sym enc>);
    goto L19(r32);
  D17():
    deopt 78 [enc2];
  L20():
    goto L29();
  L29():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L129() else L130();
  L101():
    enc3 = force? enc2;
    checkMissing(enc3);
    length = ldf length in base;
    r34 = dyn length(enc3);
    check L102() else D18();
  L103():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L104() else L105();
  D18():
    deopt 81 [r34];
  L21(r36):
    r38 = `>`(r36, 1);
    c8 = `as.logical`(r38);
    if c8 then L108() else L22();
  L30(r58):
    r60 = `!=`(r58, 1);
    c13 = `as.logical`(r60);
    if c13 then L31(c13) else L133();
  L102():
    goto L19(r34);
  L104():
    enc4 = ld enc;
    check L106() else D19();
  L105():
    r35 = dyn base4(<sym enc>);
    goto L21(r35);
  L129():
    encoding1 = ld encoding;
    check L131() else D32();
  L130():
    r57 = dyn base6(<sym encoding>);
    goto L30(r57);
  D19():
    deopt 84 [enc4];
  D32():
    deopt 139 [encoding1];
  L22():
    goto L23();
  L23():
    enc6 = ld enc;
    check L112() else D23();
  L31(c14):
    c19 = `as.logical`(c14);
    if c19 then L136() else L32();
  L106():
    enc5 = force? enc4;
    checkMissing(enc5);
    length1 = ldf length in base;
    r37 = dyn length1(enc5);
    check L107() else D20();
  L108():
    warning = ldf warning;
    check L109() else D21();
  L131():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    length2 = ldf length in base;
    r59 = dyn length2(encoding2);
    check L132() else D33();
  L133():
    encoding3 = ld encoding;
    check L134() else D34();
  D20():
    deopt 87 [r37];
  D21():
    deopt 91 [];
  D23():
    deopt 101 [enc6];
  D33():
    deopt 142 [r59];
  D34():
    deopt 145 [c13, encoding3];
  L32():
    goto L33();
  L33():
    sym7 = ldf inherits;
    base7 = ldf inherits in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L138() else L139();
  L107():
    goto L21(r37);
  L109():
    p7 = prom<V +>{
      file11 = ld file0;
      file12 = force? file11;
      checkMissing(file12);
      return file12;
    };
    p8 = prom<V +>{
      warningCalls1 = ld warningCalls;
      warningCalls2 = force? warningCalls1;
      checkMissing(warningCalls2);
      return warningCalls2;
    };
    r41 = dyn warning[, , domain, `call.`](p7, ": multiple \\encoding lines, using the first", NA_LGL, p8);
    check L110() else D22();
  L112():
    enc7 = force? enc6;
    checkMissing(enc7);
    c9 = `is.object`(enc7);
    if c9 then L113() else L114(enc7);
  L132():
    goto L30(r59);
  L134():
    encoding4 = force? encoding3;
    checkMissing(encoding4);
    r61 = `==`(encoding4, "unknown");
    c16 = `as.logical`(r61);
    c17 = `||`(c13, c16);
    goto L31(c17);
  L136():
    st encoding = "";
    goto L33();
  D22():
    deopt 98 [r41];
  L24(dx3):
    st enc = dx3;
    sub = ldf sub;
    check L116() else D24();
  L34(r64):
    r66 = `!`(r64);
    c20 = `as.logical`(r66);
    if c20 then L142() else L35();
  L110():
    goto L23();
  L113():
    dr2 = tryDispatchBuiltin.1("[", enc7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L115() else L114(dr2);
  L114(enc9):
    __ = ldf `[` in base;
    r43 = dyn __(enc9, 1);
    goto L24(r43);
  L138():
    srcfile2 = ld srcfile;
    check L140() else D35();
  L139():
    r63 = dyn base7(<sym srcfile>, "srcfile");
    goto L34(r63);
  D24():
    deopt 108 [];
  D35():
    deopt 157 [srcfile2];
  L35():
    goto L36();
  L36():
    basename = ldf basename;
    check L146() else D39();
  L115():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L24(dx2);
  L116():
    p9 = prom<V +>{
      enc10 = ld enc;
      enc11 = force? enc10;
      checkMissing(enc11);
      return enc11;
    };
    r45 = dyn sub("^[[:space:]]*\\\\encoding\\{([^}]*)\\}.*", "\\1", p9);
    check L117() else D25();
  L140():
    srcfile3 = force? srcfile2;
    checkMissing(srcfile3);
    inherits = ldf inherits in base;
    r65 = dyn inherits(srcfile3, "srcfile", FALSE);
    check L141() else D36();
  L142():
    srcfile4 = ldf srcfile;
    check L143() else D37();
  D25():
    deopt 112 [r45];
  D36():
    deopt 162 [r65];
  D37():
    deopt 165 [];
  D39():
    deopt 172 [];
  L117():
    st enc = r45;
    verbose1 = ld verbose;
    check L118() else D26();
  L141():
    goto L34(r65);
  L143():
    p13 = prom<V +>{
      file13 = ld file0;
      file14 = force? file13;
      checkMissing(file14);
      return file14;
    };
    r68 = dyn srcfile4(p13);
    check L144() else D38();
  L146():
    p14 = prom<V +>{
      srcfile5 = ld srcfile;
      srcfile6 = force? srcfile5;
      checkMissing(srcfile6);
      c21 = `is.object`(srcfile6);
      if c21 then L1() else L2(srcfile6);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", srcfile6);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(srcfile8):
      r70 = `$`(srcfile8, <sym filename>);
      goto L0(r70);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r72 = dyn basename(p14);
    check L147() else D40();
  D26():
    deopt 114 [verbose1];
  D38():
    deopt 167 [r68];
  D40():
    deopt 174 [r72];
  L118():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c10 = `as.logical`(verbose2);
    if c10 then L119() else L25();
  L144():
    st srcfile = r68;
    goto L36();
  L147():
    st basename = r72;
    encoding5 = ld encoding;
    check L148() else D41();
  D41():
    deopt 176 [encoding5];
  L25():
    goto L26();
  L26():
    _in_ = ldf `%in%`;
    check L123() else D29();
  L119():
    message = ldf message;
    check L120() else D27();
  L148():
    encoding6 = force? encoding5;
    checkMissing(encoding6);
    l3 = ld srcfile;
    c22 = `is.object`(l3);
    if c22 then L150() else L151(encoding6, l3);
  D27():
    deopt 117 [];
  D29():
    deopt 126 [];
  L120():
    p10 = prom<V +>{
      enc12 = ld enc;
      enc13 = force? enc12;
      checkMissing(enc13);
      return enc13;
    };
    r47 = dyn message[, , domain]("found encoding ", p10, NA_LGL);
    check L121() else D28();
  L123():
    p11 = prom<V +>{
      enc14 = ld enc;
      enc15 = force? enc14;
      checkMissing(enc15);
      return enc15;
    };
    p12 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r51):
      return r51;
    L1():
      c11 = ldf c in base;
      r52 = dyn c11("UTF-8", "utf-8", "utf8");
      goto L0(r52);
    L2():
      r50 = dyn base5("UTF-8", "utf-8", "utf8");
      goto L0(r50);
    };
    r54 = dyn _in_(p11, p12);
    check L124() else D30();
  L149(dx7):
    st srcfile = dx7;
    l6 = ld srcfile;
    c23 = `is.object`(l6);
    if c23 then L154() else L155("UTF-8", l6);
  L150():
    dr6 = tryDispatchBuiltin.0("$<-", l3, encoding6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L152() else L151(encoding6, dr6);
  L151(encoding8, l5):
    r73 = `$<-`(l5, <sym encoding>, encoding6);
    goto L149(r73);
  D28():
    deopt 122 [r47];
  D30():
    deopt 129 [r54];
  L121():
    goto L26();
  L124():
    c12 = `as.logical`(r54);
    if c12 then L125() else L27();
  L152():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L149(dx6);
  L153(dx9):
    st srcfile = dx9;
    encoding11 = ld encoding;
    check L157() else D42();
  L154():
    dr8 = tryDispatchBuiltin.0("$<-", l6, "UTF-8");
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L156() else L155("UTF-8", dr8);
  L155(r75, l8):
    r78 = `$<-`(l8, <sym Enc>, "UTF-8");
    goto L153(r78);
  D42():
    deopt 186 [encoding11];
  L27():
    enc16 = ld enc;
    check L127() else D31();
  L28(r55):
    st encoding = r55;
    goto L29();
  L125():
    goto L28("UTF-8");
  L156():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L153(dx8);
  L157():
    encoding12 = force? encoding11;
    checkMissing(encoding12);
    r79 = `==`(encoding12, "ASCII");
    c24 = `as.logical`(r79);
    if c24 then L158() else L37();
  D31():
    deopt 132 [enc16];
  L37():
    config_val_to_logical = ldf config_val_to_logical;
    check L169() else D48();
  L41():
    file21 = ldf file;
    check L228() else D76();
  L127():
    enc17 = force? enc16;
    checkMissing(enc17);
    goto L28(enc17);
  L158():
    sym8 = ldf anyNA;
    base8 = ldf anyNA in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L159() else L160();
  D48():
    deopt 212 [];
  D76():
    deopt 331 [];
  L38(r81):
    c25 = `as.logical`(r81);
    if c25 then L164() else L39();
  L159():
    iconv = ldf iconv;
    check L161() else D43();
  L160():
    r80 = dyn base8(<lang iconv(lines, "", "ASCII")>);
    goto L38(r80);
  L169():
    p18 = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r90 = dyn Sys_getenv("_R_CHECK_VALIDATE_UTF8_", "FALSE");
      return r90;
    };
    r92 = dyn config_val_to_logical(p18);
    check L170() else D49();
  L228():
    r157 = dyn file21();
    check L229() else D77();
  D43():
    deopt 193 [];
  D49():
    deopt 214 [r92];
  D77():
    deopt 332 [r157];
  L39():
    goto L40(NULL);
  L40(r88):
    goto L41();
  L161():
    p15 = prom<V +>{
      lines4 = ld lines;
      lines5 = force? lines4;
      checkMissing(lines5);
      return lines5;
    };
    r83 = dyn iconv(p15, "", "ASCII");
    check L162() else D44();
  L164():
    stop = ldf stop;
    check L165() else D46();
  L170():
    st validate = r92;
    _in_1 = ldf `%in%`;
    check L171() else D50();
  L229():
    st tcon = r157;
    writeLines = ldf writeLines;
    check L230() else D78();
  D44():
    deopt 197 [r83];
  D46():
    deopt 201 [];
  D50():
    deopt 217 [];
  D78():
    deopt 335 [];
  L162():
    anyNA = ldf anyNA in base;
    r84 = dyn anyNA(r83);
    check L163() else D45();
  L165():
    p16 = prom<V +>{
      file15 = ld file0;
      file16 = force? file15;
      checkMissing(file16);
      return file16;
    };
    p17 = prom<V +>{
      warningCalls3 = ld warningCalls;
      warningCalls4 = force? warningCalls3;
      checkMissing(warningCalls4);
      return warningCalls4;
    };
    r87 = dyn stop[, , domain, `call.`](p16, ": non-ASCII input and no declared encoding", NA_LGL, p17);
    check L166() else D47();
  L171():
    p19 = prom<V +>{
      encoding13 = ld encoding;
      encoding14 = force? encoding13;
      checkMissing(encoding14);
      return encoding14;
    };
    p20 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r95):
      return r95;
    L1():
      c26 = ldf c in base;
      r96 = dyn c26("unknown", "");
      goto L0(r96);
    L2():
      r94 = dyn base9("unknown", "");
      goto L0(r94);
    };
    r98 = dyn _in_1(p19, p20);
    check L172() else D51();
  L230():
    p34 = prom<V +>{
      lines14 = ld lines;
      lines15 = force? lines14;
      checkMissing(lines15);
      return lines15;
    };
    p35 = prom<V +>{
      tcon = ld tcon;
      tcon1 = force? tcon;
      checkMissing(tcon1);
      return tcon1;
    };
    r160 = dyn writeLines[, , useBytes](p34, p35, TRUE);
    check L231() else D79();
  D45():
    deopt 199 [r84];
  D47():
    deopt 208 [r87];
  D51():
    deopt 220 [r98];
  D79():
    deopt 340 [r160];
  L163():
    goto L38(r84);
  L166():
    goto L40(r87);
  L172():
    c27 = `as.logical`(r98);
    if c27 then L173() else L42(c27);
  L231():
    sym15 = ldf `on.exit`;
    base15 = ldf `on.exit` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L232() else L233();
  L42(c29):
    c38 = `as.logical`(c29);
    if c38 then L180() else L44();
  L61():
    config_val_to_logical1 = ldf config_val_to_logical;
    check L234() else D80();
  L173():
    l10n_info = ldf l10n_info;
    check L174() else D52();
  L232():
    on_exit = ldf `on.exit` in base;
    r163 = dyn on_exit(<lang close(tcon)>);
    goto L61();
  L233():
    r161 = dyn base15(<lang close(tcon)>);
    goto L61();
  D52():
    deopt 222 [c27];
  D80():
    deopt 345 [];
  L44():
    goto L45();
  L45():
    _in_2 = ldf `%in%`;
    check L182() else D54();
  L174():
    r99 = dyn l10n_info();
    check L175() else D53();
  L180():
    st encoding = "UTF-8";
    goto L45();
  L234():
    p36 = prom<V +>{
      Sys_getenv1 = ldf `Sys.getenv`;
      r164 = dyn Sys_getenv1("_R_WARN_DUPLICATE_RD_MACROS_", "FALSE");
      return r164;
    };
    r166 = dyn config_val_to_logical1(p36);
    check L235() else D81();
  D53():
    deopt 223 [c27, r99];
  D54():
    deopt 234 [];
  D81():
    deopt 347 [r166];
  L175():
    c30 = `is.object`(r99);
    if c30 then L176() else L177(c27, r99);
  L182():
    p21 = prom<V +>{
      encoding15 = ld encoding;
      encoding16 = force? encoding15;
      checkMissing(encoding16);
      return encoding16;
    };
    p22 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r106):
      return r106;
    L1():
      c39 = ldf c in base;
      r107 = dyn c39("UTF-8", "UTF8");
      goto L0(r107);
    L2():
      r105 = dyn base10("UTF-8", "UTF8");
      goto L0(r105);
    };
    r109 = dyn _in_2(p21, p22);
    check L183() else D55();
  L235():
    st warndups = r166;
    permissive1 = ld permissive;
    check L236() else D82();
  D55():
    deopt 237 [r109];
  D82():
    deopt 349 [permissive1];
  L43(c34, dx11):
    c35 = `as.logical`(dx11);
    c36 = `&&`(c34, c35);
    goto L42(c36);
  L176():
    dr10 = tryDispatchBuiltin.1("[[", r99);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L178() else L177(c27, dr10);
  L177(c32, r101):
    __1 = ldf `[[` in base;
    r102 = dyn __1(r101, "UTF-8");
    goto L43(c32, r102);
  L183():
    c40 = `as.logical`(r109);
    if c40 then L184() else L46();
  L236():
    permissive2 = force? permissive1;
    checkMissing(permissive2);
    c50 = `as.logical`(permissive2);
    if c50 then L237() else L62();
  L46():
    goto L52();
  L52():
    encoding17 = ld encoding;
    check L201() else D65();
  L62():
    sym17 = ldf `.External2`;
    base17 = ldf `.External2` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L241() else L242();
  L63(r174):
    st result = r174;
    expandDynamicFlags = ldf expandDynamicFlags;
    check L253() else D95();
  L178():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L43(c27, dx10);
  L184():
    validUTF8 = ldf validUTF8;
    check L185() else D56();
  L237():
    withCallingHandlers = ldf withCallingHandlers;
    check L238() else D83();
  D56():
    deopt 239 [];
  D65():
    deopt 272 [encoding17];
  D83():
    deopt 352 [];
  D95():
    deopt 382 [];
  L185():
    p23 = prom<V +>{
      lines6 = ld lines;
      lines7 = force? lines6;
      checkMissing(lines7);
      return lines7;
    };
    r111 = dyn validUTF8(p23);
    check L186() else D57();
  L201():
    encoding18 = force? encoding17;
    checkMissing(encoding18);
    r131 = `!=`(encoding18, "UTF-8");
    c43 = `as.logical`(r131);
    if c43 then L202() else L53();
  L238():
    p37 = prom<V +>{
      sym16 = ldf `.External2`;
      base16 = ldf `.External2` in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r168):
      return r168;
    L1():
      C_parseRd = ld C_parseRd;
      C_parseRd1 = force? C_parseRd;
      checkMissing(C_parseRd1);
      tcon2 = ld tcon;
      tcon3 = force? tcon2;
      checkMissing(tcon3);
      srcfile9 = ld srcfile;
      srcfile10 = force? srcfile9;
      checkMissing(srcfile10);
      verbose3 = ld verbose;
      verbose4 = force? verbose3;
      checkMissing(verbose4);
      basename1 = ld basename;
      basename2 = force? basename1;
      checkMissing(basename2);
      fragment1 = ld fragment;
      fragment2 = force? fragment1;
      checkMissing(fragment2);
      warningCalls5 = ld warningCalls;
      warningCalls6 = force? warningCalls5;
      checkMissing(warningCalls6);
      macros5 = ld macros;
      macros6 = force? macros5;
      checkMissing(macros6);
      warndups = ld warndups;
      warndups1 = force? warndups;
      checkMissing(warndups1);
      _External2 = ldf `.External2` in base;
      r169 = dyn _External2(C_parseRd1, tcon3, srcfile10, "UTF-8", verbose4, basename2, fragment2, warningCalls6, macros6, warndups1);
      goto L0(r169);
    L2():
      r167 = dyn base16(<sym C_parseRd>, <sym tcon>, <sym srcfile>, "UTF-8", <sym verbose>, <sym basename>, <sym fragment>, <sym warningCalls>, <sym macros>, <sym warndups>);
      goto L0(r167);
    };
    p38 = prom<V +>{
      r171 = clos inner530606259;
      return r171;
    };
    r173 = dyn withCallingHandlers[, warning](p37, p38);
    check L239() else D84();
  L241():
    C_parseRd2 = ld C_parseRd;
    check L243() else D85();
  L242():
    r175 = dyn base17(<sym C_parseRd>, <sym tcon>, <sym srcfile>, "UTF-8", <sym verbose>, <sym basename>, <sym fragment>, <sym warningCalls>, <sym macros>, <sym warndups>);
    goto L63(r175);
  L253():
    p39 = prom<V +>{
      result = ld result;
      result1 = force? result;
      checkMissing(result1);
      return result1;
    };
    r178 = dyn expandDynamicFlags(p39);
    check L254() else D96();
  D57():
    deopt 241 [r111];
  D84():
    deopt 356 [r173];
  D85():
    deopt 359 [C_parseRd2];
  D96():
    deopt 384 [r178];
  L53():
    goto L54();
  L54():
    charToRaw = ldf charToRaw;
    check L206() else D68();
  L186():
    st valid = r111;
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L187() else L188();
  L202():
    iconv1 = ldf iconv;
    check L203() else D66();
  L239():
    goto L63(r173);
  L243():
    C_parseRd3 = force? C_parseRd2;
    checkMissing(C_parseRd3);
    tcon4 = ld tcon;
    check L244() else D86();
  L254():
    st result = r178;
    permissive3 = ld permissive;
    check L255() else D97();
  D66():
    deopt 277 [];
  D68():
    deopt 288 [];
  D86():
    deopt 361 [tcon4];
  D97():
    deopt 386 [permissive3];
  L47(r113):
    c41 = `as.logical`(r113);
    if c41 then L191() else L48();
  L187():
    valid = ld valid;
    check L189() else D58();
  L188():
    r112 = dyn base11(<lang `!`(valid)>);
    goto L47(r112);
  L203():
    p30 = prom<V +>{
      lines8 = ld lines;
      lines9 = force? lines8;
      checkMissing(lines9);
      return lines9;
    };
    p31 = prom<V +>{
      encoding19 = ld encoding;
      encoding20 = force? encoding19;
      checkMissing(encoding20);
      return encoding20;
    };
    r134 = dyn iconv1[, , , sub](p30, p31, "UTF-8", "byte");
    check L204() else D67();
  L206():
    p32 = prom<V +>{
      lines10 = ld lines;
      lines11 = force? lines10;
      checkMissing(lines11);
      c44 = `is.object`(lines11);
      if c44 then L1() else L2(lines11);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", lines11);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(lines13):
      __2 = ldf `[` in base;
      r136 = dyn __2(lines13, 1);
      goto L0(r136);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r138 = dyn charToRaw(p32);
    check L207() else D69();
  L244():
    tcon5 = force? tcon4;
    checkMissing(tcon5);
    srcfile11 = ld srcfile;
    check L245() else D87();
  L255():
    permissive4 = force? permissive3;
    checkMissing(permissive4);
    c51 = `as.logical`(permissive4);
    if c51 then L256() else L64();
  D58():
    deopt 245 [valid];
  D67():
    deopt 283 [r134];
  D69():
    deopt 290 [r138];
  D87():
    deopt 363 [srcfile11];
  L48():
    goto L51(NULL);
  L51(r129):
    goto L52();
  L64():
    result4 = ld result;
    check L260() else D100();
  L189():
    valid1 = force? valid;
    checkMissing(valid1);
    r114 = `!`(valid1);
    any = ldf any in base;
    r115 = dyn any(r114);
    check L190() else D59();
  L191():
    validate = ld validate;
    check L192() else D60();
  L204():
    st lines = r134;
    goto L54();
  L207():
    st bytes = r138;
    sym12 = ldf identical;
    base12 = ldf identical in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L208() else L209();
  L245():
    srcfile12 = force? srcfile11;
    checkMissing(srcfile12);
    verbose5 = ld verbose;
    check L246() else D88();
  L256():
    permissify = ldf permissify;
    check L257() else D98();
  D59():
    deopt 249 [r115];
  D60():
    deopt 250 [validate];
  D88():
    deopt 366 [verbose5];
  D98():
    deopt 389 [];
  D100():
    deopt 392 [result4];
  L55(r140):
    c47 = `as.logical`(r140);
    if c47 then L221() else L59();
  L190():
    goto L47(r115);
  L192():
    validate1 = force? validate;
    checkMissing(validate1);
    c42 = `as.logical`(validate1);
    if c42 then L193() else L49();
  L208():
    sym13 = ldf `as.integer`;
    base13 = ldf `as.integer` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L210() else L211();
  L209():
    r139 = dyn base12(<lang as.integer(`[`(bytes, `:`(1, 3)))>, <lang c(239, 187, 191)>);
    goto L55(r139);
  L246():
    verbose6 = force? verbose5;
    checkMissing(verbose6);
    basename3 = ld basename;
    check L247() else D89();
  L257():
    p40 = prom<V +>{
      result2 = ld result;
      result3 = force? result2;
      checkMissing(result3);
      return result3;
    };
    r180 = dyn permissify(p40);
    check L258() else D99();
  L260():
    result5 = force? result4;
    checkMissing(result5);
    popenv;
    return result5;
  D89():
    deopt 368 [basename3];
  D99():
    deopt 391 [r180];
  L49():
    warning1 = ldf warning;
    check L197() else D63();
  L50(r122):
    goto L51(r122);
  L56(r142):
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L217() else L218();
  L59():
    goto L41();
  L193():
    stop1 = ldf stop;
    check L194() else D61();
  L210():
    bytes = ld bytes;
    check L212() else D70();
  L211():
    r141 = dyn base13(<lang `[`(bytes, `:`(1, 3))>);
    goto L56(r141);
  L221():
    rawToChar = ldf rawToChar;
    check L222() else D74();
  L247():
    basename4 = force? basename3;
    checkMissing(basename4);
    fragment3 = ld fragment;
    check L248() else D90();
  L258():
    popenv;
    return r180;
  D61():
    deopt 253 [];
  D63():
    deopt 261 [];
  D70():
    deopt 296 [bytes];
  D74():
    deopt 320 [];
  D90():
    deopt 370 [fragment3];
  L58(r146):
    identical = ldf identical in base;
    r148 = dyn identical(r142, r146, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L220() else D73();
  L194():
    p26 = prom<V +>{
      sprintf = ldf sprintf;
      p25 = prom<V +>{
        sQuote = ldf sQuote;
        p24 = prom<V +>{
          file17 = ld file0;
          file18 = force? file17;
          checkMissing(file18);
          return file18;
        };
        r117 = dyn sQuote(p24);
        return r117;
      };
      r119 = dyn sprintf("invalid UTF-8 in file %s", p25);
      return r119;
    };
    r121 = dyn stop1[, domain, `call.`](p26, NA_LGL, FALSE);
    check L195() else D62();
  L197():
    p29 = prom<V +>{
      sprintf1 = ldf sprintf;
      p28 = prom<V +>{
        sQuote1 = ldf sQuote;
        p27 = prom<V +>{
          file19 = ld file0;
          file20 = force? file19;
          checkMissing(file20);
          return file20;
        };
        r124 = dyn sQuote1(p27);
        return r124;
      };
      r126 = dyn sprintf1("invalid UTF-8 in file %s", p28);
      return r126;
    };
    r128 = dyn warning1[, domain, `call.`](p29, NA_LGL, FALSE);
    check L198() else D64();
  L212():
    bytes1 = force? bytes;
    checkMissing(bytes1);
    c45 = `is.object`(bytes1);
    if c45 then L213() else L214(bytes1);
  L217():
    c46 = ldf c in base;
    r147 = dyn c46(239, 187, 191);
    check L219() else D72();
  L218():
    r145 = dyn base14(239, 187, 191);
    goto L58(r145);
  L222():
    p33 = prom<V +>{
      bytes4 = ld bytes;
      bytes5 = force? bytes4;
      checkMissing(bytes5);
      c48 = `is.object`(bytes5);
      if c48 then L1() else L2(bytes5);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", bytes5);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(bytes7):
      __4 = ldf `[` in base;
      r149 = dyn __4(bytes7, <int -1, -2, -3>);
      goto L0(r149);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r151 = dyn rawToChar(p33);
    check L223() else D75();
  L248():
    fragment4 = force? fragment3;
    checkMissing(fragment4);
    warningCalls7 = ld warningCalls;
    check L249() else D91();
  D62():
    deopt 259 [r121];
  D64():
    deopt 267 [r128];
  D72():
    deopt 309 [r147];
  D73():
    deopt 318 [r148];
  D75():
    deopt 322 [r151];
  D91():
    deopt 372 [warningCalls7];
  L57(dx15):
    as_integer = ldf `as.integer` in base;
    r144 = dyn as_integer(dx15);
    check L216() else D71();
  L195():
    goto L50(r121);
  L198():
    goto L50(r128);
  L213():
    dr14 = tryDispatchBuiltin.1("[", bytes1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L215() else L214(dr14);
  L214(bytes3):
    __3 = ldf `[` in base;
    r143 = dyn __3(bytes3, <int 1, 2, 3>);
    goto L57(r143);
  L219():
    goto L58(r147);
  L220():
    goto L55(r148);
  L223():
    l9 = ld lines;
    c49 = `is.object`(l9);
    if c49 then L224() else L225(r151, l9);
  L249():
    warningCalls8 = force? warningCalls7;
    checkMissing(warningCalls8);
    macros7 = ld macros;
    check L250() else D92();
  D71():
    deopt 302 [r144];
  D92():
    deopt 374 [macros7];
  L60(r155, dx19):
    st lines = dx19;
    goto L41();
  L215():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L57(dx14);
  L216():
    goto L56(r144);
  L224():
    dr18 = tryDispatchBuiltin.0("[<-", l9, r151);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L226() else L225(r151, dr18);
  L225(r153, l11):
    ___1 = ldf `[<-` in base;
    r156 = dyn ___1(l11, r151, 1);
    goto L60(r153, r156);
  L250():
    macros8 = force? macros7;
    checkMissing(macros8);
    warndups2 = ld warndups;
    check L251() else D93();
  D93():
    deopt 376 [warndups2];
  L226():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L60(r151, dx18);
  L251():
    warndups3 = force? warndups2;
    checkMissing(warndups3);
    _External3 = ldf `.External2` in base;
    r176 = dyn _External3(C_parseRd3, tcon5, srcfile12, "UTF-8", verbose6, basename4, fragment4, warningCalls8, macros8, warndups3);
    check L252() else D94();
  D94():
    deopt 379 [r176];
  L252():
    goto L63(r176);
  }
}
fun inner530606259(w) {
  (reg w:*) -+> V { var w:*, reg grepl:cls, reg conditionMessage:cls, reg w1:*, reg w2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg c:L, reg tryInvokeRestart:cls, reg r4:V |
    mkenv;
    st w = w;
    grepl = ldf grepl;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p1 = prom<V +>{
      conditionMessage = ldf conditionMessage;
      p = prom<V +>{
        w1 = ld w;
        w2 = force? w1;
        checkMissing(w2);
        return w2;
      };
      r1 = dyn conditionMessage(p);
      return r1;
    };
    r3 = dyn grepl("unknown macro", p1);
    check L2() else D1();
  D1():
    deopt 4 [r3];
  L2():
    c = `as.logical`(r3);
    if c then L3() else L0();
  L0():
    invisible.0();
    popenv;
    return NULL;
  L3():
    tryInvokeRestart = ldf tryInvokeRestart;
    check L4() else D2();
  D2():
    deopt 6 [];
  L4():
    r4 = dyn tryInvokeRestart("muffleWarning");
    check L5() else D3();
  D3():
    deopt 8 [r4];
  L5():
    popenv;
    return r4;
  }
}