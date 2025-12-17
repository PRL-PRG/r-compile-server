fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2511535455;
    st SweaveReadFile = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2511535455(file, syntax, encoding) {
  (reg file:*, reg syntax:*, reg encoding:*) -+> V { var file:*, var syntax:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg file1:*, reg file2:V, reg c:L, reg file4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg basename:cls, reg f:*, reg f1:V, reg p:p(V +), reg r2:V, reg dirname:cls, reg f2:*, reg f3:V, reg p1:p(V +), reg r4:V, reg file_exists:cls, reg f4:*, reg f5:V, reg p2:p(V +), reg r6:V, reg r7:V, reg c1:L, reg list_files:cls, reg df:*, reg df1:V, reg p3:p(V +), reg paste0:cls, reg bf:*, reg bf1:V, reg p4:p(V +), reg syntax1:*, reg syntax2:V, reg c2:L, reg syntax4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r10:V, reg p5:p(V +), reg r12:V, reg p6:p(V +), reg r14:V, reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg f6:*, reg f7:V, reg length:cls, reg r17:V, reg r18:V, reg c3:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg file5:*, reg file6:V, reg c4:L, reg file8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r19:V, reg p7:p(V +), reg r21:V, reg p8:p(V +), reg r23:V, reg p9:p(V +), reg r25:V, reg r26:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r27:V, reg r28:V, reg f8:*, reg f9:V, reg length1:cls, reg r29:V, reg r30:V, reg c5:L, reg stop1:cls, reg paste1:cls, reg sprintf:cls, reg ngettext:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg r32:V, reg f10:*, reg f11:V, reg length2:cls, reg r33:V, reg p10:p(V +), reg r35:V, reg p11:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r37:V, reg r38:V, reg f12:*, reg f13:V, reg length3:cls, reg r39:V, reg p12:p(V +), reg sQuote1:cls, reg file9:*, reg file10:V, reg c6:L, reg file12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r41:V, reg p13:p(V +), reg r43:V, reg p14:p(V +), reg r45:V, reg p15:p(V +), reg paste2:cls, reg f14:*, reg f15:V, reg p16:p(V +), reg r48:V, reg p17:p(V +), reg r50:V, reg p18:p(V +), reg r52:V, reg readLines:cls, reg f16:*, reg f17:V, reg c7:L, reg f19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r54:V, reg p19:p(V +), reg r56:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r57:V, reg r58:V, reg text:*, reg text1:V, reg r59:I, reg encoding1:*, reg encoding2:V, reg r60:V, reg c8:L, reg ___:cls, reg r61:V, reg r62:cls, reg text2:*, reg text3:V, reg p20:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r64:V, reg r65:V, reg encoding3:*, reg encoding4:V, reg identical:cls, reg r66:V, reg c9:L, reg encoding5:*, reg encoding6:V, reg p21:p(V +), reg r68:V, reg enc:*, reg enc1:V, reg r69:V, reg c10:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r70:V, reg r71:V, reg encoding7:*, reg encoding8:V, reg nzchar:cls, reg r72:V, reg c11:L, reg encoding9:*, reg encoding10:V, reg encoding11:V, reg stop2:cls, reg sQuote2:cls, reg basename1:cls, reg file13:*, reg file14:V, reg p22:p(V +), reg r74:V, reg p23:p(V +), reg r76:V, reg p24:p(V +), reg r78:V, reg enc2:*, reg enc3:V, reg r79:V, reg c12:L, reg stop3:cls, reg sQuote3:cls, reg basename2:cls, reg file15:*, reg file16:V, reg p25:p(V +), reg r81:V, reg p26:p(V +), reg r83:V, reg p27:p(V +), reg r85:V, reg enc4:*, reg enc5:V, reg r86:V, reg c13:L, reg enc6:*, reg enc7:V, reg l:*, reg Encoding__:cls, reg r87:V, reg enc8:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r88:V, reg r89:V, reg enc9:*, reg enc10:V, reg nzchar1:cls, reg r90:V, reg c14:L, reg iconv:cls, reg text4:*, reg text5:V, reg p28:p(V +), reg enc11:*, reg enc12:V, reg p29:p(V +), reg r93:V, reg grep:cls, reg syntax5:*, reg syntax6:V, reg c15:L, reg syntax8:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r94:V, reg p30:p(V +), reg text6:*, reg text7:V, reg p31:p(V +), reg r97:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r98:V, reg r99:V, reg pos:*, reg pos1:V, reg length4:cls, reg r100:V, reg r101:V, reg c16:L, reg warning:cls, reg gettextf1:cls, reg r102:V, reg p32:p(V +), reg r104:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r106:V, reg r107:V, reg pos2:*, reg pos3:V, reg length5:cls, reg r108:V, reg r109:V, reg c17:L, reg sub:cls, reg syntax9:*, reg syntax10:V, reg c18:L, reg syntax12:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r110:V, reg p33:p(V +), reg text8:*, reg text9:V, reg c19:L, reg text11:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg pos4:*, reg pos5:V, reg c20:L, reg text13:V, reg pos7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg text15:V, reg dx17:V, reg __4:cls, reg r112:V, reg __5:cls, reg r113:V, reg p34:p(V +), reg r115:V, reg get:cls, reg sname:*, reg sname1:V, reg p35:p(V +), reg r117:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r118:V, reg r119:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r120:V, reg r121:V, reg syntax13:*, reg syntax14:V, reg class:cls, reg r122:V, reg identical1:cls, reg r123:V, reg r124:V, reg c21:L, reg stop4:cls, reg gettextf2:cls, reg sQuote4:cls, reg sname2:*, reg sname3:V, reg p36:p(V +), reg r126:V, reg p37:p(V +), reg r128:V, reg p38:p(V +), reg r130:V, reg text16:*, reg text17:V, reg c22:L, reg text19:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg pos8:*, reg pos9:V, reg r132:V, reg __6:cls, reg r133:V, reg srcLinenum:*, reg srcLinenum1:V, reg c23:L, reg srcLinenum3:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg pos10:*, reg pos11:V, reg r134:V, reg __7:cls, reg r135:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r136:V, reg r137:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r138:V, reg r139:V, reg srcLinenum4:*, reg srcLinenum5:V, reg length6:cls, reg r140:V, reg rep_len:cls, reg r141:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r142:V, reg r143:V, reg syntax15:*, reg syntax16:V, reg c24:L, reg syntax18:V, reg dr22:V, reg dc11:L, reg dx23:V, reg dx24:V, reg r144:V, reg c25:V, reg r145:V, reg c26:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r146:V, reg r147:V, reg grep1:cls, reg syntax19:*, reg syntax20:V, reg c27:L, reg syntax22:V, reg dr24:V, reg dc12:L, reg dx25:V, reg dx26:V, reg r148:V, reg p39:p(V +), reg text20:*, reg text21:V, reg p40:p(V +), reg r151:V, reg length7:cls, reg r152:V, reg c28:L, reg pos12:*, reg pos13:V, reg c29:L, reg pos15:V, reg dr26:V, reg dc13:L, reg dx27:V, reg dx28:V, reg __8:cls, reg r153:V, reg file_path:cls, reg df2:*, reg df3:V, reg p41:p(V +), reg sub1:cls, reg syntax23:*, reg syntax24:V, reg c30:L, reg syntax26:V, reg dr28:V, reg dc14:L, reg dx29:V, reg dx30:V, reg r155:V, reg p42:p(V +), reg text22:*, reg text23:V, reg c31:L, reg text25:V, reg dr30:V, reg dc15:L, reg dx31:V, reg dx32:V, reg pos16:*, reg pos17:V, reg __9:cls, reg r157:V, reg p43:p(V +), reg r159:V, reg p44:p(V +), reg r161:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r162:V, reg r163:V, reg ifile:*, reg ifile1:V, reg file17:*, reg file18:V, reg r164:V, reg any:cls, reg r165:V, reg c32:L, reg stop5:cls, reg paste3:cls, reg gettextf3:cls, reg sQuote5:cls, reg ifile2:*, reg ifile3:V, reg p45:p(V +), reg r167:V, reg p46:p(V +), reg r169:V, reg p47:p(V +), reg paste4:cls, reg sym17:cls, reg base17:cls, reg guard17:L, reg r171:V, reg r172:V, reg file19:*, reg file20:V, reg r173:I, reg p48:p(V +), reg rev:cls, reg file21:*, reg file22:V, reg p49:p(V +), reg r176:V, reg p50:p(V +), reg r178:V, reg p51:p(V +), reg r180:V, reg p52:p(V +), reg r182:V, reg SweaveReadFile:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r184:V, reg r185:V, reg ifile4:*, reg ifile5:V, reg file23:*, reg file24:V, reg c33:cls, reg r186:V, reg p53:p(V +), reg syntax27:*, reg syntax28:V, reg p54:p(V +), reg encoding13:*, reg encoding14:V, reg p55:p(V +), reg r190:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r191:V, reg r192:V, reg pos18:*, reg pos19:V, reg r193:V, reg r194:I, reg sym20:cls, reg base20:cls, reg guard20:L, reg r195:V, reg r196:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r197:V, reg r198:V, reg text26:*, reg text27:V, reg length8:cls, reg r199:V, reg pos20:*, reg pos21:V, reg r200:V, reg r201:I, reg pos22:*, reg pos23:V, reg r202:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r203:V, reg r204:V, reg text28:*, reg text29:V, reg c34:L, reg text31:V, reg dr32:V, reg dc16:L, reg dx33:V, reg dx34:V, reg pre:*, reg pre1:V, reg __10:cls, reg r205:V, reg itext:*, reg itext1:V, reg text32:*, reg text33:V, reg c35:L, reg text35:V, reg dr34:V, reg dc17:L, reg dx35:V, reg dx36:V, reg post:*, reg post1:V, reg __11:cls, reg r206:V, reg c36:cls, reg r207:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r208:V, reg r209:V, reg srcLinenum6:*, reg srcLinenum7:V, reg c37:L, reg srcLinenum9:V, reg dr36:V, reg dc18:L, reg dx37:V, reg dx38:V, reg pre2:*, reg pre3:V, reg __12:cls, reg r210:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r211:V, reg r212:V, reg itext2:*, reg itext3:V, reg attr:cls, reg r213:V, reg srcLinenum10:*, reg srcLinenum11:V, reg c38:L, reg srcLinenum13:V, reg dr38:V, reg dc19:L, reg dx39:V, reg dx40:V, reg post2:*, reg post3:V, reg __13:cls, reg r214:V, reg c39:cls, reg r215:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r216:V, reg r217:V, reg srcFilenum:*, reg srcFilenum1:V, reg c40:L, reg srcFilenum3:V, reg dr40:V, reg dc20:L, reg dx41:V, reg dx42:V, reg pre4:*, reg pre5:V, reg __14:cls, reg r218:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r219:V, reg r220:V, reg itext4:*, reg itext5:V, reg attr1:cls, reg r221:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r224:V, reg r225:V, reg r226:V, reg f20:*, reg f21:V, reg length9:cls, reg r227:V, reg r228:V, reg srcFilenum4:*, reg srcFilenum5:V, reg c41:L, reg srcFilenum7:V, reg dr42:V, reg dc21:L, reg dx43:V, reg dx44:V, reg post4:*, reg post5:V, reg __15:cls, reg r229:V, reg c42:cls, reg r230:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r231:V, reg r232:V, reg f22:*, reg f23:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r233:V, reg r234:V, reg itext6:*, reg itext7:V, reg attr2:cls, reg r235:V, reg c43:cls, reg r236:V, reg syntax29:*, reg syntax30:V, reg l1:*, reg attr__:cls, reg r238:V, reg f24:*, reg f25:V, reg l2:*, reg attr__1:cls, reg r239:V, reg enc14:*, reg enc15:V, reg l3:*, reg attr__2:cls, reg r240:V, reg srcLinenum14:*, reg srcLinenum15:V, reg l4:*, reg attr__3:cls, reg r241:V, reg srcFilenum8:*, reg srcFilenum9:V, reg l5:*, reg attr__4:cls, reg r242:V, reg text36:*, reg text37:V |
    mkenv;
    st file = file;
    st syntax = syntax;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L0("") else L0(encoding);
  L0(encoding_orDefault):
    st encoding = encoding_orDefault;
    file1 = ld file;
    check L63() else D0();
  D0():
    deopt 0 [file1];
  L63():
    file2 = force? file1;
    checkMissing(file2);
    c = `is.object`(file2);
    if c then L64() else L65(file2);
  L1(dx1):
    st f = dx1;
    basename = ldf basename;
    check L67() else D1();
  L64():
    dr = tryDispatchBuiltin.1("[", file2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L66() else L65(dr);
  L65(file4):
    __ = ldf `[` in base;
    r = dyn __(file4, 1);
    goto L1(r);
  D1():
    deopt 7 [];
  L66():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L67():
    p = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r2 = dyn basename(p);
    check L68() else D2();
  D2():
    deopt 9 [r2];
  L68():
    st bf = r2;
    dirname = ldf dirname;
    check L69() else D3();
  D3():
    deopt 12 [];
  L69():
    p1 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    r4 = dyn dirname(p1);
    check L70() else D4();
  D4():
    deopt 14 [r4];
  L70():
    st df = r4;
    file_exists = ldf `file.exists`;
    check L71() else D5();
  D5():
    deopt 17 [];
  L71():
    p2 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    r6 = dyn file_exists(p2);
    check L72() else D6();
  D6():
    deopt 19 [r6];
  L72():
    r7 = `!`(r6);
    c1 = `as.logical`(r7);
    if c1 then L73() else L2();
  L2():
    goto L8();
  L8():
    readLines = ldf readLines;
    check L93() else D17();
  L73():
    list_files = ldf `list.files`;
    check L74() else D7();
  D7():
    deopt 22 [];
  D17():
    deopt 63 [];
  L74():
    p3 = prom<V +>{
      df = ld df;
      df1 = force? df;
      checkMissing(df1);
      return df1;
    };
    p6 = prom<V +>{
      paste0 = ldf paste0;
      p4 = prom<V +>{
        bf = ld bf;
        bf1 = force? bf;
        checkMissing(bf1);
        return bf1;
      };
      p5 = prom<V +>{
        syntax1 = ld syntax;
        syntax2 = force? syntax1;
        checkMissing(syntax2);
        c2 = `is.object`(syntax2);
        if c2 then L1() else L2(syntax2);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", syntax2);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(syntax4):
        r10 = `$`(syntax4, <sym extension>);
        goto L0(r10);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r12 = dyn paste0(p4, p5);
      return r12;
    };
    r14 = dyn list_files[, `full.names`, pattern](p3, TRUE, p6);
    check L75() else D8();
  L93():
    p19 = prom<V +>{
      f16 = ld f;
      f17 = force? f16;
      checkMissing(f17);
      c7 = `is.object`(f17);
      if c7 then L1() else L2(f17);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", f17);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(f19):
      __3 = ldf `[` in base;
      r54 = dyn __3(f19, 1);
      goto L0(r54);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r56 = dyn readLines[, warn](p19, FALSE);
    check L94() else D18();
  D8():
    deopt 28 [r14];
  D18():
    deopt 67 [r56];
  L75():
    st f = r14;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L76() else L77();
  L94():
    st text = r56;
    sym4 = ldf seq_along;
    base4 = ldf seq_along in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L95() else L96();
  L3(r16):
    r18 = `==`(r16, 0);
    c3 = `as.logical`(r18);
    if c3 then L80() else L4();
  L9(r58):
    st srcLinenum = r58;
    encoding1 = ld encoding;
    check L98() else D20();
  L76():
    f6 = ld f;
    check L78() else D9();
  L77():
    r15 = dyn base(<sym f>);
    goto L3(r15);
  L95():
    text = ld text;
    check L97() else D19();
  L96():
    r57 = dyn base4(<sym text>);
    goto L9(r57);
  D9():
    deopt 32 [f6];
  D19():
    deopt 70 [text];
  D20():
    deopt 74 [encoding1];
  L4():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L84() else L85();
  L5(r26):
    goto L8();
  L78():
    f7 = force? f6;
    checkMissing(f7);
    length = ldf length in base;
    r17 = dyn length(f7);
    check L79() else D10();
  L80():
    stop = ldf stop;
    check L81() else D11();
  L97():
    text1 = force? text;
    checkMissing(text1);
    r59 = seq_along(text1);
    goto L9(r59);
  L98():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    r60 = `!=`(encoding2, "bytes");
    c8 = `as.logical`(r60);
    if c8 then L99() else L10();
  D10():
    deopt 35 [r17];
  D11():
    deopt 39 [];
  L6(r28):
    r30 = `>`(r28, 1);
    c5 = `as.logical`(r30);
    if c5 then L88() else L7();
  L10():
    st enc = "bytes";
    goto L21();
  L21():
    grep = ldf grep;
    check L135() else D41();
  L79():
    goto L3(r17);
  L81():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p8 = prom<V +>{
        sQuote = ldf sQuote;
        p7 = prom<V +>{
          file5 = ld file;
          file6 = force? file5;
          checkMissing(file6);
          c4 = `is.object`(file6);
          if c4 then L1() else L2(file6);
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("[", file6);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(file8):
          __1 = ldf `[` in base;
          r19 = dyn __1(file8, 1);
          goto L0(r19);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        r21 = dyn sQuote(p7);
        return r21;
      };
      r23 = dyn gettextf("no Sweave file with name %s found", p8);
      return r23;
    };
    r25 = dyn stop[, domain](p9, NA_LGL);
    check L82() else D12();
  L84():
    f8 = ld f;
    check L86() else D13();
  L85():
    r27 = dyn base1(<sym f>);
    goto L6(r27);
  L99():
    ___ = ldf `:::`;
    check L100() else D21();
  D12():
    deopt 43 [r25];
  D13():
    deopt 46 [f8];
  D21():
    deopt 79 [];
  D41():
    deopt 157 [];
  L7():
    goto L5(NULL);
  L82():
    goto L5(r25);
  L86():
    f9 = force? f8;
    checkMissing(f9);
    length1 = ldf length in base;
    r29 = dyn length1(f9);
    check L87() else D14();
  L88():
    stop1 = ldf stop;
    check L89() else D15();
  L100():
    r61 = dyn ___("tools", ".getVignetteEncoding");
    check L101() else D22();
  L135():
    p30 = prom<V +>{
      syntax5 = ld syntax;
      syntax6 = force? syntax5;
      checkMissing(syntax6);
      c15 = `is.object`(syntax6);
      if c15 then L1() else L2(syntax6);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", syntax6);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(syntax8):
      r94 = `$`(syntax8, <sym syntaxname>);
      goto L0(r94);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p31 = prom<V +>{
      text6 = ld text;
      text7 = force? text6;
      checkMissing(text7);
      return text7;
    };
    r97 = dyn grep(p30, p31);
    check L136() else D42();
  D14():
    deopt 49 [r29];
  D15():
    deopt 53 [];
  D22():
    deopt 82 [r61];
  D42():
    deopt 160 [r97];
  L87():
    goto L6(r29);
  L89():
    p18 = prom<V +>{
      paste1 = ldf paste;
      p15 = prom<V +>{
        sprintf = ldf sprintf;
        p11 = prom<V +>{
          ngettext = ldf ngettext;
          p10 = prom<V +>{
            sym2 = ldf length;
            base2 = ldf length in base;
            guard2 = `==`.4(sym2, base2);
            if guard2 then L1() else L2();
          L0(r32):
            return r32;
          L1():
            f10 = ld f;
            f11 = force? f10;
            checkMissing(f11);
            length2 = ldf length in base;
            r33 = dyn length2(f11);
            goto L0(r33);
          L2():
            r31 = dyn base2(<sym f>);
            goto L0(r31);
          };
          r35 = dyn ngettext[, , , domain](p10, "%d Sweave file for basename %s found", "%d Sweave files for basename %s found", "R-utils");
          return r35;
        };
        p12 = prom<V +>{
          sym3 = ldf length;
          base3 = ldf length in base;
          guard3 = `==`.4(sym3, base3);
          if guard3 then L1() else L2();
        L0(r38):
          return r38;
        L1():
          f12 = ld f;
          f13 = force? f12;
          checkMissing(f13);
          length3 = ldf length in base;
          r39 = dyn length3(f13);
          goto L0(r39);
        L2():
          r37 = dyn base3(<sym f>);
          goto L0(r37);
        };
        p14 = prom<V +>{
          sQuote1 = ldf sQuote;
          p13 = prom<V +>{
            file9 = ld file;
            file10 = force? file9;
            checkMissing(file10);
            c6 = `is.object`(file10);
            if c6 then L1() else L2(file10);
          L0(dx7):
            return dx7;
          L1():
            dr6 = tryDispatchBuiltin.1("[", file10);
            dc3 = getTryDispatchBuiltinDispatched(dr6);
            if dc3 then L3() else L2(dr6);
          L2(file12):
            __2 = ldf `[` in base;
            r41 = dyn __2(file12, 1);
            goto L0(r41);
          L3():
            dx6 = getTryDispatchBuiltinValue(dr6);
            goto L0(dx6);
          };
          r43 = dyn sQuote1(p13);
          return r43;
        };
        r45 = dyn sprintf(p11, p12, p14);
        return r45;
      };
      p17 = prom<V +>{
        paste2 = ldf paste;
        p16 = prom<V +>{
          f14 = ld f;
          f15 = force? f14;
          checkMissing(f15);
          return f15;
        };
        r48 = dyn paste2[, , collapse](":\n         ", p16, "");
        return r48;
      };
      r50 = dyn paste1(p15, p17);
      return r50;
    };
    r52 = dyn stop1[, domain](p18, NA_LGL);
    check L90() else D16();
  L101():
    checkFun.0(r61);
    r62 = r61 as cls;
    p20 = prom<V +>{
      text2 = ld text;
      text3 = force? text2;
      checkMissing(text3);
      return text3;
    };
    p21 = prom<V +>{
      sym5 = ldf identical;
      base5 = ldf identical in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r65):
      c9 = `as.logical`(r65);
      if c9 then L4() else L1();
    L2():
      encoding3 = ld encoding;
      encoding4 = force? encoding3;
      checkMissing(encoding4);
      identical = ldf identical in base;
      r66 = dyn identical(encoding4, "", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r66);
    L3():
      r64 = dyn base5(<sym encoding>, "");
      goto L0(r64);
    L1():
      encoding5 = ld encoding;
      encoding6 = force? encoding5;
      checkMissing(encoding6);
      return encoding6;
    L4():
      return NA_LGL;
    };
    r68 = dyn r62[, default](p20, p21);
    check L102() else D23();
  L136():
    st pos = r97;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L137() else L138();
  D16():
    deopt 57 [r52];
  D23():
    deopt 87 [r68];
  L22(r99):
    r101 = `>`(r99, 1);
    c16 = `as.logical`(r101);
    if c16 then L141() else L23();
  L90():
    goto L5(r52);
  L102():
    st enc = r68;
    enc = ld enc;
    check L103() else D24();
  L137():
    pos = ld pos;
    check L139() else D43();
  L138():
    r98 = dyn base8(<sym pos>);
    goto L22(r98);
  D24():
    deopt 89 [enc];
  D43():
    deopt 164 [pos];
  L23():
    goto L24();
  L24():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L145() else L146();
  L103():
    enc1 = force? enc;
    checkMissing(enc1);
    r69 = `==`(enc1, "non-ASCII");
    c10 = `as.logical`(r69);
    if c10 then L104() else L11();
  L139():
    pos1 = force? pos;
    checkMissing(pos1);
    length4 = ldf length in base;
    r100 = dyn length4(pos1);
    check L140() else D44();
  L141():
    warning = ldf warning;
    check L142() else D45();
  D44():
    deopt 167 [r100];
  D45():
    deopt 171 [];
  L11():
    enc2 = ld enc;
    check L115() else D30();
  L15():
    enc4 = ld enc;
    check L120() else D33();
  L25(r107):
    r109 = `>`(r107, 0);
    c17 = `as.logical`(r109);
    if c17 then L149() else L26();
  L104():
    sym6 = ldf nzchar;
    base6 = ldf nzchar in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L105() else L106();
  L140():
    goto L22(r100);
  L142():
    p32 = prom<V +>{
      gettextf1 = ldf gettextf;
      r102 = dyn gettextf1("more than one syntax specification found, using the first one");
      return r102;
    };
    r104 = dyn warning[, domain](p32, NA_LGL);
    check L143() else D46();
  L145():
    pos2 = ld pos;
    check L147() else D47();
  L146():
    r106 = dyn base9(<sym pos>);
    goto L25(r106);
  D30():
    deopt 111 [enc2];
  D33():
    deopt 126 [enc4];
  D46():
    deopt 175 [r104];
  D47():
    deopt 180 [pos2];
  L12(r71):
    c11 = `as.logical`(r71);
    if c11 then L109() else L13();
  L26():
    goto L33();
  L33():
    sym12 = ldf rep_len;
    base12 = ldf rep_len in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L176() else L177();
  L105():
    encoding7 = ld encoding;
    check L107() else D25();
  L106():
    r70 = dyn base6(<sym encoding>);
    goto L12(r70);
  L115():
    enc3 = force? enc2;
    checkMissing(enc3);
    r79 = `==`(enc3, "unknown");
    c12 = `as.logical`(r79);
    if c12 then L116() else L16();
  L120():
    enc5 = force? enc4;
    checkMissing(enc5);
    r86 = `==`(enc5, "UTF-8");
    c13 = `as.logical`(r86);
    if c13 then L121() else L17();
  L143():
    goto L24();
  L147():
    pos3 = force? pos2;
    checkMissing(pos3);
    length5 = ldf length in base;
    r108 = dyn length5(pos3);
    check L148() else D48();
  L149():
    sub = ldf sub;
    check L150() else D49();
  D25():
    deopt 95 [encoding7];
  D48():
    deopt 183 [r108];
  D49():
    deopt 187 [];
  L13():
    stop2 = ldf stop;
    check L112() else D28();
  L14(encoding11):
    st enc = encoding11;
    goto L15();
  L16():
    goto L15();
  L17():
    sym7 = ldf nzchar;
    base7 = ldf nzchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L126() else L127();
  L18(enc8):
    goto L21();
  L34(r137):
    st srcFilenum = r137;
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L183() else L184();
  L107():
    encoding8 = force? encoding7;
    checkMissing(encoding8);
    nzchar = ldf nzchar in base;
    r72 = dyn nzchar(encoding8);
    check L108() else D26();
  L109():
    encoding9 = ld encoding;
    check L110() else D27();
  L116():
    stop3 = ldf stop;
    check L117() else D31();
  L121():
    enc6 = ld enc;
    check L122() else D34();
  L148():
    goto L25(r108);
  L150():
    p33 = prom<V +>{
      syntax9 = ld syntax;
      syntax10 = force? syntax9;
      checkMissing(syntax10);
      c18 = `is.object`(syntax10);
      if c18 then L1() else L2(syntax10);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", syntax10);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(syntax12):
      r110 = `$`(syntax12, <sym syntaxname>);
      goto L0(r110);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p34 = prom<V +>{
      text8 = ld text;
      text9 = force? text8;
      checkMissing(text9);
      c19 = `is.object`(text9);
      if c19 then L2() else L3(text9);
    L0(dx15):
      return dx15;
    L2():
      dr14 = tryDispatchBuiltin.1("[", text9);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L4() else L3(dr14);
    L3(text11):
      pos4 = ld pos;
      pos5 = force? pos4;
      checkMissing(pos5);
      c20 = `is.object`(pos5);
      if c20 then L5() else L6(text11, pos5);
    L1(text15, dx17):
      __5 = ldf `[` in base;
      r113 = dyn __5(text15, dx17);
      goto L0(r113);
    L4():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    L5():
      dr16 = tryDispatchBuiltin.1("[", pos5);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L7() else L6(text11, dr16);
    L6(text13, pos7):
      __4 = ldf `[` in base;
      r112 = dyn __4(pos7, 1);
      goto L1(text13, r112);
    L7():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L1(text11, dx16);
    };
    r115 = dyn sub(p33, "\\1", p34);
    check L151() else D50();
  L176():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L178() else L179();
  L177():
    r136 = dyn base12(1.0, <lang length(srcLinenum)>);
    goto L34(r136);
  D26():
    deopt 98 [r72];
  D27():
    deopt 99 [encoding9];
  D28():
    deopt 102 [];
  D31():
    deopt 116 [];
  D34():
    deopt 130 [enc6];
  D50():
    deopt 191 [r115];
  L19(r89):
    c14 = `as.logical`(r89);
    if c14 then L130() else L20();
  L35(r139):
    rep_len = ldf rep_len in base;
    r141 = dyn rep_len(1.0, r139);
    check L182() else D64();
  L36(r143):
    r145 = `!`(r143);
    c26 = `as.logical`(r145);
    if c26 then L190() else L37();
  L108():
    goto L12(r72);
  L110():
    encoding10 = force? encoding9;
    checkMissing(encoding10);
    goto L14(encoding10);
  L112():
    p24 = prom<V +>{
      sQuote2 = ldf sQuote;
      p23 = prom<V +>{
        basename1 = ldf basename;
        p22 = prom<V +>{
          file13 = ld file;
          file14 = force? file13;
          checkMissing(file14);
          return file14;
        };
        r74 = dyn basename1(p22);
        return r74;
      };
      r76 = dyn sQuote2(p23);
      return r76;
    };
    r78 = dyn stop2[, , domain, `call.`](p24, " is not ASCII and does not declare an encoding", NA_LGL, FALSE);
    check L113() else D29();
  L117():
    p27 = prom<V +>{
      sQuote3 = ldf sQuote;
      p26 = prom<V +>{
        basename2 = ldf basename;
        p25 = prom<V +>{
          file15 = ld file;
          file16 = force? file15;
          checkMissing(file16);
          return file16;
        };
        r81 = dyn basename2(p25);
        return r81;
      };
      r83 = dyn sQuote3(p26);
      return r83;
    };
    r85 = dyn stop3[, , domain, `call.`](p27, " declares an encoding that Sweave does not know about", NA_LGL, FALSE);
    check L118() else D32();
  L122():
    enc7 = force? enc6;
    checkMissing(enc7);
    l = ld text;
    Encoding__ = ldf `Encoding<-`;
    check L123() else D35();
  L126():
    enc9 = ld enc;
    check L128() else D37();
  L127():
    r88 = dyn base7(<sym enc>);
    goto L19(r88);
  L151():
    st sname = r115;
    get = ldf get;
    check L152() else D51();
  L178():
    srcLinenum4 = ld srcLinenum;
    check L180() else D62();
  L179():
    r138 = dyn base13(<sym srcLinenum>);
    goto L35(r138);
  L183():
    syntax15 = ld syntax;
    check L185() else D65();
  L184():
    r142 = dyn base14(<lang `$`(syntax, input)>);
    goto L36(r142);
  D29():
    deopt 109 [r78];
  D32():
    deopt 123 [r85];
  D35():
    deopt 133 [enc7, l, enc7];
  D37():
    deopt 139 [enc9];
  D51():
    deopt 194 [];
  D62():
    deopt 248 [srcLinenum4];
  D64():
    deopt 253 [r141];
  D65():
    deopt 256 [syntax15];
  L20():
    st enc = "ASCII";
    goto L18("ASCII");
  L37():
    goto L62();
  L62():
    syntax29 = ld syntax;
    check L287() else D110();
  L113():
    goto L14(r78);
  L118():
    goto L15();
  L123():
    r87 = dyn Encoding__(l, NULL, enc7);
    check L124() else D36();
  L128():
    enc10 = force? enc9;
    checkMissing(enc10);
    nzchar1 = ldf nzchar in base;
    r90 = dyn nzchar1(enc10);
    check L129() else D38();
  L130():
    iconv = ldf iconv;
    check L131() else D39();
  L152():
    p35 = prom<V +>{
      sname = ld sname;
      sname1 = force? sname;
      checkMissing(sname1);
      return sname1;
    };
    r117 = dyn get[, mode](p35, "list");
    check L153() else D52();
  L180():
    srcLinenum5 = force? srcLinenum4;
    checkMissing(srcLinenum5);
    length6 = ldf length in base;
    r140 = dyn length6(srcLinenum5);
    check L181() else D63();
  L182():
    goto L34(r141);
  L185():
    syntax16 = force? syntax15;
    checkMissing(syntax16);
    c24 = `is.object`(syntax16);
    if c24 then L187() else L188(syntax16);
  L190():
    goto L61();
  D36():
    deopt 135 [enc7, r87];
  D38():
    deopt 142 [r90];
  D39():
    deopt 144 [];
  D52():
    deopt 198 [r117];
  D63():
    deopt 251 [r140];
  D110():
    deopt 413 [syntax29];
  L61():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L191() else L192();
  L124():
    st text = r87;
    goto L18(enc7);
  L129():
    goto L19(r90);
  L131():
    p28 = prom<V +>{
      text4 = ld text;
      text5 = force? text4;
      checkMissing(text5);
      return text5;
    };
    p29 = prom<V +>{
      enc11 = ld enc;
      enc12 = force? enc11;
      checkMissing(enc12);
      return enc12;
    };
    r93 = dyn iconv(p28, p29, "");
    check L132() else D40();
  L153():
    st syntax = r117;
    sym10 = ldf identical;
    base10 = ldf identical in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L154() else L155();
  L181():
    goto L35(r140);
  L186(dx24):
    c25 = `==`(dx24, NULL);
    goto L36(c25);
  L187():
    dr22 = tryDispatchBuiltin.1("$", syntax16);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L189() else L188(dr22);
  L188(syntax18):
    r144 = `$`(syntax18, <sym input>);
    goto L186(r144);
  L287():
    syntax30 = force? syntax29;
    checkMissing(syntax30);
    l1 = ld text;
    attr__ = ldf `attr<-`;
    check L288() else D111();
  D40():
    deopt 148 [r93];
  D111():
    deopt 416 [syntax30, l1, syntax30];
  L27(r119):
    r124 = `!`(r119);
    c21 = `as.logical`(r124);
    if c21 then L161() else L29();
  L38(r147):
    c28 = `as.logical`(r147);
    if c28 then L196() else L39();
  L132():
    st text = r93;
    goto L18(r93);
  L154():
    sym11 = ldf class;
    base11 = ldf class in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L156() else L157();
  L155():
    r118 = dyn base10(<lang class(syntax)>, "SweaveSyntax");
    goto L27(r118);
  L189():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L186(dx23);
  L191():
    grep1 = ldf grep;
    check L193() else D66();
  L192():
    r146 = dyn base15(<lang `<-`(pos, grep(`$`(syntax, input), text))>);
    goto L38(r146);
  L288():
    r238 = dyn attr__(l1, NULL, "syntax", syntax30);
    check L289() else D112();
  D66():
    deopt 264 [];
  D112():
    deopt 419 [syntax30, r238];
  L28(r121):
    identical1 = ldf identical in base;
    r123 = dyn identical1(r121, "SweaveSyntax", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L160() else D55();
  L29():
    goto L30();
  L30():
    text16 = ld text;
    check L165() else D58();
  L39():
    goto L62();
  L156():
    syntax13 = ld syntax;
    check L158() else D53();
  L157():
    r120 = dyn base11(<sym syntax>);
    goto L28(r120);
  L161():
    stop4 = ldf stop;
    check L162() else D56();
  L193():
    p39 = prom<V +>{
      syntax19 = ld syntax;
      syntax20 = force? syntax19;
      checkMissing(syntax20);
      c27 = `is.object`(syntax20);
      if c27 then L1() else L2(syntax20);
    L0(dx26):
      return dx26;
    L1():
      dr24 = tryDispatchBuiltin.1("$", syntax20);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(syntax22):
      r148 = `$`(syntax22, <sym input>);
      goto L0(r148);
    L3():
      dx25 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx25);
    };
    p40 = prom<V +>{
      text20 = ld text;
      text21 = force? text20;
      checkMissing(text21);
      return text21;
    };
    r151 = dyn grep1(p39, p40);
    check L194() else D67();
  L196():
    pos12 = ld pos;
    check L197() else D69();
  L289():
    st text = r238;
    f24 = ld f;
    check L290() else D113();
  D53():
    deopt 204 [syntax13];
  D55():
    deopt 217 [r123];
  D56():
    deopt 220 [];
  D58():
    deopt 227 [text16];
  D67():
    deopt 267 [r151];
  D69():
    deopt 271 [pos12];
  D113():
    deopt 421 [f24];
  L158():
    syntax14 = force? syntax13;
    checkMissing(syntax14);
    class = ldf class in base;
    r122 = dyn class(syntax14);
    check L159() else D54();
  L160():
    goto L27(r123);
  L162():
    p38 = prom<V +>{
      gettextf2 = ldf gettextf;
      p37 = prom<V +>{
        sQuote4 = ldf sQuote;
        p36 = prom<V +>{
          sname2 = ld sname;
          sname3 = force? sname2;
          checkMissing(sname3);
          return sname3;
        };
        r126 = dyn sQuote4(p36);
        return r126;
      };
      r128 = dyn gettextf2("object %s does not have class \"SweaveSyntax\"", p37);
      return r128;
    };
    r130 = dyn stop4[, domain](p38, NA_LGL);
    check L163() else D57();
  L165():
    text17 = force? text16;
    checkMissing(text17);
    c22 = `is.object`(text17);
    if c22 then L166() else L167(text17);
  L194():
    st pos = r151;
    length7 = ldf length in base;
    r152 = dyn length7(r151);
    check L195() else D68();
  L197():
    pos13 = force? pos12;
    checkMissing(pos13);
    c29 = `is.object`(pos13);
    if c29 then L198() else L199(pos13);
  L290():
    f25 = force? f24;
    checkMissing(f25);
    l2 = ld text;
    attr__1 = ldf `attr<-`;
    check L291() else D114();
  D54():
    deopt 207 [r122];
  D57():
    deopt 224 [r130];
  D68():
    deopt 270 [r152];
  D114():
    deopt 424 [f25, l2, f25];
  L31(dx19):
    st text = dx19;
    srcLinenum = ld srcLinenum;
    check L170() else D60();
  L40(dx28):
    st pos = dx28;
    file_path = ldf `file.path`;
    check L201() else D70();
  L159():
    goto L28(r122);
  L163():
    goto L30();
  L166():
    dr18 = tryDispatchBuiltin.1("[", text17);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L168() else L167(dr18);
  L167(text19):
    pos8 = ld pos;
    check L169() else D59();
  L195():
    goto L38(r152);
  L198():
    dr26 = tryDispatchBuiltin.1("[", pos13);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L200() else L199(dr26);
  L199(pos15):
    __8 = ldf `[` in base;
    r153 = dyn __8(pos15, 1);
    goto L40(r153);
  L291():
    r239 = dyn attr__1(l2, NULL, "files", f25);
    check L292() else D115();
  D59():
    deopt 229 [text19, pos8];
  D60():
    deopt 234 [srcLinenum];
  D70():
    deopt 278 [];
  D115():
    deopt 427 [f25, r239];
  L168():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L31(dx18);
  L169():
    pos9 = force? pos8;
    checkMissing(pos9);
    r132 = `-`(<missing>, pos9);
    __6 = ldf `[` in base;
    r133 = dyn __6(text19, r132);
    goto L31(r133);
  L170():
    srcLinenum1 = force? srcLinenum;
    checkMissing(srcLinenum1);
    c23 = `is.object`(srcLinenum1);
    if c23 then L171() else L172(srcLinenum1);
  L200():
    dx27 = getTryDispatchBuiltinValue(dr26);
    goto L40(dx27);
  L201():
    p41 = prom<V +>{
      df2 = ld df;
      df3 = force? df2;
      checkMissing(df3);
      return df3;
    };
    p44 = prom<V +>{
      sub1 = ldf sub;
      p42 = prom<V +>{
        syntax23 = ld syntax;
        syntax24 = force? syntax23;
        checkMissing(syntax24);
        c30 = `is.object`(syntax24);
        if c30 then L1() else L2(syntax24);
      L0(dx30):
        return dx30;
      L1():
        dr28 = tryDispatchBuiltin.1("$", syntax24);
        dc14 = getTryDispatchBuiltinDispatched(dr28);
        if dc14 then L3() else L2(dr28);
      L2(syntax26):
        r155 = `$`(syntax26, <sym input>);
        goto L0(r155);
      L3():
        dx29 = getTryDispatchBuiltinValue(dr28);
        goto L0(dx29);
      };
      p43 = prom<V +>{
        text22 = ld text;
        text23 = force? text22;
        checkMissing(text23);
        c31 = `is.object`(text23);
        if c31 then L1() else L2(text23);
      L0(dx32):
        return dx32;
      L1():
        dr30 = tryDispatchBuiltin.1("[", text23);
        dc15 = getTryDispatchBuiltinDispatched(dr30);
        if dc15 then L3() else L2(dr30);
      L2(text25):
        pos16 = ld pos;
        pos17 = force? pos16;
        __9 = ldf `[` in base;
        r157 = dyn __9(text25, pos17);
        goto L0(r157);
      L3():
        dx31 = getTryDispatchBuiltinValue(dr30);
        goto L0(dx31);
      };
      r159 = dyn sub1(p42, "\\1", p43);
      return r159;
    };
    r161 = dyn file_path(p41, p44);
    check L202() else D71();
  L292():
    st text = r239;
    enc14 = ld enc;
    check L293() else D116();
  D71():
    deopt 281 [r161];
  D116():
    deopt 429 [enc14];
  L32(dx21):
    st srcLinenum = dx21;
    goto L33();
  L171():
    dr20 = tryDispatchBuiltin.1("[", srcLinenum1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L173() else L172(dr20);
  L172(srcLinenum3):
    pos10 = ld pos;
    check L174() else D61();
  L202():
    st ifile = r161;
    sym16 = ldf any;
    base16 = ldf any in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L203() else L204();
  L293():
    enc15 = force? enc14;
    checkMissing(enc15);
    l3 = ld text;
    attr__2 = ldf `attr<-`;
    check L294() else D117();
  D61():
    deopt 236 [srcLinenum3, pos10];
  D117():
    deopt 432 [enc15, l3, enc15];
  L41(r163):
    c32 = `as.logical`(r163);
    if c32 then L208() else L42();
  L173():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L32(dx20);
  L174():
    pos11 = force? pos10;
    checkMissing(pos11);
    r134 = `-`(<missing>, pos11);
    __7 = ldf `[` in base;
    r135 = dyn __7(srcLinenum3, r134);
    goto L32(r135);
  L203():
    ifile = ld ifile;
    check L205() else D72();
  L204():
    r162 = dyn base16(<lang `==`(ifile, file)>);
    goto L41(r162);
  L294():
    r240 = dyn attr__2(l3, NULL, "encoding", enc15);
    check L295() else D118();
  D72():
    deopt 285 [ifile];
  D118():
    deopt 435 [enc15, r240];
  L42():
    goto L43();
  L43():
    SweaveReadFile = ldf SweaveReadFile;
    check L212() else D77();
  L205():
    ifile1 = force? ifile;
    checkMissing(ifile1);
    file17 = ld file;
    check L206() else D73();
  L208():
    stop5 = ldf stop;
    check L209() else D75();
  L295():
    st text = r240;
    srcLinenum14 = ld srcLinenum;
    check L296() else D119();
  D73():
    deopt 286 [ifile1, file17];
  D75():
    deopt 292 [];
  D77():
    deopt 300 [];
  D119():
    deopt 437 [srcLinenum14];
  L206():
    file18 = force? file17;
    checkMissing(file18);
    r164 = `==`(ifile1, file18);
    any = ldf any in base;
    r165 = dyn any(r164);
    check L207() else D74();
  L209():
    p52 = prom<V +>{
      paste3 = ldf paste;
      p47 = prom<V +>{
        gettextf3 = ldf gettextf;
        p46 = prom<V +>{
          sQuote5 = ldf sQuote;
          p45 = prom<V +>{
            ifile2 = ld ifile;
            ifile3 = force? ifile2;
            checkMissing(ifile3);
            return ifile3;
          };
          r167 = dyn sQuote5(p45);
          return r167;
        };
        r169 = dyn gettextf3("recursive Sweave input %s in stack", p46);
        return r169;
      };
      p51 = prom<V +>{
        paste4 = ldf paste;
        p48 = prom<V +>{
          sym17 = ldf seq_len;
          base17 = ldf seq_len in base;
          guard17 = `==`.4(sym17, base17);
          if guard17 then L1() else L2();
        L0(r172):
          return r172;
        L1():
          file19 = ld file;
          file20 = force? file19;
          checkMissing(file20);
          r173 = seq_len(file20);
          goto L0(r173);
        L2():
          r171 = dyn base17(<sym file>);
          goto L0(r171);
        };
        p50 = prom<V +>{
          rev = ldf rev;
          p49 = prom<V +>{
            file21 = ld file;
            file22 = force? file21;
            checkMissing(file22);
            return file22;
          };
          r176 = dyn rev(p49);
          return r176;
        };
        r178 = dyn paste4[, , , , collapse]("\n         ", p48, ": ", p50, "");
        return r178;
      };
      r180 = dyn paste3(p47, p51);
      return r180;
    };
    r182 = dyn stop5[, domain](p52, NA_LGL);
    check L210() else D76();
  L212():
    p53 = prom<V +>{
      sym18 = ldf c;
      base18 = ldf c in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r185):
      return r185;
    L1():
      ifile4 = ld ifile;
      ifile5 = force? ifile4;
      checkMissing(ifile5);
      file23 = ld file;
      file24 = force? file23;
      checkMissing(file24);
      c33 = ldf c in base;
      r186 = dyn c33(ifile5, file24);
      goto L0(r186);
    L2():
      r184 = dyn base18(<sym ifile>, <sym file>);
      goto L0(r184);
    };
    p54 = prom<V +>{
      syntax27 = ld syntax;
      syntax28 = force? syntax27;
      checkMissing(syntax28);
      return syntax28;
    };
    p55 = prom<V +>{
      encoding13 = ld encoding;
      encoding14 = force? encoding13;
      checkMissing(encoding14);
      return encoding14;
    };
    r190 = dyn SweaveReadFile[, , encoding](p53, p54, p55);
    check L213() else D78();
  L296():
    srcLinenum15 = force? srcLinenum14;
    checkMissing(srcLinenum15);
    l4 = ld text;
    attr__3 = ldf `attr<-`;
    check L297() else D120();
  D74():
    deopt 290 [r165];
  D76():
    deopt 296 [r182];
  D78():
    deopt 305 [r190];
  D120():
    deopt 440 [srcLinenum15, l4, srcLinenum15];
  L207():
    goto L41(r165);
  L210():
    goto L43();
  L213():
    st itext = r190;
    sym19 = ldf seq_len;
    base19 = ldf seq_len in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L214() else L215();
  L297():
    r241 = dyn attr__3(l4, NULL, "srcLinenum", srcLinenum15);
    check L298() else D121();
  D121():
    deopt 443 [srcLinenum15, r241];
  L44(r192):
    st pre = r192;
    sym20 = ldf seq_len;
    base20 = ldf seq_len in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L217() else L218();
  L214():
    pos18 = ld pos;
    check L216() else D79();
  L215():
    r191 = dyn base19(<lang `-`(pos, 1)>);
    goto L44(r191);
  L298():
    st text = r241;
    srcFilenum8 = ld srcFilenum;
    check L299() else D122();
  D79():
    deopt 308 [pos18];
  D122():
    deopt 445 [srcFilenum8];
  L45(r196):
    pos22 = ld pos;
    check L224() else D83();
  L216():
    pos19 = force? pos18;
    checkMissing(pos19);
    r193 = `-`(pos19, 1);
    r194 = seq_len(r193);
    goto L44(r194);
  L217():
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L219() else L220();
  L218():
    r195 = dyn base20(<lang `-`(length(text), pos)>);
    goto L45(r195);
  L299():
    srcFilenum9 = force? srcFilenum8;
    checkMissing(srcFilenum9);
    l5 = ld text;
    attr__4 = ldf `attr<-`;
    check L300() else D123();
  D83():
    deopt 323 [r196, pos22];
  D123():
    deopt 448 [srcFilenum9, l5, srcFilenum9];
  L46(r198):
    pos20 = ld pos;
    check L223() else D82();
  L219():
    text26 = ld text;
    check L221() else D80();
  L220():
    r197 = dyn base21(<sym text>);
    goto L46(r197);
  L224():
    pos23 = force? pos22;
    checkMissing(pos23);
    r202 = `+`(r196, pos23);
    st post = r202;
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L225() else L226();
  L300():
    r242 = dyn attr__4(l5, NULL, "srcFilenum", srcFilenum9);
    check L301() else D124();
  D80():
    deopt 317 [text26];
  D82():
    deopt 320 [r198, pos20];
  D124():
    deopt 451 [srcFilenum9, r242];
  L47(r204):
    st text = r204;
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L239() else L240();
  L221():
    text27 = force? text26;
    checkMissing(text27);
    length8 = ldf length in base;
    r199 = dyn length8(text27);
    check L222() else D81();
  L223():
    pos21 = force? pos20;
    checkMissing(pos21);
    r200 = `-`(r198, pos21);
    r201 = seq_len(r200);
    goto L45(r201);
  L225():
    text28 = ld text;
    check L227() else D84();
  L226():
    r203 = dyn base22(<lang `[`(text, pre)>, <sym itext>, <lang `[`(text, post)>);
    goto L47(r203);
  L301():
    st text = r242;
    text36 = ld text;
    check L302() else D125();
  D81():
    deopt 320 [r199];
  D84():
    deopt 329 [text28];
  D125():
    deopt 453 [text36];
  L50(r209):
    st srcLinenum = r209;
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L256() else L257();
  L222():
    goto L46(r199);
  L227():
    text29 = force? text28;
    checkMissing(text29);
    c34 = `is.object`(text29);
    if c34 then L228() else L229(text29);
  L239():
    srcLinenum6 = ld srcLinenum;
    check L241() else D90();
  L240():
    r208 = dyn base23(<lang `[`(srcLinenum, pre)>, <lang attr(itext, "srcLinenum")>, <lang `[`(srcLinenum, post)>);
    goto L50(r208);
  L302():
    text37 = force? text36;
    checkMissing(text37);
    popenv;
    return text37;
  D90():
    deopt 346 [srcLinenum6];
  L48(dx34):
    itext = ld itext;
    check L232() else D86();
  L54(r217):
    st srcFilenum = r217;
    sym28 = ldf c;
    base28 = ldf c in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L277() else L278();
  L228():
    dr32 = tryDispatchBuiltin.1("[", text29);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L230() else L229(dr32);
  L229(text31):
    pre = ld pre;
    check L231() else D85();
  L241():
    srcLinenum7 = force? srcLinenum6;
    checkMissing(srcLinenum7);
    c37 = `is.object`(srcLinenum7);
    if c37 then L242() else L243(srcLinenum7);
  L256():
    srcFilenum = ld srcFilenum;
    check L258() else D97();
  L257():
    r216 = dyn base25(<lang `[`(srcFilenum, pre)>, <lang `+`(attr(itext, "srcFilenum"), length(f))>, <lang `[`(srcFilenum, post)>);
    goto L54(r216);
  D85():
    deopt 331 [text31, pre];
  D86():
    deopt 334 [itext];
  D97():
    deopt 368 [srcFilenum];
  L51(dx38):
    sym24 = ldf attr;
    base24 = ldf attr in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L246() else L247();
  L59(r232):
    st f = r232;
    goto L61();
  L230():
    dx33 = getTryDispatchBuiltinValue(dr32);
    goto L48(dx33);
  L231():
    pre1 = force? pre;
    __10 = ldf `[` in base;
    r205 = dyn __10(text31, pre1);
    goto L48(r205);
  L232():
    itext1 = force? itext;
    checkMissing(itext1);
    text32 = ld text;
    check L233() else D87();
  L242():
    dr36 = tryDispatchBuiltin.1("[", srcLinenum7);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L244() else L243(dr36);
  L243(srcLinenum9):
    pre2 = ld pre;
    check L245() else D91();
  L258():
    srcFilenum1 = force? srcFilenum;
    checkMissing(srcFilenum1);
    c40 = `is.object`(srcFilenum1);
    if c40 then L259() else L260(srcFilenum1);
  L277():
    f22 = ld f;
    check L279() else D106();
  L278():
    r231 = dyn base28(<sym f>, <lang attr(itext, "files")>);
    goto L59(r231);
  D87():
    deopt 336 [text32];
  D91():
    deopt 348 [srcLinenum9, pre2];
  D106():
    deopt 396 [f22];
  L52(r212):
    srcLinenum10 = ld srcLinenum;
    check L250() else D94();
  L55(dx42):
    sym26 = ldf attr;
    base26 = ldf attr in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L263() else L264();
  L233():
    text33 = force? text32;
    checkMissing(text33);
    c35 = `is.object`(text33);
    if c35 then L234() else L235(text33);
  L244():
    dx37 = getTryDispatchBuiltinValue(dr36);
    goto L51(dx37);
  L245():
    pre3 = force? pre2;
    __12 = ldf `[` in base;
    r210 = dyn __12(srcLinenum9, pre3);
    goto L51(r210);
  L246():
    itext2 = ld itext;
    check L248() else D92();
  L247():
    r211 = dyn base24(<sym itext>, "srcLinenum");
    goto L52(r211);
  L259():
    dr40 = tryDispatchBuiltin.1("[", srcFilenum1);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L261() else L260(dr40);
  L260(srcFilenum3):
    pre4 = ld pre;
    check L262() else D98();
  L279():
    f23 = force? f22;
    checkMissing(f23);
    sym29 = ldf attr;
    base29 = ldf attr in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L280() else L281();
  D92():
    deopt 353 [itext2];
  D94():
    deopt 358 [srcLinenum10];
  D98():
    deopt 370 [srcFilenum3, pre4];
  L49(dx36):
    c36 = ldf c in base;
    r207 = dyn c36(dx34, itext1, dx36);
    check L238() else D89();
  L56(r220):
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L267() else L268();
  L60(r234):
    c43 = ldf c in base;
    r236 = dyn c43(f23, r234);
    check L284() else D109();
  L234():
    dr34 = tryDispatchBuiltin.1("[", text33);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L236() else L235(dr34);
  L235(text35):
    post = ld post;
    check L237() else D88();
  L248():
    itext3 = force? itext2;
    checkMissing(itext3);
    attr = ldf attr in base;
    r213 = dyn attr(itext3, "srcLinenum");
    check L249() else D93();
  L250():
    srcLinenum11 = force? srcLinenum10;
    checkMissing(srcLinenum11);
    c38 = `is.object`(srcLinenum11);
    if c38 then L251() else L252(srcLinenum11);
  L261():
    dx41 = getTryDispatchBuiltinValue(dr40);
    goto L55(dx41);
  L262():
    pre5 = force? pre4;
    __14 = ldf `[` in base;
    r218 = dyn __14(srcFilenum3, pre5);
    goto L55(r218);
  L263():
    itext4 = ld itext;
    check L265() else D99();
  L264():
    r219 = dyn base26(<sym itext>, "srcFilenum");
    goto L56(r219);
  L280():
    itext6 = ld itext;
    check L282() else D107();
  L281():
    r233 = dyn base29(<sym itext>, "files");
    goto L60(r233);
  D88():
    deopt 338 [text35, post];
  D89():
    deopt 342 [r207];
  D93():
    deopt 357 [r213];
  D99():
    deopt 375 [itext4];
  D107():
    deopt 400 [itext6];
  D109():
    deopt 406 [r236];
  L53(dx40):
    c39 = ldf c in base;
    r215 = dyn c39(dx38, r212, dx40);
    check L255() else D96();
  L57(r225, r226):
    r228 = `+`(r225, r226);
    srcFilenum4 = ld srcFilenum;
    check L271() else D103();
  L236():
    dx35 = getTryDispatchBuiltinValue(dr34);
    goto L49(dx35);
  L237():
    post1 = force? post;
    __11 = ldf `[` in base;
    r206 = dyn __11(text35, post1);
    goto L49(r206);
  L238():
    goto L47(r207);
  L249():
    goto L52(r213);
  L251():
    dr38 = tryDispatchBuiltin.1("[", srcLinenum11);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L253() else L252(dr38);
  L252(srcLinenum13):
    post2 = ld post;
    check L254() else D95();
  L265():
    itext5 = force? itext4;
    checkMissing(itext5);
    attr1 = ldf attr in base;
    r221 = dyn attr1(itext5, "srcFilenum");
    check L266() else D100();
  L267():
    f20 = ld f;
    check L269() else D101();
  L268():
    r224 = dyn base27(<sym f>);
    goto L57(r220, r224);
  L282():
    itext7 = force? itext6;
    checkMissing(itext7);
    attr2 = ldf attr in base;
    r235 = dyn attr2(itext7, "files");
    check L283() else D108();
  L284():
    goto L59(r236);
  D95():
    deopt 360 [srcLinenum13, post2];
  D96():
    deopt 364 [r215];
  D100():
    deopt 379 [r221];
  D101():
    deopt 381 [r220, f20];
  D103():
    deopt 386 [srcFilenum4];
  D108():
    deopt 404 [r235];
  L253():
    dx39 = getTryDispatchBuiltinValue(dr38);
    goto L53(dx39);
  L254():
    post3 = force? post2;
    __13 = ldf `[` in base;
    r214 = dyn __13(srcLinenum13, post3);
    goto L53(r214);
  L255():
    goto L50(r215);
  L266():
    goto L56(r221);
  L269():
    f21 = force? f20;
    checkMissing(f21);
    length9 = ldf length in base;
    r227 = dyn length9(f21);
    check L270() else D102();
  L271():
    srcFilenum5 = force? srcFilenum4;
    checkMissing(srcFilenum5);
    c41 = `is.object`(srcFilenum5);
    if c41 then L272() else L273(srcFilenum5);
  L283():
    goto L60(r235);
  D102():
    deopt 384 [r220, r227];
  L58(dx44):
    c42 = ldf c in base;
    r230 = dyn c42(dx42, r228, dx44);
    check L276() else D105();
  L270():
    goto L57(r220, r227);
  L272():
    dr42 = tryDispatchBuiltin.1("[", srcFilenum5);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L274() else L273(dr42);
  L273(srcFilenum7):
    post4 = ld post;
    check L275() else D104();
  D104():
    deopt 388 [srcFilenum7, post4];
  D105():
    deopt 392 [r230];
  L274():
    dx43 = getTryDispatchBuiltinValue(dr42);
    goto L58(dx43);
  L275():
    post5 = force? post4;
    __15 = ldf `[` in base;
    r229 = dyn __15(srcFilenum7, post5);
    goto L58(r229);
  L276():
    goto L54(r230);
  }
}