fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1663729635;
    st analyze_check_log = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1663729635(log, drop_ok, `...`) {
  (reg log:*, reg drop_ok:*, reg ddd:dots) -+> V { var log:*, var drop_ok:*, reg drop_ok_isMissing:L, reg drop_ok_orDefault:*, var `...`:dots?, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg drop_ok1:*, reg drop_ok2:V, reg c:L, reg c1:L, reg drop_ok3:*, reg drop_ok4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c2:cls, reg r6:V, reg read_check_log:cls, reg log1:*, reg log2:V, reg p:p(V +), reg ddd1:dots?, reg r8:V, reg grep:cls, reg re:*, reg re1:V, reg p1:p(V +), reg lines:*, reg lines1:V, reg p2:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg pos:*, reg pos1:V, reg length:cls, reg r14:V, reg c3:L, reg sub:cls, reg re2:*, reg re3:V, reg p3:p(V +), reg lines2:*, reg lines3:V, reg c4:L, reg lines5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pos2:*, reg pos3:V, reg c5:L, reg lines7:V, reg pos5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg lines9:V, reg dx3:V, reg __:cls, reg r16:V, reg __1:cls, reg r17:V, reg p4:p(V +), reg r19:V, reg iconv:cls, reg lines10:*, reg lines11:V, reg p5:p(V +), reg enc:*, reg enc1:V, reg p6:p(V +), reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg validUTF8:cls, reg lines12:*, reg lines13:V, reg p7:p(V +), reg r26:V, reg r27:V, reg any:cls, reg r28:V, reg c6:L, reg iconv1:cls, reg lines14:*, reg lines15:V, reg c7:L, reg lines17:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg bad:*, reg bad1:V, reg __2:cls, reg r29:V, reg p8:p(V +), reg r31:V, reg l:*, reg c8:L, reg r33:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r35:V, reg dx7:V, reg bad2:*, reg bad3:V, reg ___:cls, reg r36:V, reg lines18:*, reg lines19:V, reg sprintf:cls, reg lqa:*, reg lqa1:V, reg p9:p(V +), reg rqa:*, reg rqa1:V, reg p10:p(V +), reg lqa2:*, reg lqa3:V, reg p11:p(V +), reg rqa2:*, reg rqa3:V, reg p12:p(V +), reg r43:V, reg grep1:cls, reg re4:*, reg re5:V, reg p13:p(V +), reg lines20:*, reg lines21:V, reg p14:p(V +), reg r46:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r47:V, reg r48:V, reg pos6:*, reg pos7:V, reg length1:cls, reg r49:V, reg c9:L, reg pos8:*, reg pos9:V, reg c10:L, reg pos11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r50:V, reg lines22:*, reg lines23:V, reg c11:L, reg lines25:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg pos12:*, reg pos13:V, reg __4:cls, reg r51:V, reg sub1:cls, reg re6:*, reg re7:V, reg p15:p(V +), reg txt:*, reg txt1:V, reg p16:p(V +), reg r54:V, reg sub2:cls, reg re8:*, reg re9:V, reg p17:p(V +), reg txt2:*, reg txt3:V, reg p18:p(V +), reg r57:V, reg lines26:*, reg lines27:V, reg c12:L, reg lines29:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r58:V, reg lines32:V, reg r59:V, reg pos14:*, reg pos15:V, reg r60:V, reg r61:I, reg __5:cls, reg r62:V, reg lines33:*, reg lines34:V, reg c13:L, reg lines36:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r63:V, reg lines39:V, reg r64:V, reg pos16:*, reg pos17:V, reg r65:I, reg r66:V, reg __6:cls, reg r67:V, reg sprintf1:cls, reg lqa4:*, reg lqa5:V, reg p19:p(V +), reg rqa4:*, reg rqa5:V, reg p20:p(V +), reg r70:V, reg grep2:cls, reg re10:*, reg re11:V, reg p21:p(V +), reg lines40:*, reg lines41:V, reg p22:p(V +), reg r73:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r74:V, reg r75:V, reg pos18:*, reg pos19:V, reg length2:cls, reg r76:V, reg c14:L, reg pos20:*, reg pos21:V, reg c15:L, reg pos23:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg __7:cls, reg r77:V, reg lines42:*, reg lines43:V, reg c16:L, reg lines45:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg pos24:*, reg pos25:V, reg __8:cls, reg r78:V, reg sub3:cls, reg re12:*, reg re13:V, reg p23:p(V +), reg txt4:*, reg txt5:V, reg p24:p(V +), reg r81:V, reg lines46:*, reg lines47:V, reg c17:L, reg lines49:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r82:V, reg lines52:V, reg r83:V, reg pos26:*, reg pos27:V, reg r84:V, reg r85:I, reg __9:cls, reg r86:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r87:V, reg r88:V, reg startsWith:cls, reg lines53:*, reg lines54:V, reg p25:p(V +), reg r90:V, reg any1:cls, reg r91:V, reg r92:V, reg c18:L, reg sprintf2:cls, reg lqa6:*, reg lqa7:V, reg p26:p(V +), reg rqa6:*, reg rqa7:V, reg p27:p(V +), reg r96:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r97:V, reg r98:V, reg grep3:cls, reg re14:*, reg re15:V, reg p28:p(V +), reg header:*, reg header1:V, reg p29:p(V +), reg r101:V, reg length3:cls, reg r102:V, reg c19:L, reg sub4:cls, reg re16:*, reg re17:V, reg p30:p(V +), reg header2:*, reg header3:V, reg c20:L, reg header5:V, reg dr22:V, reg dc11:L, reg dx23:V, reg dx24:V, reg pos28:*, reg pos29:V, reg c21:L, reg header7:V, reg pos31:V, reg dr24:V, reg dc12:L, reg dx25:V, reg header9:V, reg dx26:V, reg __10:cls, reg r104:V, reg __11:cls, reg r105:V, reg p31:p(V +), reg r107:V, reg r108:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r109:V, reg r110:V, reg lines55:*, reg lines56:V, reg length4:cls, reg r111:V, reg which:cls, reg lines57:*, reg lines58:V, reg r112:V, reg p32:p(V +), reg r114:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r115:V, reg r116:V, reg pos32:*, reg pos33:V, reg length5:cls, reg r117:V, reg c22:L, reg c24:V, reg pos34:*, reg pos35:V, reg c25:L, reg c27:L, reg pos37:V, reg dr26:V, reg dc13:L, reg dx27:V, reg c29:L, reg dx28:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r118:V, reg c32:L, reg pos40:V, reg r119:V, reg pos41:*, reg pos42:V, reg length6:cls, reg r120:V, reg __12:cls, reg r121:V, reg len:*, reg len1:V, reg r122:V, reg c33:L, reg c34:V, reg c36:L, reg c38:V, reg startsWith1:cls, reg lines59:*, reg lines60:V, reg c39:L, reg lines62:V, reg dr28:V, reg dc14:L, reg dx29:V, reg dx30:V, reg pos43:*, reg pos44:V, reg r123:V, reg __13:cls, reg r124:V, reg p33:p(V +), reg r126:V, reg c40:L, reg c41:V, reg c43:L, reg lines63:*, reg lines64:V, reg c44:L, reg lines66:V, reg dr30:V, reg dc15:L, reg dx31:V, reg dx32:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r127:V, reg lines69:V, reg r128:V, reg pos45:*, reg pos46:V, reg r129:V, reg r130:I, reg __14:cls, reg r131:V, reg startsWith2:cls, reg lines70:*, reg lines71:V, reg c45:L, reg lines73:V, reg dr32:V, reg dc16:L, reg dx34:V, reg dx35:V, reg len2:*, reg len3:V, reg __15:cls, reg r132:V, reg p34:p(V +), reg r134:V, reg c46:L, reg lines74:*, reg lines75:V, reg c47:L, reg lines77:V, reg dr34:V, reg dc17:L, reg dx36:V, reg dx37:V, reg len4:*, reg len5:V, reg r135:V, reg __16:cls, reg r136:V, reg len6:*, reg len7:V, reg r137:V, reg grepl:cls, reg lines78:*, reg lines79:V, reg c48:L, reg lines81:V, reg dr36:V, reg dc18:L, reg dx38:V, reg dx39:V, reg len8:*, reg len9:V, reg __17:cls, reg r138:V, reg p35:p(V +), reg r140:V, reg c49:L, reg lines82:*, reg lines83:V, reg c50:L, reg lines85:V, reg dr38:V, reg dc19:L, reg dx40:V, reg dx41:V, reg len10:*, reg len11:V, reg r141:V, reg __18:cls, reg r142:V, reg len12:*, reg len13:V, reg r143:V, reg startsWith3:cls, reg lines86:*, reg lines87:V, reg c51:L, reg lines89:V, reg dr40:V, reg dc20:L, reg dx42:V, reg dx43:V, reg len14:*, reg len15:V, reg __19:cls, reg r145:V, reg p36:p(V +), reg r147:V, reg c52:L, reg lines90:*, reg lines91:V, reg c53:L, reg lines93:V, reg dr42:V, reg dc21:L, reg dx44:V, reg dx45:V, reg len16:*, reg len17:V, reg r148:V, reg __20:cls, reg r149:V, reg len18:*, reg len19:V, reg r150:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r152:V, reg r153:V, reg grep4:cls, reg lines94:*, reg lines95:V, reg c54:L, reg lines97:V, reg dr44:V, reg dc22:L, reg dx46:V, reg dx47:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r154:V, reg lines100:V, reg r155:V, reg len20:*, reg len21:V, reg r156:V, reg len22:*, reg len23:V, reg c55:cls, reg r157:V, reg __21:cls, reg r158:V, reg p37:p(V +), reg r160:V, reg length7:cls, reg r161:V, reg num:*, reg num1:V, reg r162:V, reg c56:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r163:V, reg r164:V, reg len24:*, reg len25:V, reg num2:*, reg num3:V, reg r165:V, reg r166:V, reg len26:*, reg len27:V, reg seq_int:cls, reg r167:V, reg lines101:*, reg lines102:V, reg c57:L, reg lines104:V, reg dr46:V, reg dc23:L, reg dx48:V, reg dx49:V, reg pos47:*, reg pos48:V, reg r168:V, reg __22:cls, reg r169:V, reg len28:*, reg len29:V, reg num4:*, reg num5:V, reg r170:V, reg lines105:*, reg lines106:V, reg c58:L, reg lines108:V, reg dr48:V, reg dc24:L, reg dx50:V, reg dx51:V, reg len30:*, reg len31:V, reg __23:cls, reg r171:V, reg r172:V, reg c59:L, reg lines109:*, reg lines110:V, reg c60:L, reg lines112:V, reg dr50:V, reg dc25:L, reg dx52:V, reg dx53:V, reg len32:*, reg len33:V, reg r173:V, reg __24:cls, reg r174:V, reg r175:cls, reg analyze_lines:cls, reg lines113:*, reg lines114:V, reg p38:p(V +), reg r177:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r178:V, reg r179:V, reg chunks:*, reg chunks1:V, reg length8:cls, reg r180:V, reg r181:V, reg c61:L, reg c63:V, reg isFALSE:cls, reg drop_ok5:*, reg drop_ok6:V, reg p39:p(V +), reg r183:V, reg r184:V, reg c64:L, reg c65:V, reg c67:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r185:V, reg r186:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r187:V, reg r188:V, reg list:cls, reg r189:V, reg list1:cls, reg r190:V, reg make_results:cls, reg package:*, reg package1:V, reg p40:p(V +), reg version:*, reg version1:V, reg p41:p(V +), reg flags:*, reg flags1:V, reg p42:p(V +), reg chunks2:*, reg chunks3:V, reg p43:p(V +), reg r196:V |
    mkenv;
    st log = log;
    drop_ok_isMissing = missing.0(drop_ok);
    if drop_ok_isMissing then L0(TRUE) else L0(drop_ok);
  L0(drop_ok_orDefault):
    st drop_ok = drop_ok_orDefault;
    st `...` = ddd;
    r = clos inner734276427;
    st make_results = r;
    st lqa = "'|\u2018";
    st rqa = "'|\u2019";
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L64() else L65();
  L1(r2):
    c1 = `as.logical`(r2);
    if c1 then L67() else L2();
  L64():
    drop_ok1 = ld drop_ok;
    check L66() else D0();
  L65():
    r1 = dyn base(<sym drop_ok>);
    goto L1(r1);
  D0():
    deopt 10 [drop_ok1];
  L2():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L70() else L71();
  L3():
    read_check_log = ldf read_check_log;
    check L73() else D3();
  L66():
    drop_ok2 = force? drop_ok1;
    checkMissing(drop_ok2);
    c = `is.character`(drop_ok2);
    goto L1(c);
  L67():
    drop_ok3 = ld drop_ok;
    check L68() else D1();
  D1():
    deopt 13 [drop_ok3];
  D3():
    deopt 28 [];
  L4(r5):
    st drop_ok_status_tags = r5;
    goto L3();
  L68():
    drop_ok4 = force? drop_ok3;
    checkMissing(drop_ok4);
    st drop_ok_status_tags = drop_ok4;
    st drop_ok = TRUE;
    goto L3();
  L70():
    c2 = ldf c in base;
    r6 = dyn c2("OK", "NONE", "SKIPPED");
    check L72() else D2();
  L71():
    r4 = dyn base1("OK", "NONE", "SKIPPED");
    goto L4(r4);
  L73():
    p = prom<V +>{
      log1 = ld log;
      log2 = force? log1;
      checkMissing(log2);
      return log2;
    };
    ddd1 = ld `...`;
    r8 = dyn read_check_log[, `...`](p, ddd1);
    check L74() else D4();
  D2():
    deopt 25 [r6];
  D4():
    deopt 31 [r8];
  L72():
    goto L4(r6);
  L74():
    st lines = r8;
    st re = "^\\* using session charset: ";
    grep = ldf grep;
    check L75() else D5();
  D5():
    deopt 37 [];
  L75():
    p1 = prom<V +>{
      re = ld re;
      re1 = force? re;
      checkMissing(re1);
      return re1;
    };
    p2 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    r11 = dyn grep[, , perl, useBytes](p1, p2, TRUE, TRUE);
    check L76() else D6();
  D6():
    deopt 44 [r11];
  L76():
    st pos = r11;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L77() else L78();
  L5(r13):
    c3 = `as.logical`(r13);
    if c3 then L81() else L6();
  L77():
    pos = ld pos;
    check L79() else D7();
  L78():
    r12 = dyn base2(<sym pos>);
    goto L5(r12);
  D7():
    deopt 48 [pos];
  L6():
    popenv;
    return NULL;
  L79():
    pos1 = force? pos;
    checkMissing(pos1);
    length = ldf length in base;
    r14 = dyn length(pos1);
    check L80() else D8();
  L81():
    sub = ldf sub;
    check L82() else D9();
  D8():
    deopt 51 [r14];
  D9():
    deopt 53 [];
  L80():
    goto L5(r14);
  L82():
    p3 = prom<V +>{
      re2 = ld re;
      re3 = force? re2;
      checkMissing(re3);
      return re3;
    };
    p4 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      c4 = `is.object`(lines3);
      if c4 then L2() else L3(lines3);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", lines3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(lines5):
      pos2 = ld pos;
      pos3 = force? pos2;
      checkMissing(pos3);
      c5 = `is.object`(pos3);
      if c5 then L5() else L6(lines5, pos3);
    L1(lines9, dx3):
      __1 = ldf `[` in base;
      r17 = dyn __1(lines9, dx3);
      goto L0(r17);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[", pos3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(lines5, dr2);
    L6(lines7, pos5):
      __ = ldf `[` in base;
      r16 = dyn __(pos5, 1);
      goto L1(lines7, r16);
    L7():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(lines5, dx2);
    };
    r19 = dyn sub[, , , useBytes](p3, "", p4, TRUE);
    check L83() else D10();
  D10():
    deopt 59 [r19];
  L83():
    st enc = r19;
    iconv = ldf iconv;
    check L84() else D11();
  D11():
    deopt 62 [];
  L84():
    p5 = prom<V +>{
      lines10 = ld lines;
      lines11 = force? lines10;
      checkMissing(lines11);
      return lines11;
    };
    p6 = prom<V +>{
      enc = ld enc;
      enc1 = force? enc;
      checkMissing(enc1);
      return enc1;
    };
    r22 = dyn iconv[, , , sub](p5, p6, "UTF-8", "byte");
    check L85() else D12();
  D12():
    deopt 68 [r22];
  L85():
    st lines = r22;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L86() else L87();
  L7(r24):
    c6 = `as.logical`(r24);
    if c6 then L91() else L8();
  L86():
    validUTF8 = ldf validUTF8;
    check L88() else D13();
  L87():
    r23 = dyn base3(<lang `<-`(bad, `!`(validUTF8(lines)))>);
    goto L7(r23);
  D13():
    deopt 73 [];
  L8():
    goto L10();
  L10():
    st package = "???";
    st version = "";
    lines18 = ld lines;
    check L101() else D19();
  L88():
    p7 = prom<V +>{
      lines12 = ld lines;
      lines13 = force? lines12;
      checkMissing(lines13);
      return lines13;
    };
    r26 = dyn validUTF8(p7);
    check L89() else D14();
  L91():
    iconv1 = ldf iconv;
    check L92() else D16();
  D14():
    deopt 75 [r26];
  D16():
    deopt 81 [];
  D19():
    deopt 104 [lines18];
  L89():
    r27 = `!`(r26);
    st bad = r27;
    any = ldf any in base;
    r28 = dyn any(r27);
    check L90() else D15();
  L92():
    p8 = prom<V +>{
      lines14 = ld lines;
      lines15 = force? lines14;
      checkMissing(lines15);
      c7 = `is.object`(lines15);
      if c7 then L1() else L2(lines15);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", lines15);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(lines17):
      bad = ld bad;
      bad1 = force? bad;
      __2 = ldf `[` in base;
      r29 = dyn __2(lines17, bad1);
      goto L0(r29);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r31 = dyn iconv1[, to, sub](p8, "ASCII", "byte");
    check L93() else D17();
  L101():
    lines19 = force? lines18;
    checkMissing(lines19);
    st header = lines19;
    sprintf = ldf sprintf;
    check L102() else D20();
  D15():
    deopt 79 [r28];
  D17():
    deopt 87 [r31];
  D20():
    deopt 108 [];
  L90():
    goto L7(r28);
  L93():
    l = ld lines;
    c8 = `is.object`(l);
    if c8 then L94() else L95(r31, l);
  L102():
    p9 = prom<V +>{
      lqa = ld lqa;
      lqa1 = force? lqa;
      checkMissing(lqa1);
      return lqa1;
    };
    p10 = prom<V +>{
      rqa = ld rqa;
      rqa1 = force? rqa;
      checkMissing(rqa1);
      return rqa1;
    };
    p11 = prom<V +>{
      lqa2 = ld lqa;
      lqa3 = force? lqa2;
      checkMissing(lqa3);
      return lqa3;
    };
    p12 = prom<V +>{
      rqa2 = ld rqa;
      rqa3 = force? rqa2;
      checkMissing(rqa3);
      return rqa3;
    };
    r43 = dyn sprintf("^\\* this is package (%s)(.*)(%s) version (%s)(.*)(%s)$", p9, p10, p11, p12);
    check L103() else D21();
  D21():
    deopt 114 [r43];
  L9(r35, dx7):
    st lines = dx7;
    goto L10();
  L94():
    dr6 = tryDispatchBuiltin.0("[<-", l, r31);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L96() else L95(r31, dr6);
  L95(r33, l2):
    bad2 = ld bad;
    check L97() else D18();
  L103():
    st re = r43;
    grep1 = ldf grep;
    check L104() else D22();
  D18():
    deopt 89 [r33, l2, r31, bad2];
  D22():
    deopt 117 [];
  L96():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L9(r31, dx6);
  L97():
    bad3 = force? bad2;
    ___ = ldf `[<-` in base;
    r36 = dyn ___(l2, r31, bad3);
    goto L9(r33, r36);
  L104():
    p13 = prom<V +>{
      re4 = ld re;
      re5 = force? re4;
      checkMissing(re5);
      return re5;
    };
    p14 = prom<V +>{
      lines20 = ld lines;
      lines21 = force? lines20;
      checkMissing(lines21);
      return lines21;
    };
    r46 = dyn grep1[, , perl](p13, p14, TRUE);
    check L105() else D23();
  D23():
    deopt 122 [r46];
  L105():
    st pos = r46;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L106() else L107();
  L12(r48):
    c9 = `as.logical`(r48);
    if c9 then L110() else L13();
  L106():
    pos6 = ld pos;
    check L108() else D24();
  L107():
    r47 = dyn base4(<sym pos>);
    goto L12(r47);
  D24():
    deopt 126 [pos6];
  L13():
    sprintf1 = ldf sprintf;
    check L139() else D37();
  L20():
    sprintf2 = ldf sprintf;
    check L175() else D53();
  L108():
    pos7 = force? pos6;
    checkMissing(pos7);
    length1 = ldf length in base;
    r49 = dyn length1(pos7);
    check L109() else D25();
  L110():
    pos8 = ld pos;
    check L111() else D26();
  D25():
    deopt 129 [r49];
  D26():
    deopt 130 [pos8];
  D37():
    deopt 180 [];
  D53():
    deopt 247 [];
  L109():
    goto L12(r49);
  L111():
    pos9 = force? pos8;
    checkMissing(pos9);
    c10 = `is.object`(pos9);
    if c10 then L112() else L113(pos9);
  L139():
    p19 = prom<V +>{
      lqa4 = ld lqa;
      lqa5 = force? lqa4;
      checkMissing(lqa5);
      return lqa5;
    };
    p20 = prom<V +>{
      rqa4 = ld rqa;
      rqa5 = force? rqa4;
      checkMissing(rqa5);
      return rqa5;
    };
    r70 = dyn sprintf1("^\\* checking for file (%s)(.*)/DESCRIPTION(%s).*$", p19, p20);
    check L140() else D38();
  L175():
    p26 = prom<V +>{
      lqa6 = ld lqa;
      lqa7 = force? lqa6;
      checkMissing(lqa7);
      return lqa7;
    };
    p27 = prom<V +>{
      rqa6 = ld rqa;
      rqa7 = force? rqa6;
      checkMissing(rqa7);
      return rqa7;
    };
    r96 = dyn sprintf2("^\\* using options? (%s)(.*)(%s)$", p26, p27);
    check L176() else D54();
  D38():
    deopt 184 [r70];
  D54():
    deopt 251 [r96];
  L14(dx9):
    st pos = dx9;
    lines22 = ld lines;
    check L115() else D27();
  L112():
    dr8 = tryDispatchBuiltin.1("[", pos9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L114() else L113(dr8);
  L113(pos11):
    __3 = ldf `[` in base;
    r50 = dyn __3(pos11, 1);
    goto L14(r50);
  L140():
    st re = r70;
    grep2 = ldf grep;
    check L141() else D39();
  L176():
    st re = r96;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L177() else L178();
  D27():
    deopt 136 [lines22];
  D39():
    deopt 187 [];
  L29(r98):
    c19 = `as.logical`(r98);
    if c19 then L182() else L30();
  L114():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L14(dx8);
  L115():
    lines23 = force? lines22;
    checkMissing(lines23);
    c11 = `is.object`(lines23);
    if c11 then L116() else L117(lines23);
  L141():
    p21 = prom<V +>{
      re10 = ld re;
      re11 = force? re10;
      checkMissing(re11);
      return re11;
    };
    p22 = prom<V +>{
      lines40 = ld lines;
      lines41 = force? lines40;
      checkMissing(lines41);
      return lines41;
    };
    r73 = dyn grep2[, , perl](p21, p22, TRUE);
    check L142() else D40();
  L177():
    grep3 = ldf grep;
    check L179() else D55();
  L178():
    r97 = dyn base10(<lang `<-`(pos, grep(re, header, perl=TRUE))>);
    goto L29(r97);
  D40():
    deopt 192 [r73];
  D55():
    deopt 256 [];
  L15(dx11):
    st txt = dx11;
    sub1 = ldf sub;
    check L120() else D29();
  L30():
    goto L31("");
  L31(r108):
    st flags = r108;
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L186() else L187();
  L116():
    dr10 = tryDispatchBuiltin.1("[", lines23);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L118() else L117(dr10);
  L117(lines25):
    pos12 = ld pos;
    check L119() else D28();
  L142():
    st pos = r73;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L143() else L144();
  L179():
    p28 = prom<V +>{
      re14 = ld re;
      re15 = force? re14;
      checkMissing(re15);
      return re15;
    };
    p29 = prom<V +>{
      header = ld header;
      header1 = force? header;
      checkMissing(header1);
      return header1;
    };
    r101 = dyn grep3[, , perl](p28, p29, TRUE);
    check L180() else D56();
  L182():
    sub4 = ldf sub;
    check L183() else D58();
  D28():
    deopt 138 [lines25, pos12];
  D29():
    deopt 143 [];
  D56():
    deopt 261 [r101];
  D58():
    deopt 266 [];
  L21(r75):
    c14 = `as.logical`(r75);
    if c14 then L147() else L22();
  L32(r110):
    st len = r110;
    which = ldf which;
    check L190() else D62();
  L118():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L15(dx10);
  L119():
    pos13 = force? pos12;
    __4 = ldf `[` in base;
    r51 = dyn __4(lines25, pos13);
    goto L15(r51);
  L120():
    p15 = prom<V +>{
      re6 = ld re;
      re7 = force? re6;
      checkMissing(re7);
      return re7;
    };
    p16 = prom<V +>{
      txt = ld txt;
      txt1 = force? txt;
      checkMissing(txt1);
      return txt1;
    };
    r54 = dyn sub1[, , , perl](p15, "\\2", p16, TRUE);
    check L121() else D30();
  L143():
    pos18 = ld pos;
    check L145() else D41();
  L144():
    r74 = dyn base7(<sym pos>);
    goto L21(r74);
  L180():
    st pos = r101;
    length3 = ldf length in base;
    r102 = dyn length3(r101);
    check L181() else D57();
  L183():
    p30 = prom<V +>{
      re16 = ld re;
      re17 = force? re16;
      checkMissing(re17);
      return re17;
    };
    p31 = prom<V +>{
      header2 = ld header;
      header3 = force? header2;
      checkMissing(header3);
      c20 = `is.object`(header3);
      if c20 then L2() else L3(header3);
    L0(dx24):
      return dx24;
    L2():
      dr22 = tryDispatchBuiltin.1("[", header3);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L4() else L3(dr22);
    L3(header5):
      pos28 = ld pos;
      pos29 = force? pos28;
      checkMissing(pos29);
      c21 = `is.object`(pos29);
      if c21 then L5() else L6(header5, pos29);
    L1(header9, dx26):
      __11 = ldf `[` in base;
      r105 = dyn __11(header9, dx26);
      goto L0(r105);
    L4():
      dx23 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx23);
    L5():
      dr24 = tryDispatchBuiltin.1("[", pos29);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L7() else L6(header5, dr24);
    L6(header7, pos31):
      __10 = ldf `[` in base;
      r104 = dyn __10(pos31, 1);
      goto L1(header7, r104);
    L7():
      dx25 = getTryDispatchBuiltinValue(dr24);
      goto L1(header5, dx25);
    };
    r107 = dyn sub4[, , , perl](p30, "\\2", p31, TRUE);
    check L184() else D59();
  L186():
    lines55 = ld lines;
    check L188() else D60();
  L187():
    r109 = dyn base11(<sym lines>);
    goto L32(r109);
  D30():
    deopt 149 [r54];
  D41():
    deopt 196 [pos18];
  D57():
    deopt 264 [r102];
  D59():
    deopt 272 [r107];
  D60():
    deopt 278 [lines55];
  D62():
    deopt 284 [];
  L22():
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L167() else L168();
  L121():
    st package = r54;
    sub2 = ldf sub;
    check L122() else D31();
  L145():
    pos19 = force? pos18;
    checkMissing(pos19);
    length2 = ldf length in base;
    r76 = dyn length2(pos19);
    check L146() else D42();
  L147():
    pos20 = ld pos;
    check L148() else D43();
  L181():
    goto L29(r102);
  L184():
    goto L31(r107);
  L188():
    lines56 = force? lines55;
    checkMissing(lines56);
    length4 = ldf length in base;
    r111 = dyn length4(lines56);
    check L189() else D61();
  L190():
    p32 = prom<V +>{
      lines57 = ld lines;
      lines58 = force? lines57;
      checkMissing(lines58);
      r112 = `==`(lines58, "* DONE");
      return r112;
    };
    r114 = dyn which(p32);
    check L191() else D63();
  D31():
    deopt 152 [];
  D42():
    deopt 199 [r76];
  D43():
    deopt 200 [pos20];
  D61():
    deopt 281 [r111];
  D63():
    deopt 286 [r114];
  L27(r88):
    r92 = `!`(r88);
    c18 = `as.logical`(r92);
    if c18 then L172() else L28();
  L122():
    p17 = prom<V +>{
      re8 = ld re;
      re9 = force? re8;
      checkMissing(re9);
      return re9;
    };
    p18 = prom<V +>{
      txt2 = ld txt;
      txt3 = force? txt2;
      checkMissing(txt3);
      return txt3;
    };
    r57 = dyn sub2[, , , perl](p17, "\\5", p18, TRUE);
    check L123() else D32();
  L146():
    goto L21(r76);
  L148():
    pos21 = force? pos20;
    checkMissing(pos21);
    c15 = `is.object`(pos21);
    if c15 then L149() else L150(pos21);
  L167():
    startsWith = ldf startsWith;
    check L169() else D50();
  L168():
    r87 = dyn base9(<lang startsWith(lines, "* checking ")>);
    goto L27(r87);
  L189():
    goto L32(r111);
  L191():
    st pos = r114;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L192() else L193();
  D32():
    deopt 158 [r57];
  D50():
    deopt 234 [];
  L23(dx18):
    st pos = dx18;
    lines42 = ld lines;
    check L152() else D44();
  L28():
    goto L20();
  L33(r116):
    c22 = `as.logical`(r116);
    if c22 then L196() else L34(c22);
  L123():
    st version = r57;
    lines26 = ld lines;
    check L124() else D33();
  L149():
    dr16 = tryDispatchBuiltin.1("[", pos21);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L151() else L150(dr16);
  L150(pos23):
    __7 = ldf `[` in base;
    r77 = dyn __7(pos23, 1);
    goto L23(r77);
  L169():
    p25 = prom<V +>{
      lines53 = ld lines;
      lines54 = force? lines53;
      checkMissing(lines54);
      return lines54;
    };
    r90 = dyn startsWith(p25, "* checking ");
    check L170() else D51();
  L172():
    popenv;
    return NULL;
  L192():
    pos32 = ld pos;
    check L194() else D64();
  L193():
    r115 = dyn base12(<sym pos>);
    goto L33(r115);
  D33():
    deopt 160 [lines26];
  D44():
    deopt 206 [lines42];
  D51():
    deopt 237 [r90];
  D64():
    deopt 290 [pos32];
  L34(c24):
    c36 = `as.logical`(c24);
    if c36 then L207() else L37(c36);
  L124():
    lines27 = force? lines26;
    checkMissing(lines27);
    c12 = `is.object`(lines27);
    if c12 then L125() else L126(lines27);
  L151():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L23(dx17);
  L152():
    lines43 = force? lines42;
    checkMissing(lines43);
    c16 = `is.object`(lines43);
    if c16 then L153() else L154(lines43);
  L170():
    any1 = ldf any in base;
    r91 = dyn any1(r90);
    check L171() else D52();
  L194():
    pos33 = force? pos32;
    checkMissing(pos33);
    length5 = ldf length in base;
    r117 = dyn length5(pos33);
    check L195() else D65();
  L196():
    pos34 = ld pos;
    check L197() else D66();
  D52():
    deopt 239 [r91];
  D65():
    deopt 293 [r117];
  D66():
    deopt 294 [c22, pos34];
  L16(dx13):
    st header = dx13;
    lines33 = ld lines;
    check L131() else D35();
  L24(dx20):
    st txt = dx20;
    sub3 = ldf sub;
    check L157() else D46();
  L37(c38):
    c43 = `as.logical`(c38);
    if c43 then L211() else L38();
  L125():
    dr12 = tryDispatchBuiltin.1("[", lines27);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L127() else L126(dr12);
  L126(lines29):
    sym5 = ldf seq_len;
    base5 = ldf seq_len in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L128() else L129();
  L153():
    dr18 = tryDispatchBuiltin.1("[", lines43);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L155() else L154(dr18);
  L154(lines45):
    pos24 = ld pos;
    check L156() else D45();
  L171():
    goto L27(r91);
  L195():
    goto L33(r117);
  L197():
    pos35 = force? pos34;
    checkMissing(pos35);
    c25 = `is.object`(pos35);
    if c25 then L198() else L199(c22, pos35);
  L207():
    startsWith1 = ldf startsWith;
    check L208() else D70();
  D35():
    deopt 170 [lines33];
  D45():
    deopt 208 [lines45, pos24];
  D46():
    deopt 213 [];
  D70():
    deopt 308 [c36];
  L17(lines32, r59):
    __5 = ldf `[` in base;
    r62 = dyn __5(lines32, r59);
    goto L16(r62);
  L35(c29, dx28):
    st pos = dx28;
    len = ld len;
    check L205() else D69();
  L38():
    startsWith2 = ldf startsWith;
    check L220() else D74();
  L41():
    r175 = clos inner1171288635;
    st analyze_lines = r175;
    analyze_lines = ldf analyze_lines;
    check L283() else D105();
  L127():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L16(dx12);
  L128():
    pos14 = ld pos;
    check L130() else D34();
  L129():
    r58 = dyn base5(<lang `-`(pos, 1)>);
    goto L17(lines29, r58);
  L131():
    lines34 = force? lines33;
    checkMissing(lines34);
    c13 = `is.object`(lines34);
    if c13 then L132() else L133(lines34);
  L155():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L24(dx19);
  L156():
    pos25 = force? pos24;
    __8 = ldf `[` in base;
    r78 = dyn __8(lines45, pos25);
    goto L24(r78);
  L157():
    p23 = prom<V +>{
      re12 = ld re;
      re13 = force? re12;
      checkMissing(re13);
      return re13;
    };
    p24 = prom<V +>{
      txt4 = ld txt;
      txt5 = force? txt4;
      checkMissing(txt5);
      return txt5;
    };
    r81 = dyn sub3[, , , perl](p23, "\\2", p24, TRUE);
    check L158() else D47();
  L198():
    dr26 = tryDispatchBuiltin.1("[", pos35);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L200() else L199(c22, dr26);
  L199(c27, pos37):
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L201() else L202();
  L208():
    p33 = prom<V +>{
      lines59 = ld lines;
      lines60 = force? lines59;
      checkMissing(lines60);
      c39 = `is.object`(lines60);
      if c39 then L1() else L2(lines60);
    L0(dx30):
      return dx30;
    L1():
      dr28 = tryDispatchBuiltin.1("[", lines60);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(lines62):
      pos43 = ld pos;
      pos44 = force? pos43;
      checkMissing(pos44);
      r123 = `+`(pos44, 1);
      __13 = ldf `[` in base;
      r124 = dyn __13(lines62, r123);
      goto L0(r124);
    L3():
      dx29 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx29);
    };
    r126 = dyn startsWith1(p33, "Status: ");
    check L209() else D71();
  L211():
    lines63 = ld lines;
    check L212() else D72();
  D34():
    deopt 163 [lines29, pos14];
  D47():
    deopt 219 [r81];
  D69():
    deopt 303 [c29, dx28, len];
  D71():
    deopt 311 [c36, r126];
  D72():
    deopt 313 [lines63];
  D74():
    deopt 324 [];
  D105():
    deopt 440 [];
  L18(dx15):
    st lines = dx15;
    goto L20();
  L36(c32, pos40, r119):
    __12 = ldf `[` in base;
    r121 = dyn __12(pos40, r119);
    goto L35(c32, r121);
  L130():
    pos15 = force? pos14;
    checkMissing(pos15);
    r60 = `-`(pos15, 1);
    r61 = seq_len(r60);
    goto L17(lines29, r61);
  L132():
    dr14 = tryDispatchBuiltin.1("[", lines34);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L134() else L133(dr14);
  L133(lines36):
    sym6 = ldf seq_len;
    base6 = ldf seq_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L135() else L136();
  L158():
    st package = r81;
    lines46 = ld lines;
    check L159() else D48();
  L200():
    dx27 = getTryDispatchBuiltinValue(dr26);
    goto L35(c22, dx27);
  L201():
    pos41 = ld pos;
    check L203() else D67();
  L202():
    r118 = dyn base13(<sym pos>);
    goto L36(c27, pos37, r118);
  L205():
    len1 = force? len;
    checkMissing(len1);
    r122 = `<`(dx28, len1);
    c33 = `as.logical`(r122);
    c34 = `&&`(c29, c33);
    goto L34(c34);
  L209():
    c40 = `as.logical`(r126);
    c41 = `&&`(c36, c40);
    goto L37(c41);
  L212():
    lines64 = force? lines63;
    checkMissing(lines64);
    c44 = `is.object`(lines64);
    if c44 then L213() else L214(lines64);
  L220():
    p34 = prom<V +>{
      lines70 = ld lines;
      lines71 = force? lines70;
      checkMissing(lines71);
      c45 = `is.object`(lines71);
      if c45 then L1() else L2(lines71);
    L0(dx35):
      return dx35;
    L1():
      dr32 = tryDispatchBuiltin.1("[", lines71);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(lines73):
      len2 = ld len;
      len3 = force? len2;
      __15 = ldf `[` in base;
      r132 = dyn __15(lines73, len3);
      goto L0(r132);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx34);
    };
    r134 = dyn startsWith2(p34, "* elapsed time ");
    check L221() else D75();
  L283():
    p38 = prom<V +>{
      lines113 = ld lines;
      lines114 = force? lines113;
      checkMissing(lines114);
      return lines114;
    };
    r177 = dyn analyze_lines(p38);
    check L284() else D106();
  D48():
    deopt 221 [lines46];
  D67():
    deopt 298 [c27, pos37, pos41];
  D75():
    deopt 327 [r134];
  D106():
    deopt 442 [r177];
  L19(lines39, r64):
    r66 = `-`(<missing>, r64);
    __6 = ldf `[` in base;
    r67 = dyn __6(lines39, r66);
    goto L18(r67);
  L39(dx32):
    st lines = dx32;
    goto L41();
  L134():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L18(dx14);
  L135():
    pos16 = ld pos;
    check L137() else D36();
  L136():
    r63 = dyn base6(<sym pos>);
    goto L19(lines36, r63);
  L159():
    lines47 = force? lines46;
    checkMissing(lines47);
    c17 = `is.object`(lines47);
    if c17 then L160() else L161(lines47);
  L203():
    pos42 = force? pos41;
    checkMissing(pos42);
    length6 = ldf length in base;
    r120 = dyn length6(pos42);
    check L204() else D68();
  L213():
    dr30 = tryDispatchBuiltin.1("[", lines64);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L215() else L214(dr30);
  L214(lines66):
    sym14 = ldf seq_len;
    base14 = ldf seq_len in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L216() else L217();
  L221():
    c46 = `as.logical`(r134);
    if c46 then L222() else L42();
  L284():
    st chunks = r177;
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L285() else L286();
  D36():
    deopt 173 [lines36, pos16];
  D68():
    deopt 301 [c27, pos37, r120];
  L25(dx22):
    st header = dx22;
    goto L20();
  L40(lines69, r128):
    __14 = ldf `[` in base;
    r131 = dyn __14(lines69, r128);
    goto L39(r131);
  L42():
    goto L47();
  L47():
    startsWith3 = ldf startsWith;
    check L240() else D84();
  L58(r179):
    r181 = `!`(r179);
    c61 = `as.logical`(r181);
    if c61 then L289() else L59(c61);
  L137():
    pos17 = force? pos16;
    checkMissing(pos17);
    r65 = seq_len(pos17);
    goto L19(lines36, r65);
  L160():
    dr20 = tryDispatchBuiltin.1("[", lines47);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L162() else L161(dr20);
  L161(lines49):
    sym8 = ldf seq_len;
    base8 = ldf seq_len in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L163() else L164();
  L204():
    goto L36(c27, pos37, r120);
  L215():
    dx31 = getTryDispatchBuiltinValue(dr30);
    goto L39(dx31);
  L216():
    pos45 = ld pos;
    check L218() else D73();
  L217():
    r127 = dyn base14(<lang `-`(pos, 1)>);
    goto L40(lines66, r127);
  L222():
    lines74 = ld lines;
    check L223() else D76();
  L285():
    chunks = ld chunks;
    check L287() else D107();
  L286():
    r178 = dyn base18(<sym chunks>);
    goto L58(r178);
  D73():
    deopt 316 [lines66, pos45];
  D76():
    deopt 328 [lines74];
  D84():
    deopt 363 [];
  D107():
    deopt 446 [chunks];
  L26(lines52, r83):
    __9 = ldf `[` in base;
    r86 = dyn __9(lines52, r83);
    goto L25(r86);
  L59(c63):
    c67 = `as.logical`(c63);
    if c67 then L293() else L60();
  L162():
    dx21 = getTryDispatchBuiltinValue(dr20);
    goto L25(dx21);
  L163():
    pos26 = ld pos;
    check L165() else D49();
  L164():
    r82 = dyn base8(<lang `-`(pos, 1)>);
    goto L26(lines49, r82);
  L218():
    pos46 = force? pos45;
    checkMissing(pos46);
    r129 = `-`(pos46, 1);
    r130 = seq_len(r129);
    goto L40(lines66, r130);
  L223():
    lines75 = force? lines74;
    checkMissing(lines75);
    c47 = `is.object`(lines75);
    if c47 then L224() else L225(lines75);
  L240():
    p36 = prom<V +>{
      lines86 = ld lines;
      lines87 = force? lines86;
      checkMissing(lines87);
      c51 = `is.object`(lines87);
      if c51 then L1() else L2(lines87);
    L0(dx43):
      return dx43;
    L1():
      dr40 = tryDispatchBuiltin.1("[", lines87);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(lines89):
      len14 = ld len;
      len15 = force? len14;
      __19 = ldf `[` in base;
      r145 = dyn __19(lines89, len15);
      goto L0(r145);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx42);
    };
    r147 = dyn startsWith3(p36, "Status: ");
    check L241() else D85();
  L287():
    chunks1 = force? chunks;
    checkMissing(chunks1);
    length8 = ldf length in base;
    r180 = dyn length8(chunks1);
    check L288() else D108();
  L289():
    isFALSE = ldf isFALSE;
    check L290() else D109();
  D49():
    deopt 224 [lines49, pos26];
  D85():
    deopt 366 [r147];
  D108():
    deopt 449 [r180];
  D109():
    deopt 452 [c61];
  L43(dx37):
    st lines = dx37;
    len6 = ld len;
    check L228() else D78();
  L60():
    goto L63();
  L63():
    make_results = ldf make_results;
    check L301() else D113();
  L165():
    pos27 = force? pos26;
    checkMissing(pos27);
    r84 = `-`(pos27, 1);
    r85 = seq_len(r84);
    goto L26(lines49, r85);
  L224():
    dr34 = tryDispatchBuiltin.1("[", lines75);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L226() else L225(dr34);
  L225(lines77):
    len4 = ld len;
    check L227() else D77();
  L241():
    c52 = `as.logical`(r147);
    if c52 then L242() else L48();
  L288():
    goto L58(r180);
  L290():
    p39 = prom<V +>{
      drop_ok5 = ld drop_ok;
      drop_ok6 = force? drop_ok5;
      checkMissing(drop_ok6);
      return drop_ok6;
    };
    r183 = dyn isFALSE(p39);
    check L291() else D110();
  L293():
    sym19 = ldf list;
    base19 = ldf list in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L294() else L295();
  D77():
    deopt 330 [lines77, len4];
  D78():
    deopt 335 [len6];
  D110():
    deopt 454 [c61, r183];
  D113():
    deopt 475 [];
  L48():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L250() else L251();
  L50():
    lines105 = ld lines;
    check L271() else D101();
  L61(r186):
    st chunks = r186;
    goto L63();
  L226():
    dx36 = getTryDispatchBuiltinValue(dr34);
    goto L43(dx36);
  L227():
    len5 = force? len4;
    checkMissing(len5);
    r135 = `-`(<missing>, len5);
    __16 = ldf `[` in base;
    r136 = dyn __16(lines77, r135);
    goto L43(r136);
  L228():
    len7 = force? len6;
    checkMissing(len7);
    r137 = `-`(len7, 1);
    st len = r137;
    goto L46();
  L242():
    lines90 = ld lines;
    check L243() else D86();
  L291():
    r184 = `!`(r183);
    c64 = `as.logical`(r184);
    c65 = `&&`(c61, c64);
    goto L59(c65);
  L294():
    sym20 = ldf list;
    base20 = ldf list in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L296() else L297();
  L295():
    r185 = dyn base19(<lang list(check="*", status="OK", output="")>);
    goto L61(r185);
  L301():
    p40 = prom<V +>{
      package = ld package;
      package1 = force? package;
      checkMissing(package1);
      return package1;
    };
    p41 = prom<V +>{
      version = ld version;
      version1 = force? version;
      checkMissing(version1);
      return version1;
    };
    p42 = prom<V +>{
      flags = ld flags;
      flags1 = force? flags;
      checkMissing(flags1);
      return flags1;
    };
    p43 = prom<V +>{
      chunks2 = ld chunks;
      chunks3 = force? chunks2;
      checkMissing(chunks3);
      return chunks3;
    };
    r196 = dyn make_results(p40, p41, p42, p43);
    check L302() else D114();
  D86():
    deopt 367 [lines90];
  D101():
    deopt 420 [lines105];
  D114():
    deopt 480 [r196];
  L46():
    grepl = ldf grepl;
    check L229() else D79();
  L51(r153):
    st num = r153;
    num = ld num;
    check L255() else D92();
  L62(r188):
    list1 = ldf list in base;
    r190 = dyn list1(r188);
    check L299() else D112();
  L243():
    lines91 = force? lines90;
    checkMissing(lines91);
    c53 = `is.object`(lines91);
    if c53 then L244() else L245(lines91);
  L250():
    grep4 = ldf grep;
    check L252() else D89();
  L251():
    r152 = dyn base15(<lang grep("^(NOTE|WARNING): There", `[`(lines, c(`-`(len, 1), len)))>);
    goto L51(r152);
  L271():
    lines106 = force? lines105;
    checkMissing(lines106);
    c58 = `is.object`(lines106);
    if c58 then L272() else L273(lines106);
  L296():
    list = ldf list in base;
    r189 = dyn list("*", "OK", "");
    check L298() else D111();
  L297():
    r187 = dyn base20[check, status, output]("*", "OK", "");
    goto L62(r187);
  L302():
    popenv;
    return r196;
  D79():
    deopt 341 [];
  D89():
    deopt 382 [];
  D92():
    deopt 389 [num];
  D111():
    deopt 468 [r189];
  D112():
    deopt 470 [r190];
  L49(dx45):
    st lines = dx45;
    len18 = ld len;
    check L248() else D88();
  L55(dx51):
    r172 = `==`(dx51, "* DONE");
    c59 = `as.logical`(r172);
    if c59 then L276() else L56();
  L229():
    p35 = prom<V +>{
      lines78 = ld lines;
      lines79 = force? lines78;
      checkMissing(lines79);
      c48 = `is.object`(lines79);
      if c48 then L1() else L2(lines79);
    L0(dx39):
      return dx39;
    L1():
      dr36 = tryDispatchBuiltin.1("[", lines79);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(lines81):
      len8 = ld len;
      len9 = force? len8;
      __17 = ldf `[` in base;
      r138 = dyn __17(lines81, len9);
      goto L0(r138);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx38);
    };
    r140 = dyn grepl("^[[:space:]]*$", p35);
    check L230() else D80();
  L244():
    dr42 = tryDispatchBuiltin.1("[", lines91);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L246() else L245(dr42);
  L245(lines93):
    len16 = ld len;
    check L247() else D87();
  L252():
    p37 = prom<V +>{
      lines94 = ld lines;
      lines95 = force? lines94;
      checkMissing(lines95);
      c54 = `is.object`(lines95);
      if c54 then L2() else L3(lines95);
    L0(dx47):
      return dx47;
    L2():
      dr44 = tryDispatchBuiltin.1("[", lines95);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L4() else L3(dr44);
    L3(lines97):
      sym16 = ldf c;
      base16 = ldf c in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L5() else L6();
    L1(lines100, r155):
      __21 = ldf `[` in base;
      r158 = dyn __21(lines100, r155);
      goto L0(r158);
    L4():
      dx46 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx46);
    L5():
      len20 = ld len;
      len21 = force? len20;
      checkMissing(len21);
      r156 = `-`(len21, 1);
      len22 = ld len;
      len23 = force? len22;
      checkMissing(len23);
      c55 = ldf c in base;
      r157 = dyn c55(r156, len23);
      goto L1(lines97, r157);
    L6():
      r154 = dyn base16(<lang `-`(len, 1)>, <sym len>);
      goto L1(lines97, r154);
    };
    r160 = dyn grep4("^(NOTE|WARNING): There", p37);
    check L253() else D90();
  L255():
    num1 = force? num;
    checkMissing(num1);
    r162 = `>`(num1, 0);
    c56 = `as.logical`(r162);
    if c56 then L256() else L52();
  L272():
    dr48 = tryDispatchBuiltin.1("[", lines106);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L274() else L273(dr48);
  L273(lines108):
    len30 = ld len;
    check L275() else D102();
  L298():
    goto L62(r189);
  L299():
    goto L61(r190);
  D80():
    deopt 344 [r140];
  D87():
    deopt 369 [lines93, len16];
  D88():
    deopt 374 [len18];
  D90():
    deopt 385 [r160];
  D102():
    deopt 422 [lines108, len30];
  L52():
    goto L50();
  L56():
    goto L41();
  L230():
    c49 = `as.logical`(r140);
    if c49 then L231() else L44();
  L246():
    dx44 = getTryDispatchBuiltinValue(dr42);
    goto L49(dx44);
  L247():
    len17 = force? len16;
    checkMissing(len17);
    r148 = `-`(<missing>, len17);
    __20 = ldf `[` in base;
    r149 = dyn __20(lines93, r148);
    goto L49(r149);
  L248():
    len19 = force? len18;
    checkMissing(len19);
    r150 = `-`(len19, 1);
    st len = r150;
    goto L50();
  L253():
    length7 = ldf length in base;
    r161 = dyn length7(r160);
    check L254() else D91();
  L256():
    sym17 = ldf `seq.int`;
    base17 = ldf `seq.int` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L257() else L258();
  L274():
    dx50 = getTryDispatchBuiltinValue(dr48);
    goto L55(dx50);
  L275():
    len31 = force? len30;
    __23 = ldf `[` in base;
    r171 = dyn __23(lines108, len31);
    goto L55(r171);
  L276():
    lines109 = ld lines;
    check L277() else D103();
  D91():
    deopt 387 [r161];
  D103():
    deopt 427 [lines109];
  L44():
    goto L47();
  L53(r164):
    st pos = r164;
    lines101 = ld lines;
    check L263() else D97();
  L231():
    lines82 = ld lines;
    check L232() else D81();
  L254():
    goto L51(r161);
  L257():
    len24 = ld len;
    check L259() else D93();
  L258():
    r163 = dyn base17(<lang `+`(`-`(len, num), 1)>, <sym len>);
    goto L53(r163);
  L277():
    lines110 = force? lines109;
    checkMissing(lines110);
    c60 = `is.object`(lines110);
    if c60 then L278() else L279(lines110);
  D81():
    deopt 345 [lines82];
  D93():
    deopt 395 [len24];
  D97():
    deopt 406 [lines101];
  L57(dx53):
    st lines = dx53;
    goto L41();
  L232():
    lines83 = force? lines82;
    checkMissing(lines83);
    c50 = `is.object`(lines83);
    if c50 then L233() else L234(lines83);
  L259():
    len25 = force? len24;
    checkMissing(len25);
    num2 = ld num;
    check L260() else D94();
  L263():
    lines102 = force? lines101;
    checkMissing(lines102);
    c57 = `is.object`(lines102);
    if c57 then L264() else L265(lines102);
  L278():
    dr50 = tryDispatchBuiltin.1("[", lines110);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L280() else L279(dr50);
  L279(lines112):
    len32 = ld len;
    check L281() else D104();
  D94():
    deopt 396 [len25, num2];
  D104():
    deopt 429 [lines112, len32];
  L45(dx41):
    st lines = dx41;
    len12 = ld len;
    check L237() else D83();
  L54(dx49):
    st lines = dx49;
    len28 = ld len;
    check L268() else D99();
  L233():
    dr38 = tryDispatchBuiltin.1("[", lines83);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L235() else L234(dr38);
  L234(lines85):
    len10 = ld len;
    check L236() else D82();
  L260():
    num3 = force? num2;
    checkMissing(num3);
    r165 = `-`(len25, num3);
    r166 = `+`(r165, 1);
    len26 = ld len;
    check L261() else D95();
  L264():
    dr46 = tryDispatchBuiltin.1("[", lines102);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L266() else L265(dr46);
  L265(lines104):
    pos47 = ld pos;
    check L267() else D98();
  L280():
    dx52 = getTryDispatchBuiltinValue(dr50);
    goto L57(dx52);
  L281():
    len33 = force? len32;
    checkMissing(len33);
    r173 = `-`(<missing>, len33);
    __24 = ldf `[` in base;
    r174 = dyn __24(lines112, r173);
    goto L57(r174);
  D82():
    deopt 347 [lines85, len10];
  D83():
    deopt 352 [len12];
  D95():
    deopt 401 [len26];
  D98():
    deopt 408 [lines104, pos47];
  D99():
    deopt 413 [len28];
  L235():
    dx40 = getTryDispatchBuiltinValue(dr38);
    goto L45(dx40);
  L236():
    len11 = force? len10;
    checkMissing(len11);
    r141 = `-`(<missing>, len11);
    __18 = ldf `[` in base;
    r142 = dyn __18(lines85, r141);
    goto L45(r142);
  L237():
    len13 = force? len12;
    checkMissing(len13);
    r143 = `-`(len13, 1);
    st len = r143;
    goto L46();
  L261():
    len27 = force? len26;
    checkMissing(len27);
    seq_int = ldf `seq.int` in base;
    r167 = dyn seq_int(r166, len27);
    check L262() else D96();
  L266():
    dx48 = getTryDispatchBuiltinValue(dr46);
    goto L54(dx48);
  L267():
    pos48 = force? pos47;
    checkMissing(pos48);
    r168 = `-`(<missing>, pos48);
    __22 = ldf `[` in base;
    r169 = dyn __22(lines104, r168);
    goto L54(r169);
  L268():
    len29 = force? len28;
    checkMissing(len29);
    num4 = ld num;
    check L269() else D100();
  D96():
    deopt 404 [r167];
  D100():
    deopt 414 [len29, num4];
  L262():
    goto L53(r167);
  L269():
    num5 = force? num4;
    checkMissing(num5);
    r170 = `-`(len29, num5);
    st len = r170;
    goto L50();
  }
}
fun inner734276427(package, version, flags, chunks) {
  (reg package:*, reg version:*, reg flags:*, reg chunks:*) -+> V { var package:*, var version:*, var flags:*, var chunks:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg package1:*, reg package2:V, reg version1:*, reg version2:V, reg flags1:*, reg flags2:V, reg chunks1:*, reg chunks2:V, reg list:cls, reg r2:V |
    mkenv;
    st package = package;
    st version = version;
    st flags = flags;
    st chunks = chunks;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    package1 = ld package;
    check L3() else D0();
  L2():
    r = dyn base[Package, Version, Flags, Chunks](<sym package>, <sym version>, <sym flags>, <sym chunks>);
    goto L0(r);
  D0():
    deopt 2 [package1];
  L3():
    package2 = force? package1;
    checkMissing(package2);
    version1 = ld version;
    check L4() else D1();
  D1():
    deopt 5 [version1];
  L4():
    version2 = force? version1;
    checkMissing(version2);
    flags1 = ld flags;
    check L5() else D2();
  D2():
    deopt 8 [flags1];
  L5():
    flags2 = force? flags1;
    checkMissing(flags2);
    chunks1 = ld chunks;
    check L6() else D3();
  D3():
    deopt 11 [chunks1];
  L6():
    chunks2 = force? chunks1;
    checkMissing(chunks2);
    list = ldf list in base;
    r2 = dyn list(package2, version2, flags2, chunks2);
    check L7() else D4();
  D4():
    deopt 15 [r2];
  L7():
    goto L0(r2);
  }
}
fun inner1171288635(lines) {
  (reg lines:*) -+> V { var lines:*, reg which:cls, reg startsWith:cls, reg lines1:*, reg lines2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg pos:*, reg pos1:V, reg c:L, reg pos3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pos4:*, reg pos5:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg pos10:V, reg pos11:V, reg r5:V, reg lines3:*, reg lines4:V, reg length:cls, reg r6:V, reg r7:V, reg __:cls, reg r8:V, reg pos12:*, reg pos13:V, reg c1:L, reg pos15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg startsWith1:cls, reg lines5:*, reg lines6:V, reg c2:L, reg lines8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg pos16:*, reg pos17:V, reg r9:V, reg __1:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg __2:cls, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg pos18:*, reg pos19:V, reg length1:cls, reg r16:V, reg c3:L, reg lines9:*, reg lines10:V, reg c4:L, reg lines12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg pos20:*, reg pos21:V, reg r17:V, reg __3:cls, reg r18:V, reg which1:cls, reg startsWith2:cls, reg lines13:*, reg lines14:V, reg p3:p(V +), reg r20:V, reg p4:p(V +), reg r22:V, reg pos22:*, reg pos23:V, reg c5:L, reg pos25:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg pos26:*, reg pos27:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg pos32:V, reg pos33:V, reg r24:V, reg lines15:*, reg lines16:V, reg length2:cls, reg r25:V, reg r26:V, reg __4:cls, reg r27:V, reg pos34:*, reg pos35:V, reg c6:L, reg pos37:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg startsWith3:cls, reg lines17:*, reg lines18:V, reg c7:L, reg lines20:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg pos38:*, reg pos39:V, reg r28:V, reg __5:cls, reg r29:V, reg p5:p(V +), reg r31:V, reg __6:cls, reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg pos40:*, reg pos41:V, reg length3:cls, reg r35:V, reg c8:L, reg lines21:*, reg lines22:V, reg c9:L, reg lines24:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg pos42:*, reg pos43:V, reg r36:V, reg __7:cls, reg r37:V, reg which2:cls, reg startsWith4:cls, reg lines25:*, reg lines26:V, reg p6:p(V +), reg r39:V, reg p7:p(V +), reg r41:V, reg pos44:*, reg pos45:V, reg c10:L, reg pos47:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg pos48:*, reg pos49:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r42:V, reg pos54:V, reg pos55:V, reg r43:V, reg lines27:*, reg lines28:V, reg length4:cls, reg r44:V, reg r45:V, reg __8:cls, reg r46:V, reg pos56:*, reg pos57:V, reg c11:L, reg pos59:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg startsWith5:cls, reg lines29:*, reg lines30:V, reg c12:L, reg lines32:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg pos60:*, reg pos61:V, reg r47:V, reg __9:cls, reg r48:V, reg p8:p(V +), reg r50:V, reg __10:cls, reg r51:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r52:V, reg r53:V, reg pos62:*, reg pos63:V, reg length5:cls, reg r54:V, reg c13:L, reg lines33:*, reg lines34:V, reg c14:L, reg lines36:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg pos64:*, reg pos65:V, reg r55:V, reg __11:cls, reg r56:V, reg which3:cls, reg startsWith6:cls, reg lines37:*, reg lines38:V, reg p9:p(V +), reg r58:V, reg p10:p(V +), reg r60:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r61:V, reg r62:V, reg pos66:*, reg pos67:V, reg length6:cls, reg r63:V, reg c15:L, reg paste:cls, reg substring:cls, reg lines39:*, reg lines40:V, reg c16:L, reg lines42:V, reg dr24:V, reg dc12:L, reg dx27:V, reg dx28:V, reg pos68:*, reg pos69:V, reg __12:cls, reg r64:V, reg p11:p(V +), reg r66:V, reg p12:p(V +), reg r68:V, reg l:*, reg c17:L, reg r70:V, reg l2:*, reg dr26:V, reg dc13:L, reg dx29:V, reg r72:V, reg dx30:V, reg pos70:*, reg pos71:V, reg ___:cls, reg r73:V, reg grepl:cls, reg re:*, reg re1:V, reg p13:p(V +), reg lines43:*, reg lines44:V, reg p14:p(V +), reg r77:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r78:V, reg r79:V, reg ind:*, reg ind1:V, reg cumsum:cls, reg r80:V, reg csi:*, reg csi1:V, reg r81:V, reg lapply:cls, reg split:cls, reg lines45:*, reg lines46:V, reg c18:L, reg lines48:V, reg dr28:V, reg dc14:L, reg dx31:V, reg dx32:V, reg ind2:*, reg ind3:V, reg __13:cls, reg r82:V, reg p15:p(V +), reg csi2:*, reg csi3:V, reg c19:L, reg csi5:V, reg dr30:V, reg dc15:L, reg dx33:V, reg dx34:V, reg ind4:*, reg ind5:V, reg __14:cls, reg r84:V, reg p16:p(V +), reg r86:V, reg p17:p(V +), reg r88:cls, reg p18:p(V +), reg r90:V, reg vapply:cls, reg chunks:*, reg chunks1:V, reg p19:p(V +), reg __15:*, reg __16:V, reg p20:p(V +), reg r93:V, reg isTRUE:cls, reg drop_ok:*, reg drop_ok1:V, reg p21:p(V +), reg r95:V, reg c20:L, reg c21:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r96:V, reg c25:L, reg r97:V, reg drop_ok2:*, reg drop_ok3:V, reg is_na:cls, reg r98:V, reg c26:L, reg c29:L, reg c30:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r99:V, reg c35:L, reg c36:L, reg r100:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r101:V, reg c41:L, reg c42:L, reg r102:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r103:V, reg c47:L, reg c48:L, reg r104:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r105:V, reg c53:L, reg c54:L, reg r106:V, reg c55:cls, reg r107:V, reg status:*, reg status1:V, reg match:cls, reg r108:V, reg is_na1:cls, reg r109:V, reg all:cls, reg r110:V, reg c56:L, reg c57:V, reg c60:L, reg c61:V, reg c63:L, reg chunks2:*, reg chunks3:V, reg c64:L, reg chunks5:V, reg dr32:V, reg dc16:L, reg dx35:V, reg dx36:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r111:V, reg chunks8:V, reg r112:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r113:V, reg chunks11:V, reg r114:V, reg status2:*, reg status3:V, reg drop_ok_status_tags:*, reg drop_ok_status_tags1:V, reg match1:cls, reg r115:V, reg is_na2:cls, reg r116:V, reg __17:cls, reg r117:V, reg chunks12:*, reg chunks13:V |
    mkenv;
    st lines = lines;
    which = ldf which;
    check L38() else D0();
  D0():
    deopt 1 [];
  L38():
    p1 = prom<V +>{
      startsWith = ldf startsWith;
      p = prom<V +>{
        lines1 = ld lines;
        lines2 = force? lines1;
        checkMissing(lines2);
        return lines2;
      };
      r1 = dyn startsWith(p, "* loading checks for arch");
      return r1;
    };
    r3 = dyn which(p1);
    check L39() else D1();
  D1():
    deopt 3 [r3];
  L39():
    st pos = r3;
    pos = ld pos;
    check L40() else D2();
  D2():
    deopt 5 [pos];
  L40():
    pos1 = force? pos;
    checkMissing(pos1);
    c = `is.object`(pos1);
    if c then L41() else L42(pos1);
  L0(dx1):
    st pos = dx1;
    pos12 = ld pos;
    check L49() else D6();
  L41():
    dr = tryDispatchBuiltin.1("[", pos1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L43() else L42(dr);
  L42(pos3):
    pos4 = ld pos;
    check L44() else D3();
  D3():
    deopt 7 [pos3, pos4];
  D6():
    deopt 17 [pos12];
  L43():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L44():
    pos5 = force? pos4;
    checkMissing(pos5);
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L45() else L46();
  L49():
    pos13 = force? pos12;
    checkMissing(pos13);
    c1 = `is.object`(pos13);
    if c1 then L50() else L51(pos13);
  L1(pos10, pos11, r5):
    r7 = `<`(pos11, r5);
    __ = ldf `[` in base;
    r8 = dyn __(pos10, r7);
    goto L0(r8);
  L2(dx3):
    st pos = dx3;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L55() else L56();
  L45():
    lines3 = ld lines;
    check L47() else D4();
  L46():
    r4 = dyn base(<sym lines>);
    goto L1(pos3, pos5, r4);
  L50():
    dr2 = tryDispatchBuiltin.1("[", pos13);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L52() else L51(dr2);
  L51(pos15):
    startsWith1 = ldf startsWith;
    check L53() else D7();
  D4():
    deopt 10 [pos3, pos5, lines3];
  D7():
    deopt 20 [pos15];
  L3(r15):
    c3 = `as.logical`(r15);
    if c3 then L59() else L4();
  L47():
    lines4 = force? lines3;
    checkMissing(lines4);
    length = ldf length in base;
    r6 = dyn length(lines4);
    check L48() else D5();
  L52():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L53():
    p2 = prom<V +>{
      lines5 = ld lines;
      lines6 = force? lines5;
      checkMissing(lines6);
      c2 = `is.object`(lines6);
      if c2 then L1() else L2(lines6);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", lines6);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(lines8):
      pos16 = ld pos;
      pos17 = force? pos16;
      checkMissing(pos17);
      r9 = `+`(pos17, 1);
      __1 = ldf `[` in base;
      r10 = dyn __1(lines8, r9);
      goto L0(r10);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r12 = dyn startsWith1(p2, "** checking");
    check L54() else D8();
  L55():
    pos18 = ld pos;
    check L57() else D9();
  L56():
    r14 = dyn base1(<sym pos>);
    goto L3(r14);
  D5():
    deopt 13 [pos3, pos5, r6];
  D8():
    deopt 23 [pos15, r12];
  D9():
    deopt 28 [pos18];
  L4():
    goto L6();
  L6():
    which1 = ldf which;
    check L66() else D13();
  L48():
    goto L1(pos3, pos5, r6);
  L54():
    __2 = ldf `[` in base;
    r13 = dyn __2(pos15, r12);
    goto L2(r13);
  L57():
    pos19 = force? pos18;
    checkMissing(pos19);
    length1 = ldf length in base;
    r16 = dyn length1(pos19);
    check L58() else D10();
  L59():
    lines9 = ld lines;
    check L60() else D11();
  D10():
    deopt 31 [r16];
  D11():
    deopt 32 [lines9];
  D13():
    deopt 42 [];
  L58():
    goto L3(r16);
  L60():
    lines10 = force? lines9;
    checkMissing(lines10);
    c4 = `is.object`(lines10);
    if c4 then L61() else L62(lines10);
  L66():
    p4 = prom<V +>{
      startsWith2 = ldf startsWith;
      p3 = prom<V +>{
        lines13 = ld lines;
        lines14 = force? lines13;
        checkMissing(lines14);
        return lines14;
      };
      r20 = dyn startsWith2(p3, "* checking examples");
      return r20;
    };
    r22 = dyn which1(p4);
    check L67() else D14();
  D14():
    deopt 44 [r22];
  L5(dx7):
    st lines = dx7;
    goto L6();
  L61():
    dr6 = tryDispatchBuiltin.1("[", lines10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L63() else L62(dr6);
  L62(lines12):
    pos20 = ld pos;
    check L64() else D12();
  L67():
    st pos = r22;
    pos22 = ld pos;
    check L68() else D15();
  D12():
    deopt 34 [lines12, pos20];
  D15():
    deopt 46 [pos22];
  L63():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L5(dx6);
  L64():
    pos21 = force? pos20;
    checkMissing(pos21);
    r17 = `-`(<missing>, pos21);
    __3 = ldf `[` in base;
    r18 = dyn __3(lines12, r17);
    goto L5(r18);
  L68():
    pos23 = force? pos22;
    checkMissing(pos23);
    c5 = `is.object`(pos23);
    if c5 then L69() else L70(pos23);
  L7(dx10):
    st pos = dx10;
    pos34 = ld pos;
    check L77() else D19();
  L69():
    dr8 = tryDispatchBuiltin.1("[", pos23);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L71() else L70(dr8);
  L70(pos25):
    pos26 = ld pos;
    check L72() else D16();
  D16():
    deopt 48 [pos25, pos26];
  D19():
    deopt 58 [pos34];
  L71():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L7(dx9);
  L72():
    pos27 = force? pos26;
    checkMissing(pos27);
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L73() else L74();
  L77():
    pos35 = force? pos34;
    checkMissing(pos35);
    c6 = `is.object`(pos35);
    if c6 then L78() else L79(pos35);
  L8(pos32, pos33, r24):
    r26 = `<`(pos33, r24);
    __4 = ldf `[` in base;
    r27 = dyn __4(pos32, r26);
    goto L7(r27);
  L9(dx12):
    st pos = dx12;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L83() else L84();
  L73():
    lines15 = ld lines;
    check L75() else D17();
  L74():
    r23 = dyn base2(<sym lines>);
    goto L8(pos25, pos27, r23);
  L78():
    dr10 = tryDispatchBuiltin.1("[", pos35);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L80() else L79(dr10);
  L79(pos37):
    startsWith3 = ldf startsWith;
    check L81() else D20();
  D17():
    deopt 51 [pos25, pos27, lines15];
  D20():
    deopt 61 [pos37];
  L10(r34):
    c8 = `as.logical`(r34);
    if c8 then L87() else L11();
  L75():
    lines16 = force? lines15;
    checkMissing(lines16);
    length2 = ldf length in base;
    r25 = dyn length2(lines16);
    check L76() else D18();
  L80():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L9(dx11);
  L81():
    p5 = prom<V +>{
      lines17 = ld lines;
      lines18 = force? lines17;
      checkMissing(lines18);
      c7 = `is.object`(lines18);
      if c7 then L1() else L2(lines18);
    L0(dx14):
      return dx14;
    L1():
      dr12 = tryDispatchBuiltin.1("[", lines18);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(lines20):
      pos38 = ld pos;
      pos39 = force? pos38;
      checkMissing(pos39);
      r28 = `+`(pos39, 1);
      __5 = ldf `[` in base;
      r29 = dyn __5(lines20, r28);
      goto L0(r29);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx13);
    };
    r31 = dyn startsWith3(p5, "** running examples for arch");
    check L82() else D21();
  L83():
    pos40 = ld pos;
    check L85() else D22();
  L84():
    r33 = dyn base3(<sym pos>);
    goto L10(r33);
  D18():
    deopt 54 [pos25, pos27, r25];
  D21():
    deopt 64 [pos37, r31];
  D22():
    deopt 69 [pos40];
  L11():
    goto L13();
  L13():
    which2 = ldf which;
    check L94() else D26();
  L76():
    goto L8(pos25, pos27, r25);
  L82():
    __6 = ldf `[` in base;
    r32 = dyn __6(pos37, r31);
    goto L9(r32);
  L85():
    pos41 = force? pos40;
    checkMissing(pos41);
    length3 = ldf length in base;
    r35 = dyn length3(pos41);
    check L86() else D23();
  L87():
    lines21 = ld lines;
    check L88() else D24();
  D23():
    deopt 72 [r35];
  D24():
    deopt 73 [lines21];
  D26():
    deopt 83 [];
  L86():
    goto L10(r35);
  L88():
    lines22 = force? lines21;
    checkMissing(lines22);
    c9 = `is.object`(lines22);
    if c9 then L89() else L90(lines22);
  L94():
    p7 = prom<V +>{
      startsWith4 = ldf startsWith;
      p6 = prom<V +>{
        lines25 = ld lines;
        lines26 = force? lines25;
        checkMissing(lines26);
        return lines26;
      };
      r39 = dyn startsWith4(p6, "* checking tests");
      return r39;
    };
    r41 = dyn which2(p7);
    check L95() else D27();
  D27():
    deopt 85 [r41];
  L12(dx16):
    st lines = dx16;
    goto L13();
  L89():
    dr14 = tryDispatchBuiltin.1("[", lines22);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L91() else L90(dr14);
  L90(lines24):
    pos42 = ld pos;
    check L92() else D25();
  L95():
    st pos = r41;
    pos44 = ld pos;
    check L96() else D28();
  D25():
    deopt 75 [lines24, pos42];
  D28():
    deopt 87 [pos44];
  L91():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L12(dx15);
  L92():
    pos43 = force? pos42;
    checkMissing(pos43);
    r36 = `-`(<missing>, pos43);
    __7 = ldf `[` in base;
    r37 = dyn __7(lines24, r36);
    goto L12(r37);
  L96():
    pos45 = force? pos44;
    checkMissing(pos45);
    c10 = `is.object`(pos45);
    if c10 then L97() else L98(pos45);
  L14(dx19):
    st pos = dx19;
    pos56 = ld pos;
    check L105() else D32();
  L97():
    dr16 = tryDispatchBuiltin.1("[", pos45);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L99() else L98(dr16);
  L98(pos47):
    pos48 = ld pos;
    check L100() else D29();
  D29():
    deopt 89 [pos47, pos48];
  D32():
    deopt 99 [pos56];
  L99():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L14(dx18);
  L100():
    pos49 = force? pos48;
    checkMissing(pos49);
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L101() else L102();
  L105():
    pos57 = force? pos56;
    checkMissing(pos57);
    c11 = `is.object`(pos57);
    if c11 then L106() else L107(pos57);
  L15(pos54, pos55, r43):
    r45 = `<`(pos55, r43);
    __8 = ldf `[` in base;
    r46 = dyn __8(pos54, r45);
    goto L14(r46);
  L16(dx21):
    st pos = dx21;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L111() else L112();
  L101():
    lines27 = ld lines;
    check L103() else D30();
  L102():
    r42 = dyn base4(<sym lines>);
    goto L15(pos47, pos49, r42);
  L106():
    dr18 = tryDispatchBuiltin.1("[", pos57);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L108() else L107(dr18);
  L107(pos59):
    startsWith5 = ldf startsWith;
    check L109() else D33();
  D30():
    deopt 92 [pos47, pos49, lines27];
  D33():
    deopt 102 [pos59];
  L17(r53):
    c13 = `as.logical`(r53);
    if c13 then L115() else L18();
  L103():
    lines28 = force? lines27;
    checkMissing(lines28);
    length4 = ldf length in base;
    r44 = dyn length4(lines28);
    check L104() else D31();
  L108():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L16(dx20);
  L109():
    p8 = prom<V +>{
      lines29 = ld lines;
      lines30 = force? lines29;
      checkMissing(lines30);
      c12 = `is.object`(lines30);
      if c12 then L1() else L2(lines30);
    L0(dx23):
      return dx23;
    L1():
      dr20 = tryDispatchBuiltin.1("[", lines30);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(lines32):
      pos60 = ld pos;
      pos61 = force? pos60;
      checkMissing(pos61);
      r47 = `+`(pos61, 1);
      __9 = ldf `[` in base;
      r48 = dyn __9(lines32, r47);
      goto L0(r48);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx22);
    };
    r50 = dyn startsWith5(p8, "** running tests for arch");
    check L110() else D34();
  L111():
    pos62 = ld pos;
    check L113() else D35();
  L112():
    r52 = dyn base5(<sym pos>);
    goto L17(r52);
  D31():
    deopt 95 [pos47, pos49, r44];
  D34():
    deopt 105 [pos59, r50];
  D35():
    deopt 110 [pos62];
  L18():
    goto L20();
  L20():
    which3 = ldf which;
    check L122() else D39();
  L104():
    goto L15(pos47, pos49, r44);
  L110():
    __10 = ldf `[` in base;
    r51 = dyn __10(pos59, r50);
    goto L16(r51);
  L113():
    pos63 = force? pos62;
    checkMissing(pos63);
    length5 = ldf length in base;
    r54 = dyn length5(pos63);
    check L114() else D36();
  L115():
    lines33 = ld lines;
    check L116() else D37();
  D36():
    deopt 113 [r54];
  D37():
    deopt 114 [lines33];
  D39():
    deopt 124 [];
  L114():
    goto L17(r54);
  L116():
    lines34 = force? lines33;
    checkMissing(lines34);
    c14 = `is.object`(lines34);
    if c14 then L117() else L118(lines34);
  L122():
    p10 = prom<V +>{
      startsWith6 = ldf startsWith;
      p9 = prom<V +>{
        lines37 = ld lines;
        lines38 = force? lines37;
        checkMissing(lines38);
        return lines38;
      };
      r58 = dyn startsWith6(p9, "* used");
      return r58;
    };
    r60 = dyn which3(p10);
    check L123() else D40();
  D40():
    deopt 126 [r60];
  L19(dx25):
    st lines = dx25;
    goto L20();
  L117():
    dr22 = tryDispatchBuiltin.1("[", lines34);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L119() else L118(dr22);
  L118(lines36):
    pos64 = ld pos;
    check L120() else D38();
  L123():
    st pos = r60;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L124() else L125();
  D38():
    deopt 116 [lines36, pos64];
  L21(r62):
    c15 = `as.logical`(r62);
    if c15 then L128() else L22();
  L119():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L19(dx24);
  L120():
    pos65 = force? pos64;
    checkMissing(pos65);
    r55 = `-`(<missing>, pos65);
    __11 = ldf `[` in base;
    r56 = dyn __11(lines36, r55);
    goto L19(r56);
  L124():
    pos66 = ld pos;
    check L126() else D41();
  L125():
    r61 = dyn base6(<sym pos>);
    goto L21(r61);
  D41():
    deopt 130 [pos66];
  L22():
    goto L24();
  L24():
    st re = "^\\*\\*? ((checking|creating|running examples for arch|running tests for arch) .*) \\.\\.\\.( (\\[[^ ]*\\]))?( (.*)|)$";
    grepl = ldf grepl;
    check L136() else D46();
  L126():
    pos67 = force? pos66;
    checkMissing(pos67);
    length6 = ldf length in base;
    r63 = dyn length6(pos67);
    check L127() else D42();
  L128():
    paste = ldf paste;
    check L129() else D43();
  D42():
    deopt 133 [r63];
  D43():
    deopt 135 [];
  D46():
    deopt 150 [];
  L127():
    goto L21(r63);
  L129():
    p12 = prom<V +>{
      substring = ldf substring;
      p11 = prom<V +>{
        lines39 = ld lines;
        lines40 = force? lines39;
        checkMissing(lines40);
        c16 = `is.object`(lines40);
        if c16 then L1() else L2(lines40);
      L0(dx28):
        return dx28;
      L1():
        dr24 = tryDispatchBuiltin.1("[", lines40);
        dc12 = getTryDispatchBuiltinDispatched(dr24);
        if dc12 then L3() else L2(dr24);
      L2(lines42):
        pos68 = ld pos;
        pos69 = force? pos68;
        __12 = ldf `[` in base;
        r64 = dyn __12(lines42, pos69);
        goto L0(r64);
      L3():
        dx27 = getTryDispatchBuiltinValue(dr24);
        goto L0(dx27);
      };
      r66 = dyn substring(p11, 8);
      return r66;
    };
    r68 = dyn paste("Used", p12);
    check L130() else D44();
  L136():
    p13 = prom<V +>{
      re = ld re;
      re1 = force? re;
      checkMissing(re1);
      return re1;
    };
    p14 = prom<V +>{
      lines43 = ld lines;
      lines44 = force? lines43;
      checkMissing(lines44);
      return lines44;
    };
    r77 = dyn grepl[, , perl](p13, p14, TRUE);
    check L137() else D47();
  D44():
    deopt 138 [r68];
  D47():
    deopt 155 [r77];
  L130():
    l = ld lines;
    c17 = `is.object`(l);
    if c17 then L131() else L132(r68, l);
  L137():
    st ind = r77;
    sym7 = ldf cumsum;
    base7 = ldf cumsum in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L138() else L139();
  L23(r72, dx30):
    st lines = dx30;
    goto L24();
  L25(r79):
    st csi = r79;
    csi = ld csi;
    check L142() else D50();
  L131():
    dr26 = tryDispatchBuiltin.0("[<-", l, r68);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L133() else L132(r68, dr26);
  L132(r70, l2):
    pos70 = ld pos;
    check L134() else D45();
  L138():
    ind = ld ind;
    check L140() else D48();
  L139():
    r78 = dyn base7(<sym ind>);
    goto L25(r78);
  D45():
    deopt 140 [r70, l2, r68, pos70];
  D48():
    deopt 159 [ind];
  D50():
    deopt 164 [csi];
  L133():
    dx29 = getTryDispatchBuiltinValue(dr26);
    goto L23(r68, dx29);
  L134():
    pos71 = force? pos70;
    ___ = ldf `[<-` in base;
    r73 = dyn ___(l2, r68, pos71);
    goto L23(r70, r73);
  L140():
    ind1 = force? ind;
    checkMissing(ind1);
    cumsum = ldf cumsum in base;
    r80 = dyn cumsum(ind1);
    check L141() else D49();
  L142():
    csi1 = force? csi;
    checkMissing(csi1);
    r81 = `>`(csi1, 0.0);
    st ind = r81;
    lapply = ldf lapply;
    check L143() else D51();
  D49():
    deopt 162 [r80];
  D51():
    deopt 170 [];
  L141():
    goto L25(r80);
  L143():
    p17 = prom<V +>{
      split = ldf split;
      p15 = prom<V +>{
        lines45 = ld lines;
        lines46 = force? lines45;
        checkMissing(lines46);
        c18 = `is.object`(lines46);
        if c18 then L1() else L2(lines46);
      L0(dx32):
        return dx32;
      L1():
        dr28 = tryDispatchBuiltin.1("[", lines46);
        dc14 = getTryDispatchBuiltinDispatched(dr28);
        if dc14 then L3() else L2(dr28);
      L2(lines48):
        ind2 = ld ind;
        ind3 = force? ind2;
        __13 = ldf `[` in base;
        r82 = dyn __13(lines48, ind3);
        goto L0(r82);
      L3():
        dx31 = getTryDispatchBuiltinValue(dr28);
        goto L0(dx31);
      };
      p16 = prom<V +>{
        csi2 = ld csi;
        csi3 = force? csi2;
        checkMissing(csi3);
        c19 = `is.object`(csi3);
        if c19 then L1() else L2(csi3);
      L0(dx34):
        return dx34;
      L1():
        dr30 = tryDispatchBuiltin.1("[", csi3);
        dc15 = getTryDispatchBuiltinDispatched(dr30);
        if dc15 then L3() else L2(dr30);
      L2(csi5):
        ind4 = ld ind;
        ind5 = force? ind4;
        __14 = ldf `[` in base;
        r84 = dyn __14(csi5, ind5);
        goto L0(r84);
      L3():
        dx33 = getTryDispatchBuiltinValue(dr30);
        goto L0(dx33);
      };
      r86 = dyn split(p15, p16);
      return r86;
    };
    p18 = prom<V +>{
      r88 = clos inner1236783023;
      return r88;
    };
    r90 = dyn lapply(p17, p18);
    check L144() else D52();
  D52():
    deopt 173 [r90];
  L144():
    st chunks = r90;
    vapply = ldf vapply;
    check L145() else D53();
  D53():
    deopt 176 [];
  L145():
    p19 = prom<V +>{
      chunks = ld chunks;
      chunks1 = force? chunks;
      checkMissing(chunks1);
      return chunks1;
    };
    p20 = prom<V +>{
      __15 = ld `[[`;
      __16 = force? __15;
      checkMissing(__16);
      return __16;
    };
    r93 = dyn vapply(p19, p20, "", "status");
    check L146() else D54();
  D54():
    deopt 181 [r93];
  L146():
    st status = r93;
    isTRUE = ldf isTRUE;
    check L147() else D55();
  D55():
    deopt 184 [];
  L147():
    p21 = prom<V +>{
      drop_ok = ld drop_ok;
      drop_ok1 = force? drop_ok;
      checkMissing(drop_ok1);
      return drop_ok1;
    };
    r95 = dyn isTRUE(p21);
    check L148() else D56();
  D56():
    deopt 186 [r95];
  L148():
    c20 = `as.logical`(r95);
    if c20 then L26(c20) else L149();
  L26(c21):
    c63 = `as.logical`(c21);
    if c63 then L170() else L33();
  L149():
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L150() else L151();
  L27(c25, r97):
    c26 = `as.logical`(r97);
    if c26 then L154() else L28(c25, c26);
  L33():
    goto L37();
  L37():
    chunks12 = ld chunks;
    check L184() else D69();
  L150():
    drop_ok2 = ld drop_ok;
    check L152() else D57();
  L151():
    r96 = dyn base8(<sym drop_ok>);
    goto L27(c20, r96);
  L170():
    chunks2 = ld chunks;
    check L171() else D64();
  D57():
    deopt 189 [c20, drop_ok2];
  D64():
    deopt 217 [chunks2];
  D69():
    deopt 237 [chunks12];
  L28(c29, c30):
    c60 = `as.logical`(c30);
    c61 = `||`(c29, c60);
    goto L26(c61);
  L152():
    drop_ok3 = force? drop_ok2;
    checkMissing(drop_ok3);
    is_na = ldf `is.na` in base;
    r98 = dyn is_na(drop_ok3);
    check L153() else D58();
  L154():
    sym9 = ldf all;
    base9 = ldf all in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L155() else L156();
  L171():
    chunks3 = force? chunks2;
    checkMissing(chunks3);
    c64 = `is.object`(chunks3);
    if c64 then L172() else L173(chunks3);
  L184():
    chunks13 = force? chunks12;
    checkMissing(chunks13);
    popenv;
    return chunks13;
  D58():
    deopt 192 [c20, r98];
  L29(c35, c36, r100):
    c56 = `as.logical`(r100);
    c57 = `&&`(c36, c56);
    goto L28(c35, c57);
  L34(dx36):
    st chunks = dx36;
    goto L37();
  L153():
    goto L27(c20, r98);
  L155():
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L157() else L158();
  L156():
    r99 = dyn base9(<lang is.na(match(c("ERROR", "FAILURE"), status))>);
    goto L29(c25, c26, r99);
  L172():
    dr32 = tryDispatchBuiltin.1("[", chunks3);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L174() else L173(dr32);
  L173(chunks5):
    sym13 = ldf `is.na`;
    base13 = ldf `is.na` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L175() else L176();
  L30(c41, c42, r102):
    all = ldf all in base;
    r110 = dyn all(r102);
    check L167() else D63();
  L35(chunks8, r112):
    __17 = ldf `[` in base;
    r117 = dyn __17(chunks8, r112);
    goto L34(r117);
  L157():
    sym11 = ldf match;
    base11 = ldf match in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L159() else L160();
  L158():
    r101 = dyn base10(<lang match(c("ERROR", "FAILURE"), status)>);
    goto L30(c25, c26, r101);
  L174():
    dx35 = getTryDispatchBuiltinValue(dr32);
    goto L34(dx35);
  L175():
    sym14 = ldf match;
    base14 = ldf match in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L177() else L178();
  L176():
    r111 = dyn base13(<lang match(status, drop_ok_status_tags)>);
    goto L35(chunks5, r111);
  D63():
    deopt 214 [c41, c42, r110];
  L31(c47, c48, r104):
    is_na1 = ldf `is.na` in base;
    r109 = dyn is_na1(r104);
    check L166() else D62();
  L36(chunks11, r114):
    is_na2 = ldf `is.na` in base;
    r116 = dyn is_na2(r114);
    check L182() else D68();
  L159():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L161() else L162();
  L160():
    r103 = dyn base11(<lang c("ERROR", "FAILURE")>, <sym status>);
    goto L31(c25, c26, r103);
  L167():
    goto L29(c41, c42, r110);
  L177():
    status2 = ld status;
    check L179() else D65();
  L178():
    r113 = dyn base14(<sym status>, <sym drop_ok_status_tags>);
    goto L36(chunks5, r113);
  D62():
    deopt 212 [c47, c48, r109];
  D65():
    deopt 223 [chunks5, status2];
  D68():
    deopt 232 [chunks11, r116];
  L32(c53, c54, r106):
    status = ld status;
    check L164() else D60();
  L161():
    c55 = ldf c in base;
    r107 = dyn c55("ERROR", "FAILURE");
    check L163() else D59();
  L162():
    r105 = dyn base12("ERROR", "FAILURE");
    goto L32(c25, c26, r105);
  L166():
    goto L30(c47, c48, r109);
  L179():
    status3 = force? status2;
    checkMissing(status3);
    drop_ok_status_tags = ld drop_ok_status_tags;
    check L180() else D66();
  L182():
    goto L35(chunks11, r116);
  D59():
    deopt 204 [c25, c26, r107];
  D60():
    deopt 205 [c53, c54, status];
  D66():
    deopt 225 [chunks5, drop_ok_status_tags];
  L163():
    goto L32(c25, c26, r107);
  L164():
    status1 = force? status;
    checkMissing(status1);
    match = ldf match in base;
    r108 = dyn match(r106, status1, NA_INT, NULL);
    check L165() else D61();
  L180():
    drop_ok_status_tags1 = force? drop_ok_status_tags;
    checkMissing(drop_ok_status_tags1);
    match1 = ldf match in base;
    r115 = dyn match1(status3, drop_ok_status_tags1, NA_INT, NULL);
    check L181() else D67();
  D61():
    deopt 210 [c53, c54, r108];
  D67():
    deopt 230 [chunks5, r115];
  L165():
    goto L31(c53, c54, r108);
  L181():
    goto L36(chunks5, r115);
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg s1:*, reg s2:V, reg c:L, reg s4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg sub:cls, reg re:*, reg re1:V, reg p:p(V +), reg line:*, reg line1:V, reg p1:p(V +), reg r3:V, reg sub1:cls, reg re2:*, reg re3:V, reg p2:p(V +), reg line2:*, reg line3:V, reg p3:p(V +), reg r6:V, reg status:*, reg status1:V, reg r7:V, reg c1:L, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg check:*, reg check1:V, reg status2:*, reg status3:V, reg paste:cls, reg s5:*, reg s6:V, reg c2:L, reg s8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r11:V, reg p4:p(V +), reg r13:V, reg list:cls, reg r14:V |
    mkenv;
    st s = s;
    s1 = ld s;
    check L4() else D0();
  D0():
    deopt 0 [s1];
  L4():
    s2 = force? s1;
    checkMissing(s2);
    c = `is.object`(s2);
    if c then L5() else L6(s2);
  L0(dx1):
    st line = dx1;
    sub = ldf sub;
    check L8() else D1();
  L5():
    dr = tryDispatchBuiltin.1("[", s2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(s4):
    __ = ldf `[` in base;
    r = dyn __(s4, 1);
    goto L0(r);
  D1():
    deopt 7 [];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    p = prom<V +>{
      re = ld re;
      re1 = force? re;
      checkMissing(re1);
      return re1;
    };
    p1 = prom<V +>{
      line = ld line;
      line1 = force? line;
      checkMissing(line1);
      return line1;
    };
    r3 = dyn sub[, , , perl](p, "\\1", p1, TRUE);
    check L9() else D2();
  D2():
    deopt 13 [r3];
  L9():
    st check = r3;
    sub1 = ldf sub;
    check L10() else D3();
  D3():
    deopt 16 [];
  L10():
    p2 = prom<V +>{
      re2 = ld re;
      re3 = force? re2;
      checkMissing(re3);
      return re3;
    };
    p3 = prom<V +>{
      line2 = ld line;
      line3 = force? line2;
      checkMissing(line3);
      return line3;
    };
    r6 = dyn sub1[, , , perl](p2, "\\6", p3, TRUE);
    check L11() else D4();
  D4():
    deopt 22 [r6];
  L11():
    st status = r6;
    status = ld status;
    check L12() else D5();
  D5():
    deopt 24 [status];
  L12():
    status1 = force? status;
    checkMissing(status1);
    r7 = `==`(status1, "");
    c1 = `as.logical`(r7);
    if c1 then L13() else L1();
  L1():
    goto L2();
  L2():
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L13():
    st status = "FAILURE";
    goto L2();
  L3(r10):
    popenv;
    return r10;
  L15():
    check = ld check;
    check L17() else D6();
  L16():
    r9 = dyn base[check, status, output](<sym check>, <sym status>, <lang paste(`[`(s, `-`(1)), collapse="\n")>);
    goto L3(r9);
  D6():
    deopt 35 [check];
  L17():
    check1 = force? check;
    checkMissing(check1);
    status2 = ld status;
    check L18() else D7();
  D7():
    deopt 38 [status2];
  L18():
    status3 = force? status2;
    checkMissing(status3);
    paste = ldf paste;
    check L19() else D8();
  D8():
    deopt 42 [];
  L19():
    p4 = prom<V +>{
      s5 = ld s;
      s6 = force? s5;
      checkMissing(s6);
      c2 = `is.object`(s6);
      if c2 then L1() else L2(s6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", s6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(s8):
      __1 = ldf `[` in base;
      r11 = dyn __1(s8, -1);
      goto L0(r11);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r13 = dyn paste[, collapse](p4, "\n");
    check L20() else D9();
  D9():
    deopt 46 [r13];
  L20():
    list = ldf list in base;
    r14 = dyn list(check1, status3, r13);
    check L21() else D10();
  D10():
    deopt 49 [r14];
  L21():
    goto L3(r14);
  }
}