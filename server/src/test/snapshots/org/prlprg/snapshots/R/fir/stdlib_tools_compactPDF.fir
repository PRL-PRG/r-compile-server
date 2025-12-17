fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2008921557;
    st compactPDF = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2008921557(paths, qpdf, gs_cmd, gs_quality, gs_extras, verbose) {
  (reg paths:*, reg qpdf:*, reg gs_cmd:*, reg gs_quality:*, reg gs_extras:*, reg verbose:*) -+> V { var paths:*, var qpdf:*, reg qpdf_isMissing:L, reg qpdf_orDefault:*, reg Sys_which:cls, reg Sys_getenv:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var gs_cmd:*, reg gs_cmd_isMissing:L, reg gs_cmd_orDefault:*, reg Sys_getenv1:cls, reg r4:V, reg p2:p(V +), var gs_quality:*, reg gs_quality_isMissing:L, reg gs_quality_orDefault:*, reg Sys_getenv2:cls, reg r6:V, reg p3:p(V +), var gs_extras:*, reg gs_extras_isMissing:L, reg gs_extras_orDefault:*, reg character:cls, reg r8:V, reg p4:p(V +), var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg qpdf1:*, reg qpdf2:V, reg nzchar:cls, reg r12:V, reg use_qpdf:*, reg use_qpdf1:V, reg c:L, reg system2:cls, reg qpdf3:*, reg qpdf4:V, reg p5:p(V +), reg r14:V, reg c1:L, reg r16:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r17:V, reg as_numeric_version:cls, reg sub:cls, reg ver:*, reg ver1:V, reg p6:p(V +), reg r19:V, reg p7:p(V +), reg r21:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg ver2:*, reg ver3:V, reg is_na:cls, reg r24:V, reg r25:V, reg c2:L, reg c4:V, reg ver4:*, reg ver5:V, reg r26:V, reg c5:L, reg c6:V, reg c8:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg qpdf_flags:*, reg qpdf_flags1:V, reg c9:cls, reg r29:V, reg r30:V, reg match_arg:cls, reg gs_quality1:*, reg gs_quality2:V, reg p8:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg c10:cls, reg r35:V, reg p9:p(V +), reg r37:V, reg gs_quality3:*, reg gs_quality4:V, reg r38:V, reg c11:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg find_gs_cmd:cls, reg gs_cmd1:*, reg gs_cmd2:V, reg p10:p(V +), reg r42:V, reg nzchar1:cls, reg r43:V, reg r44:V, reg verbose1:*, reg verbose2:V, reg c12:L, reg cat:cls, reg sprintf:cls, reg gs_quality5:*, reg gs_quality6:V, reg p11:p(V +), reg use_gs:*, reg use_gs1:V, reg p12:p(V +), reg use_qpdf2:*, reg use_qpdf3:V, reg p13:p(V +), reg r48:V, reg p14:p(V +), reg r50:V, reg use_gs2:*, reg use_gs3:V, reg r52:V, reg c13:L, reg c15:V, reg use_qpdf4:*, reg use_qpdf5:V, reg r53:V, reg c16:L, reg c17:V, reg c19:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r56:V, reg r57:V, reg paths1:*, reg paths2:V, reg length:cls, reg r58:V, reg r59:V, reg c20:L, reg c22:V, reg dir_exists:cls, reg paths3:*, reg paths4:V, reg p15:p(V +), reg r61:V, reg c23:L, reg c24:V, reg c26:L, reg Sys_glob:cls, reg file_path:cls, reg paths5:*, reg paths6:V, reg p16:p(V +), reg r63:V, reg p17:p(V +), reg r65:V, reg verbose3:*, reg verbose4:V, reg c27:L, reg cat1:cls, reg sprintf1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r67:V, reg r68:V, reg paths7:*, reg paths8:V, reg length1:cls, reg r69:V, reg p18:p(V +), reg r71:V, reg p19:p(V +), reg r73:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r75:V, reg r76:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r77:V, reg r78:V, reg paths9:*, reg paths10:V, reg length2:cls, reg r79:V, reg rep_int:cls, reg r80:V, reg data_frame:cls, reg dummy:*, reg dummy1:V, reg p20:p(V +), reg dummy2:*, reg dummy3:V, reg p21:p(V +), reg paths11:*, reg paths12:V, reg p22:p(V +), reg r84:V, reg tempfile:cls, reg r85:V, reg tempfile1:cls, reg r86:V, reg verbose5:*, reg verbose6:V, reg r87:V, reg paths13:*, reg paths14:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c28:L, reg x:V, reg verbose7:*, reg verbose8:V, reg c29:L, reg cat2:cls, reg sprintf2:cls, reg p23:*, reg p24:V, reg p25:p(V +), reg verb2:*, reg verb3:V, reg c30:L, reg p26:p(V +), reg r90:V, reg p27:p(V +), reg r92:V, reg i7:I, reg use_gs4:*, reg use_gs5:V, reg c31:L, reg system3:cls, reg gs_cmd3:*, reg gs_cmd4:V, reg p28:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r95:V, reg r96:V, reg sprintf3:cls, reg gs_quality7:*, reg gs_quality8:V, reg p29:p(V +), reg r98:V, reg sprintf4:cls, reg shQuote:cls, reg tf:*, reg tf1:V, reg p30:p(V +), reg r100:V, reg p31:p(V +), reg r102:V, reg gs_extras1:*, reg gs_extras2:V, reg shQuote1:cls, reg p32:*, reg p33:V, reg p34:p(V +), reg r104:V, reg c32:cls, reg r105:V, reg p35:p(V +), reg verb4:*, reg verb5:V, reg p36:p(V +), reg verb6:*, reg verb7:V, reg p37:p(V +), reg r109:V, reg verbose9:*, reg verbose10:V, reg c33:L, reg verb8:*, reg verb9:V, reg c34:L, reg i13:I, reg c36:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r110:V, reg i16:I, reg c39:L, reg r111:V, reg res:*, reg res1:V, reg length3:cls, reg r112:V, reg r113:V, reg c40:L, reg c41:V, reg cat3:cls, reg sprintf5:cls, reg res2:*, reg res3:V, reg c43:L, reg res4:*, reg res5:V, reg p38:p(V +), reg r115:V, reg p39:p(V +), reg r117:V, reg verb10:*, reg verb11:V, reg c44:L, reg res6:*, reg res7:V, reg c45:L, reg i22:I, reg r118:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r119:V, reg res8:*, reg res9:V, reg attr:cls, reg r120:V, reg i25:I, reg r121:V, reg i26:I, reg res10:*, reg res11:V, reg r123:V, reg c46:L, reg i28:I, reg c48:V, reg use_qpdf6:*, reg use_qpdf7:V, reg c49:L, reg c50:V, reg c52:L, reg unlink:cls, reg tf2:*, reg tf3:V, reg p40:p(V +), reg r125:V, reg file_rename:cls, reg tf4:*, reg tf5:V, reg p41:p(V +), reg tf6:*, reg tf7:V, reg p42:p(V +), reg r128:V, reg system4:cls, reg qpdf5:*, reg qpdf6:V, reg p43:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r130:V, reg r131:V, reg qpdf_flags2:*, reg qpdf_flags3:V, reg shQuote2:cls, reg tf8:*, reg tf9:V, reg p44:p(V +), reg r133:V, reg shQuote3:cls, reg tf10:*, reg tf11:V, reg p45:p(V +), reg r135:V, reg c53:cls, reg r136:V, reg p46:p(V +), reg verb12:*, reg verb13:V, reg p47:p(V +), reg verb14:*, reg verb15:V, reg p48:p(V +), reg r140:V, reg verbose11:*, reg verbose12:V, reg c54:L, reg verb16:*, reg verb17:V, reg c55:L, reg i35:I, reg c57:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r141:V, reg i38:I, reg c60:L, reg r142:V, reg res12:*, reg res13:V, reg length4:cls, reg r143:V, reg r144:V, reg c61:L, reg c62:V, reg cat4:cls, reg sprintf6:cls, reg res14:*, reg res15:V, reg c64:L, reg res16:*, reg res17:V, reg p49:p(V +), reg r146:V, reg p50:p(V +), reg r148:V, reg verb18:*, reg verb19:V, reg c65:L, reg res18:*, reg res19:V, reg c66:L, reg i44:I, reg r149:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r150:V, reg res20:*, reg res21:V, reg attr1:cls, reg r151:V, reg i47:I, reg r152:V, reg i48:I, reg unlink1:cls, reg tf12:*, reg tf13:V, reg p51:p(V +), reg r155:V, reg i49:I, reg r156:V, reg i50:I, reg use_qpdf8:*, reg use_qpdf9:V, reg c67:L, reg system5:cls, reg qpdf7:*, reg qpdf8:V, reg p52:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r159:V, reg r160:V, reg qpdf_flags4:*, reg qpdf_flags5:V, reg shQuote4:cls, reg p53:*, reg p54:V, reg p55:p(V +), reg r162:V, reg shQuote5:cls, reg tf14:*, reg tf15:V, reg p56:p(V +), reg r164:V, reg c68:cls, reg r165:V, reg p57:p(V +), reg verb20:*, reg verb21:V, reg p58:p(V +), reg verb22:*, reg verb23:V, reg p59:p(V +), reg r169:V, reg verbose13:*, reg verbose14:V, reg c69:L, reg verb24:*, reg verb25:V, reg c70:L, reg i56:I, reg c72:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r170:V, reg i59:I, reg c75:L, reg r171:V, reg res22:*, reg res23:V, reg length5:cls, reg r172:V, reg r173:V, reg c76:L, reg c77:V, reg cat5:cls, reg sprintf7:cls, reg res24:*, reg res25:V, reg c79:L, reg res26:*, reg res27:V, reg p60:p(V +), reg r175:V, reg p61:p(V +), reg r177:V, reg verb26:*, reg verb27:V, reg c80:L, reg res28:*, reg res29:V, reg c81:L, reg i65:I, reg r178:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r179:V, reg res30:*, reg res31:V, reg attr2:cls, reg r180:V, reg i68:I, reg r181:V, reg i69:I, reg r182:V, reg res32:*, reg res33:V, reg r183:V, reg c82:L, reg i71:I, reg c84:V, reg file_exists:cls, reg tf16:*, reg tf17:V, reg p62:p(V +), reg r185:V, reg c85:L, reg c86:V, reg c88:L, reg file_size:cls, reg p63:*, reg p64:V, reg p65:p(V +), reg r187:V, reg file_size1:cls, reg tf18:*, reg tf19:V, reg p66:p(V +), reg r189:V, reg verbose15:*, reg verbose16:V, reg c89:L, reg cat6:cls, reg sprintf8:cls, reg new:*, reg new1:V, reg p67:p(V +), reg old:*, reg old1:V, reg p68:p(V +), reg new2:*, reg new3:V, reg old2:*, reg old3:V, reg r192:V, reg p69:p(V +), reg r194:V, reg p70:p(V +), reg r196:V, reg i77:I, reg new4:*, reg new5:V, reg old4:*, reg old5:V, reg r198:V, reg r199:V, reg c90:L, reg i79:I, reg c92:V, reg new6:*, reg new7:V, reg old6:*, reg old7:V, reg r200:V, reg r201:V, reg c93:L, reg c94:V, reg c96:L, reg verbose17:*, reg verbose18:V, reg c97:L, reg cat7:cls, reg r202:V, reg i85:I, reg file_copy:cls, reg tf20:*, reg tf21:V, reg p71:p(V +), reg p72:*, reg p73:V, reg p74:p(V +), reg r206:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r207:V, reg i88:I, reg r208:V, reg old8:*, reg old9:V, reg new8:*, reg new9:V, reg c98:cls, reg r209:V, reg l1:*, reg c99:L, reg i90:I, reg r211:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i92:I, reg r213:V, reg dx3:V, reg p75:*, reg p76:V, reg ___:cls, reg r214:V, reg i93:I, reg r215:V, reg verbose19:*, reg verbose20:V, reg c100:L, reg cat8:cls, reg r216:V, reg i96:I, reg verbose21:*, reg verbose22:V, reg c101:L, reg cat9:cls, reg r218:V, reg unlink2:cls, reg tf22:*, reg tf23:V, reg p77:p(V +), reg r220:V, reg structure:cls, reg __1:cls, reg r221:V, reg r222:cls, reg ans:*, reg ans1:V, reg p78:p(V +), reg r224:V, reg p79:p(V +), reg sym19:cls, reg base19:cls, reg guard19:L, reg r226:V, reg r227:V, reg c102:cls, reg r228:V, reg p80:p(V +), reg r230:V |
    mkenv;
    st paths = paths;
    qpdf_isMissing = missing.0(qpdf);
    if qpdf_isMissing then L0() else L1(qpdf);
  L0():
    p1 = prom<V +>{
      Sys_which = ldf `Sys.which`;
      p = prom<V +>{
        Sys_getenv = ldf `Sys.getenv`;
        r = dyn Sys_getenv("R_QPDF", "qpdf");
        return r;
      };
      r2 = dyn Sys_which(p);
      return r2;
    };
    goto L1(p1);
  L1(qpdf_orDefault):
    st qpdf = qpdf_orDefault;
    gs_cmd_isMissing = missing.0(gs_cmd);
    if gs_cmd_isMissing then L2() else L3(gs_cmd);
  L2():
    p2 = prom<V +>{
      Sys_getenv1 = ldf `Sys.getenv`;
      r4 = dyn Sys_getenv1("R_GSCMD", "");
      return r4;
    };
    goto L3(p2);
  L3(gs_cmd_orDefault):
    st gs_cmd = gs_cmd_orDefault;
    gs_quality_isMissing = missing.0(gs_quality);
    if gs_quality_isMissing then L4() else L5(gs_quality);
  L4():
    p3 = prom<V +>{
      Sys_getenv2 = ldf `Sys.getenv`;
      r6 = dyn Sys_getenv2("GS_QUALITY", "none");
      return r6;
    };
    goto L5(p3);
  L5(gs_quality_orDefault):
    st gs_quality = gs_quality_orDefault;
    gs_extras_isMissing = missing.0(gs_extras);
    if gs_extras_isMissing then L6() else L7(gs_extras);
  L6():
    p4 = prom<V +>{
      character = ldf character;
      r8 = dyn character();
      return r8;
    };
    goto L7(p4);
  L7(gs_extras_orDefault):
    st gs_extras = gs_extras_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L8(FALSE) else L8(verbose);
  L8(verbose_orDefault):
    st verbose = verbose_orDefault;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L82() else L83();
  L9(r11):
    st use_qpdf = r11;
    st qpdf_flags = "--object-streams=generate";
    use_qpdf = ld use_qpdf;
    check L86() else D2();
  L82():
    qpdf1 = ld qpdf;
    check L84() else D0();
  L83():
    r10 = dyn base(<sym qpdf>);
    goto L9(r10);
  D0():
    deopt 2 [qpdf1];
  D2():
    deopt 10 [use_qpdf];
  L84():
    qpdf2 = force? qpdf1;
    checkMissing(qpdf2);
    nzchar = ldf nzchar in base;
    r12 = dyn nzchar(qpdf2);
    check L85() else D1();
  L86():
    use_qpdf1 = force? use_qpdf;
    checkMissing(use_qpdf1);
    c = `as.logical`(use_qpdf1);
    if c then L87() else L10();
  D1():
    deopt 5 [r12];
  L10():
    goto L17();
  L17():
    match_arg = ldf `match.arg`;
    check L109() else D12();
  L85():
    goto L9(r12);
  L87():
    system2 = ldf system2;
    check L88() else D3();
  D3():
    deopt 13 [];
  D12():
    deopt 52 [];
  L88():
    p5 = prom<V +>{
      qpdf3 = ld qpdf;
      qpdf4 = force? qpdf3;
      checkMissing(qpdf4);
      return qpdf4;
    };
    r14 = dyn system2(p5, "--version", TRUE);
    check L89() else D4();
  L109():
    p8 = prom<V +>{
      gs_quality1 = ld gs_quality;
      gs_quality2 = force? gs_quality1;
      checkMissing(gs_quality2);
      return gs_quality2;
    };
    p9 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      c10 = ldf c in base;
      r35 = dyn c10("none", "printer", "ebook", "screen");
      goto L0(r35);
    L2():
      r33 = dyn base3("none", "printer", "ebook", "screen");
      goto L0(r33);
    };
    r37 = dyn match_arg(p8, p9);
    check L110() else D13();
  D4():
    deopt 17 [r14];
  D13():
    deopt 55 [r37];
  L89():
    c1 = `is.object`(r14);
    if c1 then L90() else L91(r14);
  L110():
    st gs_quality = r37;
    gs_quality3 = ld gs_quality;
    check L111() else D14();
  D14():
    deopt 57 [gs_quality3];
  L11(dx1):
    st ver = dx1;
    as_numeric_version = ldf `as.numeric_version`;
    check L93() else D5();
  L90():
    dr = tryDispatchBuiltin.1("[", r14);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L92() else L91(dr);
  L91(r16):
    __ = ldf `[` in base;
    r17 = dyn __(r16, 1);
    goto L11(r17);
  L111():
    gs_quality4 = force? gs_quality3;
    checkMissing(gs_quality4);
    r38 = `!=`(gs_quality4, "none");
    c11 = `as.logical`(r38);
    if c11 then L112() else L18();
  D5():
    deopt 23 [];
  L18():
    goto L20(FALSE);
  L20(r44):
    st use_gs = r44;
    verbose1 = ld verbose;
    check L119() else D18();
  L92():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L93():
    p7 = prom<V +>{
      sub = ldf sub;
      p6 = prom<V +>{
        ver = ld ver;
        ver1 = force? ver;
        checkMissing(ver1);
        return ver1;
      };
      r19 = dyn sub[, , , fixed]("qpdf version ", "", p6, TRUE);
      return r19;
    };
    r21 = dyn as_numeric_version(p7);
    check L94() else D6();
  L112():
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L113() else L114();
  D6():
    deopt 25 [r21];
  D18():
    deopt 73 [verbose1];
  L19(r40):
    goto L20(r40);
  L94():
    st ver = r21;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L95() else L96();
  L113():
    find_gs_cmd = ldf find_gs_cmd;
    check L115() else D15();
  L114():
    r39 = dyn base4(<lang `<-`(gs_cmd, find_gs_cmd(gs_cmd))>);
    goto L19(r39);
  L119():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c12 = `as.logical`(verbose2);
    if c12 then L120() else L21();
  D15():
    deopt 64 [];
  L12(r23):
    r25 = `!`(r23);
    c2 = `as.logical`(r25);
    if c2 then L99() else L13(c2);
  L21():
    goto L22();
  L22():
    use_gs2 = ld use_gs;
    check L124() else D21();
  L95():
    ver2 = ld ver;
    check L97() else D7();
  L96():
    r22 = dyn base1(<sym ver>);
    goto L12(r22);
  L115():
    p10 = prom<V +>{
      gs_cmd1 = ld gs_cmd;
      gs_cmd2 = force? gs_cmd1;
      checkMissing(gs_cmd2);
      return gs_cmd2;
    };
    r42 = dyn find_gs_cmd(p10);
    check L116() else D16();
  L120():
    cat = ldf cat;
    check L121() else D19();
  D7():
    deopt 29 [ver2];
  D16():
    deopt 66 [r42];
  D19():
    deopt 76 [];
  D21():
    deopt 81 [use_gs2];
  L13(c4):
    c8 = `as.logical`(c4);
    if c8 then L102() else L14();
  L97():
    ver3 = force? ver2;
    checkMissing(ver3);
    is_na = ldf `is.na` in base;
    r24 = dyn is_na(ver3);
    check L98() else D8();
  L99():
    ver4 = ld ver;
    check L100() else D9();
  L116():
    st gs_cmd = r42;
    nzchar1 = ldf nzchar in base;
    r43 = dyn nzchar1(r42);
    check L117() else D17();
  L121():
    p14 = prom<V +>{
      sprintf = ldf sprintf;
      p11 = prom<V +>{
        gs_quality5 = ld gs_quality;
        gs_quality6 = force? gs_quality5;
        checkMissing(gs_quality6);
        return gs_quality6;
      };
      p12 = prom<V +>{
        use_gs = ld use_gs;
        use_gs1 = force? use_gs;
        checkMissing(use_gs1);
        return use_gs1;
      };
      p13 = prom<V +>{
        use_qpdf2 = ld use_qpdf;
        use_qpdf3 = force? use_qpdf2;
        checkMissing(use_qpdf3);
        return use_qpdf3;
      };
      r48 = dyn sprintf("qs_quality=\"%s\" : use_gs=%s, use_qpdf=%s\n", p11, p12, p13);
      return r48;
    };
    r50 = dyn cat(p14);
    check L122() else D20();
  L124():
    use_gs3 = force? use_gs2;
    checkMissing(use_gs3);
    r52 = `!`(use_gs3);
    c13 = `as.logical`(r52);
    if c13 then L125() else L23(c13);
  D8():
    deopt 32 [r24];
  D9():
    deopt 34 [c2, ver4];
  D17():
    deopt 69 [r43];
  D20():
    deopt 78 [r50];
  L14():
    goto L16(NULL);
  L16(r30):
    goto L17();
  L23(c15):
    c19 = `as.logical`(c15);
    if c19 then L128() else L24();
  L98():
    goto L12(r24);
  L100():
    ver5 = force? ver4;
    checkMissing(ver5);
    r26 = `<`(ver5, "6.0.0");
    c5 = `as.logical`(r26);
    c6 = `&&`(c2, c5);
    goto L13(c6);
  L102():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L103() else L104();
  L117():
    goto L19(r43);
  L122():
    goto L22();
  L125():
    use_qpdf4 = ld use_qpdf;
    check L126() else D22();
  D22():
    deopt 84 [c13, use_qpdf4];
  L15(r28):
    st qpdf_flags = r28;
    goto L16(r28);
  L24():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L131() else L132();
  L103():
    qpdf_flags = ld qpdf_flags;
    check L105() else D10();
  L104():
    r27 = dyn base2("--stream-data=compress", <sym qpdf_flags>);
    goto L15(r27);
  L126():
    use_qpdf5 = force? use_qpdf4;
    checkMissing(use_qpdf5);
    r53 = `!`(use_qpdf5);
    c16 = `as.logical`(r53);
    c17 = `&&`(c13, c16);
    goto L23(c17);
  L128():
    popenv;
    return NULL;
  D10():
    deopt 42 [qpdf_flags];
  L26(r57):
    r59 = `==`(r57, 1);
    c20 = `as.logical`(r59);
    if c20 then L135() else L27(c20);
  L105():
    qpdf_flags1 = force? qpdf_flags;
    checkMissing(qpdf_flags1);
    c9 = ldf c in base;
    r29 = dyn c9("--stream-data=compress", qpdf_flags1);
    check L106() else D11();
  L131():
    paths1 = ld paths;
    check L133() else D23();
  L132():
    r56 = dyn base5(<sym paths>);
    goto L26(r56);
  D11():
    deopt 45 [r29];
  D23():
    deopt 95 [paths1];
  L27(c22):
    c26 = `as.logical`(c22);
    if c26 then L139() else L28();
  L106():
    goto L15(r29);
  L133():
    paths2 = force? paths1;
    checkMissing(paths2);
    length = ldf length in base;
    r58 = dyn length(paths2);
    check L134() else D24();
  L135():
    dir_exists = ldf `dir.exists`;
    check L136() else D25();
  D24():
    deopt 98 [r58];
  D25():
    deopt 102 [c20];
  L28():
    goto L29();
  L29():
    verbose3 = ld verbose;
    check L143() else D29();
  L134():
    goto L26(r58);
  L136():
    p15 = prom<V +>{
      paths3 = ld paths;
      paths4 = force? paths3;
      checkMissing(paths4);
      return paths4;
    };
    r61 = dyn dir_exists(p15);
    check L137() else D26();
  L139():
    Sys_glob = ldf `Sys.glob`;
    check L140() else D27();
  D26():
    deopt 104 [c20, r61];
  D27():
    deopt 107 [];
  D29():
    deopt 113 [verbose3];
  L137():
    c23 = `as.logical`(r61);
    c24 = `&&`(c20, c23);
    goto L27(c24);
  L140():
    p17 = prom<V +>{
      file_path = ldf `file.path`;
      p16 = prom<V +>{
        paths5 = ld paths;
        paths6 = force? paths5;
        checkMissing(paths6);
        return paths6;
      };
      r63 = dyn file_path(p16, "*.pdf");
      return r63;
    };
    r65 = dyn Sys_glob(p17);
    check L141() else D28();
  L143():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    c27 = `as.logical`(verbose4);
    if c27 then L144() else L30();
  D28():
    deopt 109 [r65];
  L30():
    goto L31();
  L31():
    sym7 = ldf `rep.int`;
    base7 = ldf `rep.int` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L148() else L149();
  L141():
    st paths = r65;
    goto L29();
  L144():
    cat1 = ldf cat;
    check L145() else D30();
  D30():
    deopt 116 [];
  L32(r76):
    st dummy = r76;
    data_frame = ldf `data.frame`;
    check L155() else D35();
  L145():
    p19 = prom<V +>{
      sprintf1 = ldf sprintf;
      p18 = prom<V +>{
        sym6 = ldf length;
        base6 = ldf length in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r68):
        return r68;
      L1():
        paths7 = ld paths;
        paths8 = force? paths7;
        checkMissing(paths8);
        length1 = ldf length in base;
        r69 = dyn length1(paths8);
        goto L0(r69);
      L2():
        r67 = dyn base6(<sym paths>);
        goto L0(r67);
      };
      r71 = dyn sprintf1("#{pdf}s = length(paths) = %d\n", p18);
      return r71;
    };
    r73 = dyn cat1(p19);
    check L146() else D31();
  L148():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L150() else L151();
  L149():
    r75 = dyn base7(NA_REAL, <lang length(paths)>);
    goto L32(r75);
  D31():
    deopt 118 [r73];
  D35():
    deopt 134 [];
  L33(r78):
    rep_int = ldf `rep.int` in base;
    r80 = dyn rep_int(NA_REAL, r78);
    check L154() else D34();
  L146():
    goto L31();
  L150():
    paths9 = ld paths;
    check L152() else D32();
  L151():
    r77 = dyn base8(<sym paths>);
    goto L33(r77);
  L155():
    p20 = prom<V +>{
      dummy = ld dummy;
      dummy1 = force? dummy;
      checkMissing(dummy1);
      return dummy1;
    };
    p21 = prom<V +>{
      dummy2 = ld dummy;
      dummy3 = force? dummy2;
      checkMissing(dummy3);
      return dummy3;
    };
    p22 = prom<V +>{
      paths11 = ld paths;
      paths12 = force? paths11;
      checkMissing(paths12);
      return paths12;
    };
    r84 = dyn data_frame[old, new, `row.names`](p20, p21, p22);
    check L156() else D36();
  D32():
    deopt 126 [paths9];
  D34():
    deopt 131 [r80];
  D36():
    deopt 141 [r84];
  L152():
    paths10 = force? paths9;
    checkMissing(paths10);
    length2 = ldf length in base;
    r79 = dyn length2(paths10);
    check L153() else D33();
  L154():
    goto L32(r80);
  L156():
    st ans = r84;
    tempfile = ldf tempfile;
    check L157() else D37();
  D33():
    deopt 129 [r79];
  D37():
    deopt 144 [];
  L153():
    goto L33(r79);
  L157():
    r85 = dyn tempfile("pdf");
    check L158() else D38();
  D38():
    deopt 146 [r85];
  L158():
    st tf = r85;
    tempfile1 = ldf tempfile;
    check L159() else D39();
  D39():
    deopt 149 [];
  L159():
    r86 = dyn tempfile1("pdf");
    check L160() else D40();
  D40():
    deopt 151 [r86];
  L160():
    st tf2 = r86;
    verbose5 = ld verbose;
    check L161() else D41();
  D41():
    deopt 153 [verbose5];
  L161():
    verbose6 = force? verbose5;
    checkMissing(verbose6);
    r87 = `>=`(verbose6, 2.0);
    st verb2 = r87;
    paths13 = ld paths;
    check L162() else D42();
  D42():
    deopt 158 [paths13];
  L162():
    paths14 = force? paths13;
    checkMissing(paths14);
    s = toForSeq(paths14);
    l = length(s);
    i = 0;
    goto L34(i);
  L34(i1):
    i2 = `+`.1(i1, 1);
    c28 = `<`.1(l, i2);
    if c28 then L163() else L81();
  L81():
    x = `[[`(s, i2, NULL, TRUE);
    st p = x;
    st res = 0.0;
    verbose7 = ld verbose;
    check L164() else D43();
  L163():
    structure = ldf structure;
    check L311() else D123();
  D43():
    deopt 163 [i2, verbose7];
  D123():
    deopt 420 [];
  L164():
    verbose8 = force? verbose7;
    checkMissing(verbose8);
    c29 = `as.logical`(verbose8);
    if c29 then L165() else L35();
  L311():
    p79 = prom<V +>{
      __1 = ldf `::`;
      r221 = dyn __1("stats", "na.omit");
      checkFun.0(r221);
      r222 = r221 as cls;
      p78 = prom<V +>{
        ans = ld ans;
        ans1 = force? ans;
        checkMissing(ans1);
        return ans1;
      };
      r224 = dyn r222(p78);
      return r224;
    };
    p80 = prom<V +>{
      sym19 = ldf c;
      base19 = ldf c in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r227):
      return r227;
    L1():
      c102 = ldf c in base;
      r228 = dyn c102("compactPDF", "data.frame");
      goto L0(r228);
    L2():
      r226 = dyn base19("compactPDF", "data.frame");
      goto L0(r226);
    };
    r230 = dyn structure[, class](p79, p80);
    check L312() else D124();
  D124():
    deopt 424 [r230];
  L35():
    goto L36(i2);
  L36(i7):
    use_gs4 = ld use_gs;
    check L169() else D46();
  L165():
    cat2 = ldf cat;
    check L166() else D44();
  L312():
    popenv;
    return r230;
  D44():
    deopt 166 [i2];
  D46():
    deopt 171 [i7, use_gs4];
  L166():
    p27 = prom<V +>{
      sprintf2 = ldf sprintf;
      p25 = prom<V +>{
        p23 = ld p;
        p24 = force? p23;
        checkMissing(p24);
        return p24;
      };
      p26 = prom<V +>{
        verb2 = ld verb2;
        verb3 = force? verb2;
        checkMissing(verb3);
        c30 = `as.logical`(verb3);
        if c30 then L1() else L0();
      L0():
        return " ";
      L1():
        return "\n";
      };
      r90 = dyn sprintf2("- %s:%s", p25, p26);
      return r90;
    };
    r92 = dyn cat2(p27);
    check L167() else D45();
  L169():
    use_gs5 = force? use_gs4;
    checkMissing(use_gs5);
    c31 = `as.logical`(use_gs5);
    if c31 then L170() else L37();
  D45():
    deopt 168 [i2, r92];
  L37():
    use_qpdf8 = ld use_qpdf;
    check L232() else D79();
  L57(i50):
    res32 = ld res;
    check L259() else D92();
  L167():
    goto L36(i2);
  L170():
    system3 = ldf system2;
    check L171() else D47();
  D47():
    deopt 174 [i7];
  D79():
    deopt 280 [i7, use_qpdf8];
  D92():
    deopt 327 [i50, res32];
  L171():
    p28 = prom<V +>{
      gs_cmd3 = ld gs_cmd;
      gs_cmd4 = force? gs_cmd3;
      checkMissing(gs_cmd4);
      return gs_cmd4;
    };
    p35 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r96):
      return r96;
    L1():
      sprintf3 = ldf sprintf;
      p29 = prom<V +>{
        gs_quality7 = ld gs_quality;
        gs_quality8 = force? gs_quality7;
        checkMissing(gs_quality8);
        return gs_quality8;
      };
      r98 = dyn sprintf3("-dPDFSETTINGS=/%s", p29);
      sprintf4 = ldf sprintf;
      p31 = prom<V +>{
        shQuote = ldf shQuote;
        p30 = prom<V +>{
          tf = ld tf;
          tf1 = force? tf;
          checkMissing(tf1);
          return tf1;
        };
        r100 = dyn shQuote(p30);
        return r100;
      };
      r102 = dyn sprintf4("-sOutputFile=%s", p31);
      gs_extras1 = ld gs_extras;
      gs_extras2 = force? gs_extras1;
      checkMissing(gs_extras2);
      shQuote1 = ldf shQuote;
      p34 = prom<V +>{
        p32 = ld p;
        p33 = force? p32;
        checkMissing(p33);
        return p33;
      };
      r104 = dyn shQuote1(p34);
      c32 = ldf c in base;
      r105 = dyn c32("-q -dNOPAUSE -dBATCH -sDEVICE=pdfwrite", r98, "-dCompatibilityLevel=1.5", "-dAutoRotatePages=/None", "-dPrinted=false", r102, gs_extras2, r104);
      goto L0(r105);
    L2():
      r95 = dyn base9("-q -dNOPAUSE -dBATCH -sDEVICE=pdfwrite", <lang sprintf("-dPDFSETTINGS=/%s", gs_quality)>, "-dCompatibilityLevel=1.5", "-dAutoRotatePages=/None", "-dPrinted=false", <lang sprintf("-sOutputFile=%s", shQuote(tf))>, <sym gs_extras>, <lang shQuote(p)>);
      goto L0(r95);
    };
    p36 = prom<V +>{
      verb4 = ld verb2;
      verb5 = force? verb4;
      checkMissing(verb5);
      return verb5;
    };
    p37 = prom<V +>{
      verb6 = ld verb2;
      verb7 = force? verb6;
      checkMissing(verb7);
      return verb7;
    };
    r109 = dyn system3(p28, p35, p36, p37);
    check L172() else D48();
  L232():
    use_qpdf9 = force? use_qpdf8;
    checkMissing(use_qpdf9);
    c67 = `as.logical`(use_qpdf9);
    if c67 then L233() else L58();
  L259():
    res33 = force? res32;
    checkMissing(res33);
    r183 = `!`(res33);
    c82 = `as.logical`(r183);
    if c82 then L260() else L67(i50, c82);
  D48():
    deopt 179 [i7, r109];
  L58():
    goto L57(i7);
  L67(i71, c84):
    c88 = `as.logical`(c84);
    if c88 then L264() else L68();
  L172():
    st res = r109;
    verbose9 = ld verbose;
    check L173() else D49();
  L233():
    system5 = ldf system2;
    check L234() else D80();
  L260():
    file_exists = ldf `file.exists`;
    check L261() else D93();
  D49():
    deopt 181 [i7, verbose9];
  D80():
    deopt 283 [i7];
  D93():
    deopt 331 [i50, c82];
  L68():
    verbose21 = ld verbose;
    check L304() else D118();
  L79(i96):
    unlink2 = ldf unlink;
    check L309() else D121();
  L173():
    verbose10 = force? verbose9;
    checkMissing(verbose10);
    c33 = `as.logical`(verbose10);
    if c33 then L174() else L38();
  L234():
    p52 = prom<V +>{
      qpdf7 = ld qpdf;
      qpdf8 = force? qpdf7;
      checkMissing(qpdf8);
      return qpdf8;
    };
    p57 = prom<V +>{
      sym15 = ldf c;
      base15 = ldf c in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r160):
      return r160;
    L1():
      qpdf_flags4 = ld qpdf_flags;
      qpdf_flags5 = force? qpdf_flags4;
      checkMissing(qpdf_flags5);
      shQuote4 = ldf shQuote;
      p55 = prom<V +>{
        p53 = ld p;
        p54 = force? p53;
        checkMissing(p54);
        return p54;
      };
      r162 = dyn shQuote4(p55);
      shQuote5 = ldf shQuote;
      p56 = prom<V +>{
        tf14 = ld tf;
        tf15 = force? tf14;
        checkMissing(tf15);
        return tf15;
      };
      r164 = dyn shQuote5(p56);
      c68 = ldf c in base;
      r165 = dyn c68(qpdf_flags5, r162, r164);
      goto L0(r165);
    L2():
      r159 = dyn base15(<sym qpdf_flags>, <lang shQuote(p)>, <lang shQuote(tf)>);
      goto L0(r159);
    };
    p58 = prom<V +>{
      verb20 = ld verb2;
      verb21 = force? verb20;
      checkMissing(verb21);
      return verb21;
    };
    p59 = prom<V +>{
      verb22 = ld verb2;
      verb23 = force? verb22;
      checkMissing(verb23);
      return verb23;
    };
    r169 = dyn system5(p52, p57, p58, p59);
    check L235() else D81();
  L261():
    p62 = prom<V +>{
      tf16 = ld tf;
      tf17 = force? tf16;
      checkMissing(tf17);
      return tf17;
    };
    r185 = dyn file_exists(p62);
    check L262() else D94();
  L264():
    file_size = ldf `file.size`;
    check L265() else D95();
  D81():
    deopt 288 [i7, r169];
  D94():
    deopt 333 [i50, c82, r185];
  D95():
    deopt 336 [i71];
  D118():
    deopt 404 [i71, verbose21];
  D121():
    deopt 413 [i96];
  L38():
    goto L45(i7);
  L45(i26):
    res10 = ld res;
    check L195() else D59();
  L174():
    verb8 = ld verb2;
    check L175() else D50();
  L235():
    st res = r169;
    verbose13 = ld verbose;
    check L236() else D82();
  L262():
    c85 = `as.logical`(r185);
    c86 = `&&`(c82, c85);
    goto L67(i50, c86);
  L265():
    p65 = prom<V +>{
      p63 = ld p;
      p64 = force? p63;
      checkMissing(p64);
      return p64;
    };
    r187 = dyn file_size(p65);
    check L266() else D96();
  L304():
    verbose22 = force? verbose21;
    checkMissing(verbose22);
    c101 = `as.logical`(verbose22);
    if c101 then L305() else L80();
  L309():
    p77 = prom<V +>{
      tf22 = ld tf;
      tf23 = force? tf22;
      checkMissing(tf23);
      return tf23;
    };
    r220 = dyn unlink2(p77);
    check L310() else D122();
  D50():
    deopt 183 [i7, verb8];
  D59():
    deopt 216 [i26, res10];
  D82():
    deopt 290 [i7, verbose13];
  D96():
    deopt 338 [i71, r187];
  D122():
    deopt 415 [i96, r220];
  L80():
    goto L79(i71);
  L175():
    verb9 = force? verb8;
    checkMissing(verb9);
    c34 = `as.logical`(verb9);
    if c34 then L176() else L39(i7, c34);
  L195():
    res11 = force? res10;
    checkMissing(res11);
    r123 = `!`(res11);
    c46 = `as.logical`(r123);
    if c46 then L196() else L46(i26, c46);
  L236():
    verbose14 = force? verbose13;
    checkMissing(verbose14);
    c69 = `as.logical`(verbose14);
    if c69 then L237() else L59();
  L266():
    st old = r187;
    file_size1 = ldf `file.size`;
    check L267() else D97();
  L305():
    cat9 = ldf cat;
    check L306() else D119();
  L310():
    goto L34(i96);
  D97():
    deopt 341 [i71];
  D119():
    deopt 407 [i71];
  L39(i13, c36):
    st res0 = c36;
    cat3 = ldf cat;
    check L182() else D53();
  L46(i28, c48):
    c52 = `as.logical`(c48);
    if c52 then L199() else L47();
  L59():
    goto L66(i7, NULL);
  L66(i69, r182):
    goto L57(i69);
  L176():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L177() else L178();
  L196():
    use_qpdf6 = ld use_qpdf;
    check L197() else D60();
  L237():
    verb24 = ld verb2;
    check L238() else D83();
  L267():
    p66 = prom<V +>{
      tf18 = ld tf;
      tf19 = force? tf18;
      checkMissing(tf19);
      return tf19;
    };
    r189 = dyn file_size1(p66);
    check L268() else D98();
  L306():
    r218 = dyn cat9("\n");
    check L307() else D120();
  D53():
    deopt 195 [i13];
  D60():
    deopt 219 [i26, c46, use_qpdf6];
  D83():
    deopt 292 [i7, verb24];
  D98():
    deopt 343 [i71, r189];
  D120():
    deopt 409 [i71, r218];
  L40(i16, c39, r111):
    r113 = `!`(r111);
    c40 = `as.logical`(r113);
    c41 = `&&`(c39, c40);
    goto L39(i16, c41);
  L47():
    goto L56(i28, NULL);
  L56(i49, r156):
    goto L57(i49);
  L177():
    res = ld res;
    check L179() else D51();
  L178():
    r110 = dyn base10(<sym res>);
    goto L40(i7, c34, r110);
  L182():
    p39 = prom<V +>{
      sprintf5 = ldf sprintf;
      p38 = prom<V +>{
        res2 = ld res0;
        res3 = force? res2;
        checkMissing(res3);
        c43 = `as.logical`(res3);
        if c43 then L1() else L0();
      L0():
        res4 = ld res;
        res5 = force? res4;
        checkMissing(res5);
        return res5;
      L1():
        return "<>";
      };
      r115 = dyn sprintf5("   gs: res=%s; ", p38);
      return r115;
    };
    r117 = dyn cat3(p39);
    check L183() else D54();
  L197():
    use_qpdf7 = force? use_qpdf6;
    checkMissing(use_qpdf7);
    c49 = `as.logical`(use_qpdf7);
    c50 = `&&`(c46, c49);
    goto L46(i26, c50);
  L199():
    unlink = ldf unlink;
    check L200() else D61();
  L238():
    verb25 = force? verb24;
    checkMissing(verb25);
    c70 = `as.logical`(verb25);
    if c70 then L239() else L60(i7, c70);
  L268():
    st new = r189;
    verbose15 = ld verbose;
    check L269() else D99();
  L307():
    goto L79(i71);
  D51():
    deopt 187 [i7, c34, res];
  D54():
    deopt 197 [i13, r117];
  D61():
    deopt 223 [i28];
  D99():
    deopt 345 [i71, verbose15];
  L60(i56, c72):
    st res0 = c72;
    cat5 = ldf cat;
    check L245() else D86();
  L179():
    res1 = force? res;
    checkMissing(res1);
    length3 = ldf length in base;
    r112 = dyn length3(res1);
    check L180() else D52();
  L183():
    verb10 = ld verb2;
    check L184() else D55();
  L200():
    p40 = prom<V +>{
      tf2 = ld tf2;
      tf3 = force? tf2;
      checkMissing(tf3);
      return tf3;
    };
    r125 = dyn unlink(p40);
    check L201() else D62();
  L239():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L240() else L241();
  L269():
    verbose16 = force? verbose15;
    checkMissing(verbose16);
    c89 = `as.logical`(verbose16);
    if c89 then L270() else L69();
  D52():
    deopt 190 [i7, c34, r112];
  D55():
    deopt 198 [i13, verb10];
  D62():
    deopt 225 [i28, r125];
  D86():
    deopt 304 [i56];
  L61(i59, c75, r171):
    r173 = `!`(r171);
    c76 = `as.logical`(r173);
    c77 = `&&`(c75, c76);
    goto L60(i59, c77);
  L69():
    goto L70(i71);
  L70(i77):
    new4 = ld new;
    check L274() else D102();
  L180():
    goto L40(i7, c34, r112);
  L184():
    verb11 = force? verb10;
    checkMissing(verb11);
    c44 = `as.logical`(verb11);
    if c44 then L185() else L41();
  L201():
    file_rename = ldf `file.rename`;
    check L202() else D63();
  L240():
    res22 = ld res;
    check L242() else D84();
  L241():
    r170 = dyn base16(<sym res>);
    goto L61(i7, c70, r170);
  L245():
    p61 = prom<V +>{
      sprintf7 = ldf sprintf;
      p60 = prom<V +>{
        res24 = ld res0;
        res25 = force? res24;
        checkMissing(res25);
        c79 = `as.logical`(res25);
        if c79 then L1() else L0();
      L0():
        res26 = ld res;
        res27 = force? res26;
        checkMissing(res27);
        return res27;
      L1():
        return "<>";
      };
      r175 = dyn sprintf7(" only qpdf: res=%s; ", p60);
      return r175;
    };
    r177 = dyn cat5(p61);
    check L246() else D87();
  L270():
    cat6 = ldf cat;
    check L271() else D100();
  D63():
    deopt 227 [i28];
  D84():
    deopt 296 [i7, c70, res22];
  D87():
    deopt 306 [i56, r177];
  D100():
    deopt 348 [i71];
  D102():
    deopt 353 [i77, new4];
  L41():
    goto L44(i13, NULL);
  L44(i25, r121):
    goto L45(i25);
  L185():
    res6 = ld res0;
    check L186() else D56();
  L202():
    p41 = prom<V +>{
      tf4 = ld tf;
      tf5 = force? tf4;
      checkMissing(tf5);
      return tf5;
    };
    p42 = prom<V +>{
      tf6 = ld tf2;
      tf7 = force? tf6;
      checkMissing(tf7);
      return tf7;
    };
    r128 = dyn file_rename(p41, p42);
    check L203() else D64();
  L242():
    res23 = force? res22;
    checkMissing(res23);
    length5 = ldf length in base;
    r172 = dyn length5(res23);
    check L243() else D85();
  L246():
    verb26 = ld verb2;
    check L247() else D88();
  L271():
    p70 = prom<V +>{
      sprintf8 = ldf sprintf;
      p67 = prom<V +>{
        new = ld new;
        new1 = force? new;
        checkMissing(new1);
        return new1;
      };
      p68 = prom<V +>{
        old = ld old;
        old1 = force? old;
        checkMissing(old1);
        return old1;
      };
      p69 = prom<V +>{
        new2 = ld new;
        new3 = force? new2;
        checkMissing(new3);
        old2 = ld old;
        old3 = force? old2;
        checkMissing(old3);
        r192 = `/`(new3, old3);
        return r192;
      };
      r194 = dyn sprintf8("\n    ==> (new=%g)/(old=%g) = %g", p67, p68, p69);
      return r194;
    };
    r196 = dyn cat6(p70);
    check L272() else D101();
  L274():
    new5 = force? new4;
    checkMissing(new5);
    old4 = ld old;
    check L275() else D103();
  D56():
    deopt 200 [i13, res6];
  D64():
    deopt 230 [i28, r128];
  D85():
    deopt 299 [i7, c70, r172];
  D88():
    deopt 307 [i56, verb26];
  D101():
    deopt 350 [i71, r196];
  D103():
    deopt 354 [i77, new5, old4];
  L186():
    res7 = force? res6;
    checkMissing(res7);
    c45 = `as.logical`(res7);
    if c45 then L187() else L42();
  L203():
    system4 = ldf system2;
    check L204() else D65();
  L243():
    goto L61(i7, c70, r172);
  L247():
    verb27 = force? verb26;
    checkMissing(verb27);
    c80 = `as.logical`(verb27);
    if c80 then L248() else L62();
  L272():
    goto L70(i71);
  L275():
    old5 = force? old4;
    checkMissing(old5);
    r198 = `/`(new5, old5);
    r199 = `<`(r198, 0.9);
    c90 = `as.logical`(r199);
    if c90 then L276() else L71(i77, c90);
  D65():
    deopt 232 [i28];
  L42():
    sym11 = ldf attr;
    base11 = ldf attr in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L189() else L190();
  L43(i22, r118):
    st res = r118;
    goto L44(i22, r118);
  L62():
    goto L65(i56, NULL);
  L65(i68, r181):
    goto L66(i68, r181);
  L71(i79, c92):
    c96 = `as.logical`(c92);
    if c96 then L280() else L72();
  L187():
    goto L43(i13, 0.0);
  L204():
    p43 = prom<V +>{
      qpdf5 = ld qpdf;
      qpdf6 = force? qpdf5;
      checkMissing(qpdf6);
      return qpdf6;
    };
    p46 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r131):
      return r131;
    L1():
      qpdf_flags2 = ld qpdf_flags;
      qpdf_flags3 = force? qpdf_flags2;
      checkMissing(qpdf_flags3);
      shQuote2 = ldf shQuote;
      p44 = prom<V +>{
        tf8 = ld tf2;
        tf9 = force? tf8;
        checkMissing(tf9);
        return tf9;
      };
      r133 = dyn shQuote2(p44);
      shQuote3 = ldf shQuote;
      p45 = prom<V +>{
        tf10 = ld tf;
        tf11 = force? tf10;
        checkMissing(tf11);
        return tf11;
      };
      r135 = dyn shQuote3(p45);
      c53 = ldf c in base;
      r136 = dyn c53(qpdf_flags3, r133, r135);
      goto L0(r136);
    L2():
      r130 = dyn base12(<sym qpdf_flags>, <lang shQuote(tf2)>, <lang shQuote(tf)>);
      goto L0(r130);
    };
    p47 = prom<V +>{
      verb12 = ld verb2;
      verb13 = force? verb12;
      checkMissing(verb13);
      return verb13;
    };
    p48 = prom<V +>{
      verb14 = ld verb2;
      verb15 = force? verb14;
      checkMissing(verb15);
      return verb15;
    };
    r140 = dyn system4(p43, p46, p47, p48);
    check L205() else D66();
  L248():
    res28 = ld res0;
    check L249() else D89();
  L276():
    new6 = ld new;
    check L277() else D104();
  D66():
    deopt 237 [i28, r140];
  D89():
    deopt 309 [i56, res28];
  D104():
    deopt 359 [i77, c90, new6];
  L72():
    verbose19 = ld verbose;
    check L298() else D115();
  L77(i93, r215):
    goto L79(i93);
  L189():
    res8 = ld res;
    check L191() else D57();
  L190():
    r119 = dyn base11(<sym res>, "status");
    goto L43(i13, r119);
  L205():
    st res = r140;
    verbose11 = ld verbose;
    check L206() else D67();
  L249():
    res29 = force? res28;
    checkMissing(res29);
    c81 = `as.logical`(res29);
    if c81 then L250() else L63();
  L277():
    new7 = force? new6;
    checkMissing(new7);
    old6 = ld old;
    check L278() else D105();
  L280():
    verbose17 = ld verbose;
    check L281() else D106();
  D57():
    deopt 206 [i13, res8];
  D67():
    deopt 239 [i28, verbose11];
  D105():
    deopt 360 [i77, c90, new7, old6];
  D106():
    deopt 366 [i79, verbose17];
  D115():
    deopt 396 [i79, verbose19];
  L63():
    sym17 = ldf attr;
    base17 = ldf attr in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L252() else L253();
  L64(i65, r178):
    st res = r178;
    goto L65(i65, r178);
  L191():
    res9 = force? res8;
    checkMissing(res9);
    attr = ldf attr in base;
    r120 = dyn attr(res9, "status");
    check L192() else D58();
  L206():
    verbose12 = force? verbose11;
    checkMissing(verbose12);
    c54 = `as.logical`(verbose12);
    if c54 then L207() else L48();
  L250():
    goto L64(i56, 0.0);
  L278():
    old7 = force? old6;
    checkMissing(old7);
    r200 = `-`(old7, 10000.0);
    r201 = `<`(new7, r200);
    c93 = `as.logical`(r201);
    c94 = `&&`(c90, c93);
    goto L71(i77, c94);
  L281():
    verbose18 = force? verbose17;
    checkMissing(verbose18);
    c97 = `as.logical`(verbose18);
    if c97 then L282() else L73();
  L298():
    verbose20 = force? verbose19;
    checkMissing(verbose20);
    c100 = `as.logical`(verbose20);
    if c100 then L299() else L78();
  D58():
    deopt 210 [i13, r120];
  L48():
    goto L55(i28);
  L55(i48):
    unlink1 = ldf unlink;
    check L228() else D77();
  L73():
    goto L74(i79);
  L74(i85):
    file_copy = ldf `file.copy`;
    check L286() else D109();
  L78():
    goto L77(i79, NULL);
  L192():
    goto L43(i13, r120);
  L207():
    verb16 = ld verb2;
    check L208() else D68();
  L252():
    res30 = ld res;
    check L254() else D90();
  L253():
    r179 = dyn base17(<sym res>, "status");
    goto L64(i56, r179);
  L282():
    cat7 = ldf cat;
    check L283() else D107();
  L299():
    cat8 = ldf cat;
    check L300() else D116();
  D68():
    deopt 241 [i28, verb16];
  D77():
    deopt 275 [i48];
  D90():
    deopt 315 [i56, res30];
  D107():
    deopt 369 [i79];
  D109():
    deopt 375 [i85];
  D116():
    deopt 399 [i79];
  L208():
    verb17 = force? verb16;
    checkMissing(verb17);
    c55 = `as.logical`(verb17);
    if c55 then L209() else L49(i28, c55);
  L228():
    p51 = prom<V +>{
      tf12 = ld tf2;
      tf13 = force? tf12;
      checkMissing(tf13);
      return tf13;
    };
    r155 = dyn unlink1(p51);
    check L229() else D78();
  L254():
    res31 = force? res30;
    checkMissing(res31);
    attr2 = ldf attr in base;
    r180 = dyn attr2(res31, "status");
    check L255() else D91();
  L283():
    r202 = dyn cat7(" =====> using it !!\n");
    check L284() else D108();
  L286():
    p71 = prom<V +>{
      tf20 = ld tf;
      tf21 = force? tf20;
      checkMissing(tf21);
      return tf21;
    };
    p74 = prom<V +>{
      p72 = ld p;
      p73 = force? p72;
      checkMissing(p73);
      return p73;
    };
    r206 = dyn file_copy[, , overwrite](p71, p74, TRUE);
    check L287() else D110();
  L300():
    r216 = dyn cat8(" .. not worth using\n");
    check L301() else D117();
  D78():
    deopt 277 [i48, r155];
  D91():
    deopt 319 [i56, r180];
  D108():
    deopt 371 [i79, r202];
  D110():
    deopt 380 [i85, r206];
  D117():
    deopt 401 [i79, r216];
  L49(i35, c57):
    st res0 = c57;
    cat4 = ldf cat;
    check L215() else D71();
  L209():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L210() else L211();
  L229():
    goto L56(i48, r155);
  L255():
    goto L64(i56, r180);
  L284():
    goto L74(i79);
  L287():
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L288() else L289();
  L301():
    goto L77(i79, r216);
  D71():
    deopt 253 [i35];
  L50(i38, c60, r142):
    r144 = `!`(r142);
    c61 = `as.logical`(r144);
    c62 = `&&`(c60, c61);
    goto L49(i38, c62);
  L75(i88, r208):
    l1 = ld ans;
    c99 = `is.object`(l1);
    if c99 then L293() else L294(i88, r208, l1);
  L210():
    res12 = ld res;
    check L212() else D69();
  L211():
    r141 = dyn base13(<sym res>);
    goto L50(i28, c55, r141);
  L215():
    p50 = prom<V +>{
      sprintf6 = ldf sprintf;
      p49 = prom<V +>{
        res14 = ld res0;
        res15 = force? res14;
        checkMissing(res15);
        c64 = `as.logical`(res15);
        if c64 then L1() else L0();
      L0():
        res16 = ld res;
        res17 = force? res16;
        checkMissing(res17);
        return res17;
      L1():
        return "<>";
      };
      r146 = dyn sprintf6(" + qpdf: res=%s; ", p49);
      return r146;
    };
    r148 = dyn cat4(p50);
    check L216() else D72();
  L288():
    old8 = ld old;
    check L290() else D111();
  L289():
    r207 = dyn base18(<sym old>, <sym new>);
    goto L75(i85, r207);
  D69():
    deopt 245 [i28, c55, res12];
  D72():
    deopt 255 [i35, r148];
  D111():
    deopt 383 [i85, old8];
  L76(i92, r213, dx3):
    st ans = dx3;
    goto L77(i92, r213);
  L212():
    res13 = force? res12;
    checkMissing(res13);
    length4 = ldf length in base;
    r143 = dyn length4(res13);
    check L213() else D70();
  L216():
    verb18 = ld verb2;
    check L217() else D73();
  L290():
    old9 = force? old8;
    checkMissing(old9);
    new8 = ld new;
    check L291() else D112();
  L293():
    dr2 = tryDispatchBuiltin.0("[<-", l1, r208);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L295() else L294(i88, r208, dr2);
  L294(i90, r211, l3):
    p75 = ld p;
    check L296() else D114();
  D70():
    deopt 248 [i28, c55, r143];
  D73():
    deopt 256 [i35, verb18];
  D112():
    deopt 385 [i85, new8];
  D114():
    deopt 390 [i90, r211, l3, r208, p75];
  L213():
    goto L50(i28, c55, r143);
  L217():
    verb19 = force? verb18;
    checkMissing(verb19);
    c65 = `as.logical`(verb19);
    if c65 then L218() else L51();
  L291():
    new9 = force? new8;
    checkMissing(new9);
    c98 = ldf c in base;
    r209 = dyn c98(old9, new9);
    check L292() else D113();
  L295():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L76(i88, r208, dx2);
  L296():
    p76 = force? p75;
    ___ = ldf `[<-` in base;
    r214 = dyn ___(l1, p76, <missing>, r208);
    goto L76(i90, r211, r214);
  D113():
    deopt 388 [i85, r209];
  L51():
    goto L54(i35, NULL);
  L54(i47, r152):
    goto L55(i47);
  L218():
    res18 = ld res0;
    check L219() else D74();
  L292():
    goto L75(i85, r209);
  D74():
    deopt 258 [i35, res18];
  L219():
    res19 = force? res18;
    checkMissing(res19);
    c66 = `as.logical`(res19);
    if c66 then L220() else L52();
  L52():
    sym14 = ldf attr;
    base14 = ldf attr in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L222() else L223();
  L53(i44, r149):
    st res = r149;
    goto L54(i44, r149);
  L220():
    goto L53(i35, 0.0);
  L222():
    res20 = ld res;
    check L224() else D75();
  L223():
    r150 = dyn base14(<sym res>, "status");
    goto L53(i35, r150);
  D75():
    deopt 264 [i35, res20];
  L224():
    res21 = force? res20;
    checkMissing(res21);
    attr1 = ldf attr in base;
    r151 = dyn attr1(res21, "status");
    check L225() else D76();
  D76():
    deopt 268 [i35, r151];
  L225():
    goto L53(i35, r151);
  }
}