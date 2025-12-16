fun main() {
  () -+> V { reg r:cls, reg paste:cls, reg readLines:cls, reg file_path:cls, reg R_home:cls, reg r1:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V, reg unlist:cls, reg strsplit:cls, reg x:*, reg x1:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg r11:V, reg c:L, reg r13:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r14:V, reg paste1:cls, reg x2:*, reg x3:V, reg p5:p(V +), reg r16:V, reg writeLines:cls, reg strwrap:cls, reg x4:*, reg x5:V, reg p6:p(V +), reg r18:V, reg p7:p(V +), reg r20:V, reg writeLines1:cls, reg strwrap1:cls, reg x6:*, reg x7:V, reg p8:p(V +), reg r22:V, reg p9:p(V +), reg r24:V, reg writeLines2:cls, reg strwrap2:cls, reg x8:*, reg x9:V, reg p10:p(V +), reg r26:V, reg p11:p(V +), reg r28:V, reg writeLines3:cls, reg strwrap3:cls, reg x10:*, reg x11:V, reg p12:p(V +), reg r30:V, reg p13:p(V +), reg r32:V, reg paste2:cls, reg sapply:cls, reg sample:cls, reg r33:V, reg p14:p(V +), reg r35:cls, reg p15:p(V +), reg r37:V, reg p16:p(V +), reg r39:V, reg sapply1:cls, reg r40:V, reg p17:p(V +), reg r42:cls, reg p18:p(V +), reg r44:V |
    mkenv;
    r = clos `inner-1740526048`;
    st strwrap = r;
    paste = ldf paste;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p2 = prom<V +>{
      readLines = ldf readLines;
      p1 = prom<V +>{
        file_path = ldf `file.path`;
        p = prom<V +>{
          R_home = ldf `R.home`;
          r1 = dyn R_home("doc");
          return r1;
        };
        r3 = dyn file_path(p, "THANKS");
        return r3;
      };
      r5 = dyn readLines(p1);
      return r5;
    };
    r7 = dyn paste[, collapse](p2, "\n");
    check L2() else D1();
  D1():
    deopt 8 [r7];
  L2():
    st x = r7;
    unlist = ldf unlist;
    check L3() else D2();
  D2():
    deopt 11 [];
  L3():
    p4 = prom<V +>{
      strsplit = ldf strsplit;
      p3 = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      r9 = dyn strsplit(p3, "\n[ \t\n]*\n");
      return r9;
    };
    r11 = dyn unlist(p4);
    check L4() else D3();
  D3():
    deopt 13 [r11];
  L4():
    c = `is.object`(r11);
    if c then L5() else L6(r11);
  L0(dx1):
    st x = dx1;
    paste1 = ldf paste;
    check L8() else D4();
  L5():
    dr = tryDispatchBuiltin.1("[", r11);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(r13):
    __ = ldf `[` in base;
    r14 = dyn __(r13, <int -1, -2, -3>);
    goto L0(r14);
  D4():
    deopt 19 [];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    p5 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r16 = dyn paste1[, collapse](p5, "\n\n");
    check L9() else D5();
  D5():
    deopt 23 [r16];
  L9():
    st x = r16;
    writeLines = ldf writeLines;
    check L10() else D6();
  D6():
    deopt 26 [];
  L10():
    p7 = prom<V +>{
      strwrap = ldf strwrap;
      p6 = prom<V +>{
        x4 = ld x;
        x5 = force? x4;
        checkMissing(x5);
        return x5;
      };
      r18 = dyn strwrap[, width](p6, 60.0);
      return r18;
    };
    r20 = dyn writeLines(p7);
    check L11() else D7();
  D7():
    deopt 28 [r20];
  L11():
    writeLines1 = ldf writeLines;
    check L12() else D8();
  D8():
    deopt 30 [];
  L12():
    p9 = prom<V +>{
      strwrap1 = ldf strwrap;
      p8 = prom<V +>{
        x6 = ld x;
        x7 = force? x6;
        checkMissing(x7);
        return x7;
      };
      r22 = dyn strwrap1[, width, indent](p8, 60.0, 5.0);
      return r22;
    };
    r24 = dyn writeLines1(p9);
    check L13() else D9();
  D9():
    deopt 32 [r24];
  L13():
    writeLines2 = ldf writeLines;
    check L14() else D10();
  D10():
    deopt 34 [];
  L14():
    p11 = prom<V +>{
      strwrap2 = ldf strwrap;
      p10 = prom<V +>{
        x8 = ld x;
        x9 = force? x8;
        checkMissing(x9);
        return x9;
      };
      r26 = dyn strwrap2[, width, exdent](p10, 60.0, 5.0);
      return r26;
    };
    r28 = dyn writeLines2(p11);
    check L15() else D11();
  D11():
    deopt 36 [r28];
  L15():
    writeLines3 = ldf writeLines;
    check L16() else D12();
  D12():
    deopt 38 [];
  L16():
    p13 = prom<V +>{
      strwrap3 = ldf strwrap;
      p12 = prom<V +>{
        x10 = ld x;
        x11 = force? x10;
        checkMissing(x11);
        return x11;
      };
      r30 = dyn strwrap3[, prefix](p12, "THANKS> ");
      return r30;
    };
    r32 = dyn writeLines3(p13);
    check L17() else D13();
  D13():
    deopt 40 [r32];
  L17():
    paste2 = ldf paste;
    check L18() else D14();
  D14():
    deopt 42 [];
  L18():
    p16 = prom<V +>{
      sapply = ldf sapply;
      p14 = prom<V +>{
        sample = ldf sample;
        r33 = dyn sample[, , replace](10.0, 100.0, TRUE);
        return r33;
      };
      p15 = prom<V +>{
        r35 = clos inner354062069;
        return r35;
      };
      r37 = dyn sapply(p14, p15);
      return r37;
    };
    r39 = dyn paste2[, collapse](p16, " ");
    check L19() else D15();
  D15():
    deopt 46 [r39];
  L19():
    st x = r39;
    sapply1 = ldf sapply;
    check L20() else D16();
  D16():
    deopt 49 [];
  L20():
    p17 = prom<V +>{
      r40 = `:`(10.0, 40.0);
      return r40;
    };
    p18 = prom<V +>{
      r42 = clos inner148564522;
      return r42;
    };
    r44 = dyn sapply1(p17, p18);
    check L21() else D17();
  D17():
    deopt 52 [r44];
  L21():
    popenv;
    return r44;
  }
}
fun `inner-1740526048`(x, width, indent, exdent, prefix, simplify, initial) {
  (reg x:*, reg width:*, reg indent:*, reg exdent:*, reg prefix:*, reg simplify:*, reg initial:*) -+> V { var x:*, var width:*, reg width_isMissing:L, reg width_orDefault:*, reg getOption:cls, reg r:V, reg r1:V, reg p:p(V +), var indent:*, reg indent_isMissing:L, reg indent_orDefault:*, var exdent:*, reg exdent_isMissing:L, reg exdent_orDefault:*, var prefix:*, reg prefix_isMissing:L, reg prefix_orDefault:*, var simplify:*, reg simplify_isMissing:L, reg simplify_orDefault:*, var initial:*, reg initial_isMissing:L, reg initial_orDefault:*, reg prefix1:*, reg prefix2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg c:L, reg r6:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg as_character:cls, reg r9:V, reg strrep:cls, reg indent1:*, reg indent2:V, reg p2:p(V +), reg r12:V, reg strrep1:cls, reg exdent1:*, reg exdent2:V, reg p3:p(V +), reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg list:cls, reg r17:V, reg Encoding:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg x7:*, reg x8:V, reg enc2utf8:cls, reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg validEnc:cls, reg x9:*, reg x10:V, reg p5:p(V +), reg r26:V, reg r27:V, reg any:cls, reg r28:V, reg c2:L, reg iconv:cls, reg x11:*, reg x12:V, reg c3:L, reg x14:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __:cls, reg r29:V, reg p6:p(V +), reg r31:V, reg l:*, reg c4:L, reg r33:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r35:V, reg dx3:V, reg ind2:*, reg ind3:V, reg ___:cls, reg r36:V, reg lapply:cls, reg strsplit:cls, reg x15:*, reg x16:V, reg p7:p(V +), reg r39:V, reg p8:p(V +), reg strsplit1:*, reg strsplit2:V, reg p9:p(V +), reg r42:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg z:*, reg z1:V, reg r45:I, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c5:L, reg x17:V, reg character:cls, reg r46:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg i7:I, reg r48:V, reg z2:*, reg z3:V, reg c6:L, reg i9:I, reg z5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i11:I, reg dx5:V, reg i12:*, reg i13:V, reg __1:cls, reg r49:V, reg r50:I, reg s1:V, reg l4:I, reg i14:I, reg i15:I, reg i16:I, reg i17:I, reg c7:L, reg x18:V, reg z6:*, reg z7:V, reg c8:L, reg i24:I, reg i25:I, reg z9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i28:I, reg i29:I, reg dx7:V, reg i30:*, reg i31:V, reg __2:cls, reg r51:V, reg c9:L, reg i34:I, reg i35:I, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg i38:I, reg i39:I, reg dx11:V, reg j:*, reg j1:V, reg __3:cls, reg r52:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg i44:I, reg i45:I, reg r54:V, reg words:*, reg words1:V, reg nchar:cls, reg r55:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r56:V, reg i50:I, reg i51:I, reg r57:V, reg nc:*, reg nc1:V, reg anyNA:cls, reg r58:V, reg c10:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r59:V, reg i60:I, reg i61:I, reg r60:V, reg words2:*, reg words3:V, reg nchar1:cls, reg r61:V, reg nc2:*, reg nc3:V, reg c11:L, reg i64:I, reg i65:I, reg nc5:V, reg dr10:V, reg dc5:L, reg dx12:V, reg i68:I, reg i69:I, reg dx13:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r62:V, reg i74:I, reg i75:I, reg nc8:V, reg r63:V, reg nc9:*, reg nc10:V, reg is_na:cls, reg r64:V, reg __4:cls, reg r65:V, reg l5:*, reg c12:L, reg i78:I, reg i79:I, reg dx15:V, reg l7:*, reg dr12:V, reg dc6:L, reg dx17:V, reg i82:I, reg i83:I, reg dx18:V, reg dx19:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r66:V, reg i88:I, reg i89:I, reg dx24:V, reg l10:*, reg dx25:V, reg r67:V, reg nc11:*, reg nc12:V, reg is_na1:cls, reg r68:V, reg ___1:cls, reg r69:V, reg i90:I, reg i91:I, reg sym12:cls, reg base12:cls, reg guard12:L, reg r70:V, reg i96:I, reg i97:I, reg r71:V, reg nc13:*, reg nc14:V, reg r72:V, reg any1:cls, reg r73:V, reg c13:L, reg which:cls, reg nc15:*, reg nc16:V, reg r74:V, reg p10:p(V +), reg r76:V, reg zLenInd:*, reg zLenInd1:V, reg c14:L, reg i104:I, reg i105:I, reg zLenInd3:V, reg dr14:V, reg dc7:L, reg dx27:V, reg i108:I, reg i109:I, reg dx28:V, reg _in_:cls, reg zLenInd4:*, reg zLenInd5:V, reg p11:p(V +), reg grep:cls, reg words4:*, reg words5:V, reg p12:p(V +), reg r79:V, reg r80:V, reg p13:p(V +), reg r82:V, reg r83:V, reg __5:cls, reg r84:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r85:V, reg i114:I, reg i115:I, reg r86:V, reg zLenInd6:*, reg zLenInd7:V, reg length:cls, reg r87:V, reg c15:L, reg words6:*, reg words7:V, reg c16:L, reg i122:I, reg i123:I, reg words9:V, reg dr16:V, reg dc8:L, reg dx29:V, reg i126:I, reg i127:I, reg dx30:V, reg zLenInd8:*, reg zLenInd9:V, reg r88:V, reg __6:cls, reg r89:V, reg nc17:*, reg nc18:V, reg c17:L, reg i130:I, reg i131:I, reg nc20:V, reg dr18:V, reg dc9:L, reg dx31:V, reg i134:I, reg i135:I, reg dx32:V, reg zLenInd10:*, reg zLenInd11:V, reg r90:V, reg __7:cls, reg r91:V, reg i136:I, reg i137:I, reg dx33:V, reg i138:I, reg i139:I, reg sym14:cls, reg base14:cls, reg guard14:L, reg r92:V, reg i144:I, reg i145:I, reg r93:V, reg words10:*, reg words11:V, reg length1:cls, reg r94:V, reg r95:V, reg c18:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r96:V, reg i154:I, reg i155:I, reg r97:V, reg yi:*, reg yi1:V, reg initial1:*, reg initial2:V, reg c19:cls, reg r98:V, reg integer:cls, reg r100:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r101:V, reg i164:I, reg i165:I, reg r102:V, reg nc21:*, reg nc22:V, reg r103:V, reg cumsum:cls, reg r104:V, reg width1:*, reg width2:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r105:V, reg i170:I, reg i171:I, reg width5:V, reg r106:V, reg initial3:*, reg initial4:V, reg nchar2:cls, reg r107:V, reg r108:V, reg indent3:*, reg indent4:V, reg r109:V, reg i172:I, reg i173:I, reg sym18:cls, reg base18:cls, reg guard18:L, reg r110:V, reg i178:I, reg i179:I, reg r111:V, reg lens:*, reg lens1:V, reg length2:cls, reg r112:V, reg c20:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r113:V, reg i188:I, reg i189:I, reg r114:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r115:V, reg i194:I, reg i195:I, reg r116:V, reg lens2:*, reg lens3:V, reg maxLength:*, reg maxLength1:V, reg r117:V, reg sum:cls, reg r118:V, reg max:cls, reg r119:V, reg first:*, reg first1:V, reg c21:L, reg width6:*, reg width7:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r120:V, reg i204:I, reg i205:I, reg width10:V, reg r121:V, reg prefix3:*, reg prefix4:V, reg nchar3:cls, reg r122:V, reg r123:V, reg exdent3:*, reg exdent4:V, reg r124:V, reg i206:I, reg i207:I, reg currentIndex:*, reg currentIndex1:V, reg k:*, reg k1:V, reg r126:V, reg nc23:*, reg nc24:V, reg c22:L, reg i210:I, reg i211:I, reg nc26:V, reg dr20:V, reg dc10:L, reg dx35:V, reg i214:I, reg i215:I, reg dx36:V, reg currentIndex2:*, reg currentIndex3:V, reg __8:cls, reg r127:V, reg r128:V, reg c23:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r129:V, reg i224:I, reg i225:I, reg r130:V, reg upperBlockIndex:*, reg upperBlockIndex1:V, reg currentIndex4:*, reg currentIndex5:V, reg r131:V, reg c24:cls, reg r132:V, reg i226:I, reg i227:I, reg sym23:cls, reg base23:cls, reg guard23:L, reg r134:V, reg i232:I, reg i233:I, reg r135:V, reg upperBlockIndex2:*, reg upperBlockIndex3:V, reg currentIndex6:*, reg currentIndex7:V, reg c25:cls, reg r136:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r137:V, reg i238:I, reg i239:I, reg r138:V, reg lens4:*, reg lens5:V, reg length3:cls, reg r139:V, reg k2:*, reg k3:V, reg r140:V, reg c26:L, reg nc27:*, reg nc28:V, reg c27:L, reg i246:I, reg i247:I, reg nc30:V, reg dr22:V, reg dc11:L, reg dx37:V, reg i250:I, reg i251:I, reg dx38:V, reg currentIndex8:*, reg currentIndex9:V, reg r141:V, reg __9:cls, reg r142:V, reg r143:V, reg c28:L, reg currentIndex10:*, reg currentIndex11:V, reg r144:V, reg k4:*, reg k5:V, reg r145:V, reg i256:I, reg i257:I, reg sym25:cls, reg base25:cls, reg guard25:L, reg r147:V, reg i262:I, reg i263:I, reg r148:V, reg lowerBlockIndex:*, reg lowerBlockIndex1:V, reg currentIndex12:*, reg currentIndex13:V, reg r149:V, reg c29:cls, reg r150:V, reg i264:I, reg i265:I, reg sym26:cls, reg base26:cls, reg guard26:L, reg r152:V, reg i270:I, reg i271:I, reg r153:V, reg lens6:*, reg lens7:V, reg length4:cls, reg r154:V, reg k6:*, reg k7:V, reg r155:V, reg c30:L, reg lens8:*, reg lens9:V, reg c31:L, reg i278:I, reg i279:I, reg lens11:V, reg dr24:V, reg dc12:L, reg dx39:V, reg i282:I, reg i283:I, reg dx40:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r156:V, reg i288:I, reg i289:I, reg lens14:V, reg r157:V, reg k8:*, reg k9:V, reg r158:I, reg r159:V, reg __10:cls, reg r160:V, reg lens15:*, reg lens16:V, reg c32:L, reg i292:I, reg i293:I, reg dx42:V, reg lens18:V, reg dr26:V, reg dc13:L, reg dx44:V, reg i296:I, reg i297:I, reg dx45:V, reg dx46:V, reg k10:*, reg k11:V, reg __11:cls, reg r161:V, reg r162:V, reg i298:I, reg i299:I, reg sym28:cls, reg base28:cls, reg guard28:L, reg r164:V, reg i304:I, reg i305:I, reg r165:V, reg upperBlockIndex4:*, reg upperBlockIndex5:V, reg length5:cls, reg r166:V, reg paste0:cls, reg sym29:cls, reg base29:cls, reg guard29:L, reg r167:V, reg r168:V, reg initial5:*, reg initial6:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r169:V, reg r170:V, reg prefix5:*, reg prefix6:V, reg nBlocks:*, reg nBlocks1:V, reg r171:V, reg rep_int:cls, reg r172:V, reg c33:cls, reg r173:V, reg p14:p(V +), reg sym31:cls, reg base31:cls, reg guard31:L, reg r175:V, reg r176:V, reg indentString:*, reg indentString1:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r177:V, reg r178:V, reg exdentString:*, reg exdentString1:V, reg nBlocks2:*, reg nBlocks3:V, reg r179:V, reg rep_int1:cls, reg r180:V, reg c34:cls, reg r181:V, reg p15:p(V +), reg r183:V, reg prefix7:*, reg prefix8:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r184:V, reg i310:I, reg i311:I, reg r185:V, reg nBlocks4:*, reg nBlocks5:V, reg r186:I, reg s2:V, reg l11:I, reg i312:I, reg i313:I, reg i314:I, reg i315:I, reg i316:I, reg c35:L, reg x19:V, reg paste1:cls, reg s3:*, reg s4:V, reg c36:L, reg s6:V, reg dr28:V, reg dc14:L, reg dx47:V, reg dx48:V, reg k12:*, reg k13:V, reg __12:cls, reg r187:V, reg p16:p(V +), reg paste2:cls, reg words12:*, reg words13:V, reg c37:L, reg words15:V, reg dr30:V, reg dc15:L, reg dx49:V, reg dx50:V, reg lowerBlockIndex2:*, reg lowerBlockIndex3:V, reg c38:L, reg words17:V, reg lowerBlockIndex5:V, reg dr32:V, reg dc16:L, reg dx51:V, reg words19:V, reg dx52:V, reg k14:*, reg k15:V, reg __13:cls, reg r189:V, reg upperBlockIndex6:*, reg upperBlockIndex7:V, reg c39:L, reg words21:V, reg dx54:V, reg upperBlockIndex9:V, reg dr34:V, reg dc17:L, reg dx56:V, reg words23:V, reg dx57:V, reg dx58:V, reg k16:*, reg k17:V, reg __14:cls, reg r190:V, reg r191:V, reg __15:cls, reg r192:V, reg p17:p(V +), reg r194:V, reg p18:p(V +), reg r196:V, reg l12:*, reg c40:L, reg i326:I, reg i327:I, reg i328:I, reg r198:V, reg l14:*, reg dr36:V, reg dc18:L, reg dx59:V, reg i332:I, reg i333:I, reg i334:I, reg dx60:V, reg k18:*, reg k19:V, reg ___2:cls, reg r201:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r202:V, reg i339:I, reg i340:I, reg r203:V, reg yi2:*, reg yi3:V, reg s7:*, reg s8:V, reg prefix9:*, reg prefix10:V, reg c41:cls, reg r204:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r205:V, reg i343:I, reg r206:V, reg yi4:*, reg yi5:V, reg length6:cls, reg r207:V, reg c42:L, reg sym36:cls, reg base36:cls, reg guard36:L, reg r208:V, reg i348:I, reg r209:V, reg y:*, reg y1:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r210:V, reg i351:I, reg r211:V, reg yi6:*, reg yi7:V, reg c43:L, reg i353:I, reg yi9:V, reg dr38:V, reg dc19:L, reg dx61:V, reg i355:I, reg dx62:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r212:V, reg i358:I, reg yi12:V, reg r213:V, reg yi13:*, reg yi14:V, reg length7:cls, reg r214:V, reg r215:V, reg __16:cls, reg r216:V, reg list1:cls, reg r217:V, reg c44:cls, reg r218:V, reg i359:I, reg r219:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r220:V, reg y2:*, reg y3:V, reg c45:cls, reg r221:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r222:V, reg r223:V, reg which1:cls, reg enc:*, reg enc1:V, reg r224:V, reg p19:p(V +), reg r226:V, reg length8:cls, reg r227:V, reg c46:L, reg lapply1:cls, reg y4:*, reg y5:V, reg c47:L, reg y7:V, reg dr40:V, reg dc20:L, reg dx63:V, reg dx64:V, reg pos:*, reg pos1:V, reg __17:cls, reg r228:V, reg p20:p(V +), reg r230:cls, reg p21:p(V +), reg r232:V, reg l15:*, reg c48:L, reg r234:V, reg l17:*, reg dr42:V, reg dc21:L, reg dx65:V, reg r236:V, reg dx66:V, reg pos2:*, reg pos3:V, reg ___3:cls, reg r237:V, reg simplify1:*, reg simplify2:V, reg c49:L, reg sym41:cls, reg base41:cls, reg guard41:L, reg r239:V, reg r240:V, reg unlist:cls, reg y8:*, reg y9:V, reg p22:p(V +), reg r242:V, reg as_character1:cls, reg r243:V, reg y10:*, reg y11:V |
    mkenv;
    st x = x;
    width_isMissing = missing.0(width);
    if width_isMissing then L0() else L1(width);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("width");
      r1 = `*`(0.9, r);
      return r1;
    };
    goto L1(p);
  L1(width_orDefault):
    st width = width_orDefault;
    indent_isMissing = missing.0(indent);
    if indent_isMissing then L2(0.0) else L2(indent);
  L2(indent_orDefault):
    st indent = indent_orDefault;
    exdent_isMissing = missing.0(exdent);
    if exdent_isMissing then L3(0.0) else L3(exdent);
  L3(exdent_orDefault):
    st exdent = exdent_orDefault;
    prefix_isMissing = missing.0(prefix);
    if prefix_isMissing then L4("") else L4(prefix);
  L4(prefix_orDefault):
    st prefix = prefix_orDefault;
    simplify_isMissing = missing.0(simplify);
    if simplify_isMissing then L5(TRUE) else L5(simplify);
  L5(simplify_orDefault):
    st simplify = simplify_orDefault;
    initial_isMissing = missing.0(initial);
    if initial_isMissing then L6() else L7(initial);
  L6():
    p1 = prom<V +>{
      prefix1 = ld prefix;
      prefix2 = force? prefix1;
      checkMissing(prefix2);
      return prefix2;
    };
    goto L7(p1);
  L7(initial_orDefault):
    st initial = initial_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L97() else L98();
  L8(r5):
    r6 = `!`(r5);
    c1 = `as.logical`(r6);
    if c1 then L100() else L9();
  L97():
    x1 = ld x;
    check L99() else D0();
  L98():
    r4 = dyn base(<sym x>);
    goto L8(r4);
  D0():
    deopt 1 [x1];
  L9():
    goto L11();
  L11():
    strrep = ldf strrep;
    check L106() else D3();
  L99():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.character`(x2);
    goto L8(c);
  L100():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L101() else L102();
  D3():
    deopt 15 [];
  L10(r8):
    st x = r8;
    goto L11();
  L101():
    x3 = ld x;
    check L103() else D1();
  L102():
    r7 = dyn base1(<sym x>);
    goto L10(r7);
  L106():
    p2 = prom<V +>{
      indent1 = ld indent;
      indent2 = force? indent1;
      checkMissing(indent2);
      return indent2;
    };
    r12 = dyn strrep(" ", p2);
    check L107() else D4();
  D1():
    deopt 7 [x3];
  D4():
    deopt 18 [r12];
  L103():
    x4 = force? x3;
    checkMissing(x4);
    as_character = ldf `as.character` in base;
    r9 = dyn as_character(x4);
    check L104() else D2();
  L107():
    st indentString = r12;
    strrep1 = ldf strrep;
    check L108() else D5();
  D2():
    deopt 10 [r9];
  D5():
    deopt 21 [];
  L104():
    goto L10(r9);
  L108():
    p3 = prom<V +>{
      exdent1 = ld exdent;
      exdent2 = force? exdent1;
      checkMissing(exdent2);
      return exdent2;
    };
    r14 = dyn strrep1(" ", p3);
    check L109() else D6();
  D6():
    deopt 24 [r14];
  L109():
    st exdentString = r14;
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L110() else L111();
  L12(r16):
    st y = r16;
    Encoding = ldf Encoding;
    check L113() else D8();
  L110():
    list = ldf list in base;
    r17 = dyn list();
    check L112() else D7();
  L111():
    r15 = dyn base2();
    goto L12(r15);
  D7():
    deopt 29 [r17];
  D8():
    deopt 32 [];
  L112():
    goto L12(r17);
  L113():
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r19 = dyn Encoding(p4);
    check L114() else D9();
  D9():
    deopt 34 [r19];
  L114():
    st enc = r19;
    sym3 = ldf enc2utf8;
    base3 = ldf enc2utf8 in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L115() else L116();
  L13(r21):
    st x = r21;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L119() else L120();
  L115():
    x7 = ld x;
    check L117() else D10();
  L116():
    r20 = dyn base3(<sym x>);
    goto L13(r20);
  D10():
    deopt 38 [x7];
  L14(r24):
    c2 = `as.logical`(r24);
    if c2 then L124() else L15();
  L117():
    x8 = force? x7;
    checkMissing(x8);
    enc2utf8 = ldf enc2utf8 in base;
    r22 = dyn enc2utf8(x8);
    check L118() else D11();
  L119():
    validEnc = ldf validEnc;
    check L121() else D12();
  L120():
    r23 = dyn base4(<lang `<-`(ind, `!`(validEnc(x)))>);
    goto L14(r23);
  D11():
    deopt 41 [r22];
  D12():
    deopt 46 [];
  L15():
    goto L17();
  L17():
    lapply = ldf lapply;
    check L132() else D18();
  L118():
    goto L13(r22);
  L121():
    p5 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r26 = dyn validEnc(p5);
    check L122() else D13();
  L124():
    iconv = ldf iconv;
    check L125() else D15();
  D13():
    deopt 48 [r26];
  D15():
    deopt 54 [];
  D18():
    deopt 69 [];
  L122():
    r27 = `!`(r26);
    st ind = r27;
    any = ldf any in base;
    r28 = dyn any(r27);
    check L123() else D14();
  L125():
    p6 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      c3 = `is.object`(x12);
      if c3 then L1() else L2(x12);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", x12);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x14):
      ind = ld ind;
      ind1 = force? ind;
      __ = ldf `[` in base;
      r29 = dyn __(x14, ind1);
      goto L0(r29);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r31 = dyn iconv[, , , sub](p6, "UTF-8", "UTF-8", "byte");
    check L126() else D16();
  L132():
    p8 = prom<V +>{
      strsplit = ldf strsplit;
      p7 = prom<V +>{
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        return x16;
      };
      r39 = dyn strsplit[, , perl](p7, "\n[ \t\n]*\n", TRUE);
      return r39;
    };
    p9 = prom<V +>{
      strsplit1 = ld strsplit;
      strsplit2 = force? strsplit1;
      checkMissing(strsplit2);
      return strsplit2;
    };
    r42 = dyn lapply[, , , perl](p8, p9, "[ \t\n]", TRUE);
    check L133() else D19();
  D14():
    deopt 52 [r28];
  D16():
    deopt 60 [r31];
  D19():
    deopt 75 [r42];
  L123():
    goto L14(r28);
  L126():
    l = ld x;
    c4 = `is.object`(l);
    if c4 then L127() else L128(r31, l);
  L133():
    st z = r42;
    sym5 = ldf seq_along;
    base5 = ldf seq_along in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L134() else L135();
  L16(r35, dx3):
    st x = dx3;
    goto L17();
  L18(r44):
    s = toForSeq(r44);
    l3 = length(s);
    i = 0;
    goto L19(i);
  L127():
    dr2 = tryDispatchBuiltin.0("[<-", l, r31);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L129() else L128(r31, dr2);
  L128(r33, l2):
    ind2 = ld ind;
    check L130() else D17();
  L134():
    z = ld z;
    check L136() else D20();
  L135():
    r43 = dyn base5(<sym z>);
    goto L18(r43);
  D17():
    deopt 62 [r33, l2, r31, ind2];
  D20():
    deopt 78 [z];
  L19(i1):
    i2 = `+`.1(i1, 1);
    c5 = `<`.1(l3, i2);
    if c5 then L137() else L89();
  L129():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L16(r31, dx2);
  L130():
    ind3 = force? ind2;
    ___ = ldf `[<-` in base;
    r36 = dyn ___(l2, r31, ind3);
    goto L16(r33, r36);
  L136():
    z1 = force? z;
    checkMissing(z1);
    r45 = seq_along(z1);
    goto L18(r45);
  L89():
    x17 = `[[`(s, i2, NULL, TRUE);
    st i = x17;
    character = ldf character;
    check L138() else D21();
  L137():
    sym40 = ldf length;
    base40 = ldf length in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L370() else L371();
  D21():
    deopt 82 [i2];
  L90(r223):
    c46 = `as.logical`(r223);
    if c46 then L375() else L91();
  L138():
    r46 = dyn character();
    check L139() else D22();
  L370():
    which1 = ldf which;
    check L372() else D126();
  L371():
    r222 = dyn base40(<lang `<-`(pos, which(`==`(enc, "latin1")))>);
    goto L90(r222);
  D22():
    deopt 83 [i2, r46];
  D126():
    deopt 481 [];
  L91():
    goto L93();
  L93():
    simplify1 = ld simplify;
    check L383() else D132();
  L139():
    st yi = r46;
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L140() else L141();
  L372():
    p19 = prom<V +>{
      enc = ld enc;
      enc1 = force? enc;
      checkMissing(enc1);
      r224 = `==`(enc1, "latin1");
      return r224;
    };
    r226 = dyn which1(p19);
    check L373() else D127();
  L375():
    lapply1 = ldf lapply;
    check L376() else D129();
  D127():
    deopt 483 [r226];
  D129():
    deopt 488 [];
  D132():
    deopt 499 [simplify1];
  L20(i7, r48):
    s1 = toForSeq(r48);
    l4 = length(s1);
    i14 = 0;
    goto L22(i7, i14);
  L140():
    z2 = ld z;
    check L142() else D23();
  L141():
    r47 = dyn base6(<lang `[[`(z, i)>);
    goto L20(i2, r47);
  L373():
    st pos = r226;
    length8 = ldf length in base;
    r227 = dyn length8(r226);
    check L374() else D128();
  L376():
    p20 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      c47 = `is.object`(y5);
      if c47 then L1() else L2(y5);
    L0(dx64):
      return dx64;
    L1():
      dr40 = tryDispatchBuiltin.1("[", y5);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(y7):
      pos = ld pos;
      pos1 = force? pos;
      __17 = ldf `[` in base;
      r228 = dyn __17(y7, pos1);
      goto L0(r228);
    L3():
      dx63 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx63);
    };
    p21 = prom<V +>{
      r230 = clos `inner-910700624`;
      return r230;
    };
    r232 = dyn lapply1(p20, p21);
    check L377() else D130();
  L383():
    simplify2 = force? simplify1;
    checkMissing(simplify2);
    c49 = `as.logical`(simplify2);
    if c49 then L384() else L94();
  D23():
    deopt 86 [i2, z2];
  D128():
    deopt 486 [r227];
  D130():
    deopt 491 [r232];
  L22(i15, i16):
    i17 = `+`.1(i16, 1);
    c7 = `<`.1(l4, i17);
    if c7 then L147() else L81();
  L94():
    goto L96();
  L96():
    y10 = ld y;
    check L391() else D136();
  L142():
    z3 = force? z2;
    checkMissing(z3);
    c6 = `is.object`(z3);
    if c6 then L143() else L144(i2, z3);
  L374():
    goto L90(r227);
  L377():
    l15 = ld y;
    c48 = `is.object`(l15);
    if c48 then L378() else L379(r232, l15);
  L384():
    sym41 = ldf `as.character`;
    base41 = ldf `as.character` in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L385() else L386();
  D136():
    deopt 512 [y10];
  L21(i11, dx5):
    r50 = seq_along(dx5);
    goto L20(i11, r50);
  L81():
    x18 = `[[`(s1, i17, NULL, TRUE);
    st j = x18;
    z6 = ld z;
    check L148() else D25();
  L92(r236, dx66):
    st y = dx66;
    goto L93();
  L95(r240):
    st y = r240;
    goto L96();
  L143():
    dr4 = tryDispatchBuiltin.1("[[", z3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L145() else L144(i2, dr4);
  L144(i9, z5):
    i12 = ld i;
    check L146() else D24();
  L147():
    sym35 = ldf length;
    base35 = ldf length in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L345() else L346();
  L378():
    dr42 = tryDispatchBuiltin.0("[<-", l15, r232);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L380() else L379(r232, dr42);
  L379(r234, l17):
    pos2 = ld pos;
    check L381() else D131();
  L385():
    unlist = ldf unlist;
    check L387() else D133();
  L386():
    r239 = dyn base41(<lang unlist(y)>);
    goto L95(r239);
  L391():
    y11 = force? y10;
    checkMissing(y11);
    popenv;
    return y11;
  D24():
    deopt 88 [i9, z5, i12];
  D25():
    deopt 92 [i15, i17, z6];
  D131():
    deopt 493 [r234, l17, r232, pos2];
  D133():
    deopt 504 [];
  L82(i343, r206):
    c42 = `as.logical`(r206);
    if c42 then L349() else L83();
  L145():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L21(i2, dx4);
  L146():
    i13 = force? i12;
    __1 = ldf `[[` in base;
    r49 = dyn __1(z5, i13);
    goto L21(i9, r49);
  L148():
    z7 = force? z6;
    checkMissing(z7);
    c8 = `is.object`(z7);
    if c8 then L149() else L150(i15, i17, z7);
  L345():
    yi4 = ld yi;
    check L347() else D116();
  L346():
    r205 = dyn base35(<sym yi>);
    goto L82(i15, r205);
  L380():
    dx65 = getTryDispatchBuiltinValue(dr42);
    goto L92(r232, dx65);
  L381():
    pos3 = force? pos2;
    ___3 = ldf `[<-` in base;
    r237 = dyn ___3(l17, r232, pos3);
    goto L92(r234, r237);
  L387():
    p22 = prom<V +>{
      y8 = ld y;
      y9 = force? y8;
      checkMissing(y9);
      return y9;
    };
    r242 = dyn unlist(p22);
    check L388() else D134();
  D116():
    deopt 443 [i15, yi4];
  D134():
    deopt 506 [r242];
  L23(i28, i29, dx7):
    c9 = `is.object`(dx7);
    if c9 then L153() else L154(i28, i29, dx7);
  L83():
    sym39 = ldf c;
    base39 = ldf c in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L366() else L367();
  L88(i359, r219):
    st y = r219;
    goto L19(i359);
  L149():
    dr6 = tryDispatchBuiltin.1("[[", z7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L151() else L150(i15, i17, dr6);
  L150(i24, i25, z9):
    i30 = ld i;
    check L152() else D26();
  L347():
    yi5 = force? yi4;
    checkMissing(yi5);
    length6 = ldf length in base;
    r207 = dyn length6(yi5);
    check L348() else D117();
  L349():
    sym36 = ldf c;
    base36 = ldf c in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L350() else L351();
  L388():
    as_character1 = ldf `as.character` in base;
    r243 = dyn as_character1(r242);
    check L389() else D135();
  D26():
    deopt 94 [i24, i25, z9, i30];
  D117():
    deopt 446 [i15, r207];
  D135():
    deopt 508 [r243];
  L24(i38, i39, dx11):
    st words = dx11;
    sym7 = ldf nchar;
    base7 = ldf nchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L157() else L158();
  L84(i348, r209):
    goto L88(i348, r209);
  L151():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L23(i15, i17, dx6);
  L152():
    i31 = force? i30;
    __2 = ldf `[[` in base;
    r51 = dyn __2(z9, i31);
    goto L23(i24, i25, r51);
  L153():
    dr8 = tryDispatchBuiltin.1("[[", dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L155() else L154(i28, i29, dr8);
  L154(i34, i35, dx9):
    j = ld j;
    check L156() else D27();
  L348():
    goto L82(i15, r207);
  L350():
    y = ld y;
    check L352() else D118();
  L351():
    r208 = dyn base36(<sym y>, <lang list(`[`(yi, `-`(length(yi))))>);
    goto L84(i343, r208);
  L366():
    y2 = ld y;
    check L368() else D124();
  L367():
    r220 = dyn base39(<sym y>, "");
    goto L88(i343, r220);
  L389():
    goto L95(r243);
  D27():
    deopt 97 [i34, i35, dx9, j];
  D118():
    deopt 449 [i343, y];
  D124():
    deopt 469 [i343, y2];
  L25(i44, i45, r54):
    st nc = r54;
    sym8 = ldf anyNA;
    base8 = ldf anyNA in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L161() else L162();
  L155():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L24(i28, i29, dx10);
  L156():
    j1 = force? j;
    __3 = ldf `[[` in base;
    r52 = dyn __3(dx9, j1);
    goto L24(i34, i35, r52);
  L157():
    words = ld words;
    check L159() else D28();
  L158():
    r53 = dyn base7[, type](<sym words>, "w");
    goto L25(i38, i39, r53);
  L352():
    y1 = force? y;
    checkMissing(y1);
    sym37 = ldf list;
    base37 = ldf list in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L353() else L354();
  L368():
    y3 = force? y2;
    checkMissing(y3);
    c45 = ldf c in base;
    r221 = dyn c45(y3, "");
    check L369() else D125();
  D28():
    deopt 103 [i38, i39, words];
  D125():
    deopt 473 [i343, r221];
  L26(i50, i51, r57):
    c10 = `as.logical`(r57);
    if c10 then L165() else L27();
  L85(i351, r211):
    c44 = ldf c in base;
    r218 = dyn c44(y1, r211);
    check L364() else D123();
  L159():
    words1 = force? words;
    checkMissing(words1);
    nchar = ldf nchar in base;
    r55 = dyn nchar(words1, "w", FALSE, NA_LGL);
    check L160() else D29();
  L161():
    nc = ld nc;
    check L163() else D30();
  L162():
    r56 = dyn base8(<sym nc>);
    goto L26(i44, i45, r56);
  L353():
    yi6 = ld yi;
    check L355() else D119();
  L354():
    r210 = dyn base37(<lang `[`(yi, `-`(length(yi)))>);
    goto L85(i343, r210);
  L369():
    goto L88(i343, r221);
  D29():
    deopt 109 [i38, i39, r55];
  D30():
    deopt 113 [i44, i45, nc];
  D119():
    deopt 453 [i343, yi6];
  D123():
    deopt 466 [i351, r218];
  L27():
    goto L33(i50, i51);
  L33(i90, i91):
    sym12 = ldf any;
    base12 = ldf any in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L186() else L187();
  L160():
    goto L25(i38, i39, r55);
  L163():
    nc1 = force? nc;
    checkMissing(nc1);
    anyNA = ldf anyNA in base;
    r58 = dyn anyNA(nc1);
    check L164() else D31();
  L165():
    sym9 = ldf nchar;
    base9 = ldf nchar in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L166() else L167();
  L355():
    yi7 = force? yi6;
    checkMissing(yi7);
    c43 = `is.object`(yi7);
    if c43 then L356() else L357(i343, yi7);
  L364():
    goto L84(i351, r218);
  D31():
    deopt 116 [i44, i45, r58];
  L28(i60, i61, r60):
    st nc0 = r60;
    nc2 = ld nc0;
    check L170() else D34();
  L34(i96, i97, r71):
    c13 = `as.logical`(r71);
    if c13 then L190() else L35();
  L86(i355, dx62):
    list1 = ldf list in base;
    r217 = dyn list1(dx62);
    check L363() else D122();
  L164():
    goto L26(i44, i45, r58);
  L166():
    words2 = ld words;
    check L168() else D32();
  L167():
    r59 = dyn base9[, type](<sym words>, "b");
    goto L28(i50, i51, r59);
  L186():
    nc13 = ld nc;
    check L188() else D39();
  L187():
    r70 = dyn base12(<lang `==`(nc, 0)>);
    goto L34(i90, i91, r70);
  L356():
    dr38 = tryDispatchBuiltin.1("[", yi7);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L358() else L357(i343, dr38);
  L357(i353, yi9):
    sym38 = ldf length;
    base38 = ldf length in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L359() else L360();
  D32():
    deopt 119 [i50, i51, words2];
  D34():
    deopt 127 [i60, i61, nc2];
  D39():
    deopt 149 [i90, i91, nc13];
  D122():
    deopt 464 [i355, r217];
  L35():
    goto L42(i96, i97);
  L42(i138, i139):
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L216() else L217();
  L87(i358, yi12, r213):
    r215 = `-`(<missing>, r213);
    __16 = ldf `[` in base;
    r216 = dyn __16(yi12, r215);
    goto L86(i358, r216);
  L168():
    words3 = force? words2;
    checkMissing(words3);
    nchar1 = ldf nchar in base;
    r61 = dyn nchar1(words3, "b", FALSE, NA_LGL);
    check L169() else D33();
  L170():
    nc3 = force? nc2;
    checkMissing(nc3);
    c11 = `is.object`(nc3);
    if c11 then L171() else L172(i60, i61, nc3);
  L188():
    nc14 = force? nc13;
    checkMissing(nc14);
    r72 = `==`(nc14, 0);
    any1 = ldf any in base;
    r73 = dyn any1(r72);
    check L189() else D40();
  L190():
    which = ldf which;
    check L191() else D41();
  L358():
    dx61 = getTryDispatchBuiltinValue(dr38);
    goto L86(i343, dx61);
  L359():
    yi13 = ld yi;
    check L361() else D120();
  L360():
    r212 = dyn base38(<sym yi>);
    goto L87(i353, yi9, r212);
  L363():
    goto L85(i355, r217);
  D33():
    deopt 125 [i50, i51, r61];
  D40():
    deopt 154 [i90, i91, r73];
  D41():
    deopt 156 [i96, i97];
  D120():
    deopt 457 [i353, yi9, yi13];
  L29(i68, i69, dx13):
    l5 = ld nc;
    c12 = `is.object`(l5);
    if c12 then L178() else L179(i68, i69, dx13, l5);
  L43(i144, i145, r93):
    r95 = `!`(r93);
    c18 = `as.logical`(r95);
    if c18 then L220() else L44();
  L169():
    goto L28(i50, i51, r61);
  L171():
    dr10 = tryDispatchBuiltin.1("[", nc3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L173() else L172(i60, i61, dr10);
  L172(i64, i65, nc5):
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L174() else L175();
  L189():
    goto L34(i90, i91, r73);
  L191():
    p10 = prom<V +>{
      nc15 = ld nc;
      nc16 = force? nc15;
      checkMissing(nc16);
      r74 = `==`(nc16, 0);
      return r74;
    };
    r76 = dyn which(p10);
    check L192() else D42();
  L216():
    words10 = ld words;
    check L218() else D52();
  L217():
    r92 = dyn base14(<sym words>);
    goto L43(i138, i139, r92);
  L361():
    yi14 = force? yi13;
    checkMissing(yi14);
    length7 = ldf length in base;
    r214 = dyn length7(yi14);
    check L362() else D121();
  D42():
    deopt 158 [i96, i97, r76];
  D52():
    deopt 196 [i138, i139, words10];
  D121():
    deopt 460 [i353, yi9, r214];
  L30(i74, i75, nc8, r63):
    __4 = ldf `[` in base;
    r65 = dyn __4(nc8, r63);
    goto L29(i74, i75, r65);
  L31(i82, i83, dx18, dx19):
    st nc = dx19;
    goto L33(i82, i83);
  L44():
    st currentIndex = 0;
    st lowerBlockIndex = 1;
    integer = ldf integer;
    check L228() else D57();
  L173():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L29(i60, i61, dx12);
  L174():
    nc9 = ld nc;
    check L176() else D35();
  L175():
    r62 = dyn base10(<sym nc>);
    goto L30(i64, i65, nc5, r62);
  L178():
    dr12 = tryDispatchBuiltin.0("[<-", l5, dx13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L180() else L179(i68, i69, dx13, dr12);
  L179(i78, i79, dx15, l7):
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L181() else L182();
  L192():
    st zLenInd = r76;
    zLenInd = ld zLenInd;
    check L193() else D43();
  L218():
    words11 = force? words10;
    checkMissing(words11);
    length1 = ldf length in base;
    r94 = dyn length1(words11);
    check L219() else D53();
  L220():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L221() else L222();
  L362():
    goto L87(i353, yi9, r214);
  D35():
    deopt 131 [i64, i65, nc5, nc9];
  D43():
    deopt 160 [i96, i97, zLenInd];
  D53():
    deopt 199 [i138, i139, r94];
  D57():
    deopt 222 [i144, i145];
  L32(i88, i89, dx24, l10, dx25, r67):
    ___1 = ldf `[<-` in base;
    r69 = dyn ___1(l10, dx25, r67);
    goto L31(i88, i89, dx24, r69);
  L45(i154, i155, r97):
    st yi = r97;
    goto L22(i154, i155);
  L176():
    nc10 = force? nc9;
    checkMissing(nc10);
    is_na = ldf `is.na` in base;
    r64 = dyn is_na(nc10);
    check L177() else D36();
  L180():
    dx17 = getTryDispatchBuiltinValue(dr12);
    goto L31(i68, i69, dx13, dx17);
  L181():
    nc11 = ld nc;
    check L183() else D37();
  L182():
    r66 = dyn base11(<sym nc>);
    goto L32(i78, i79, dx15, l7, dx13, r66);
  L193():
    zLenInd1 = force? zLenInd;
    checkMissing(zLenInd1);
    c14 = `is.object`(zLenInd1);
    if c14 then L194() else L195(i96, i97, zLenInd1);
  L219():
    goto L43(i138, i139, r94);
  L221():
    yi = ld yi;
    check L223() else D54();
  L222():
    r96 = dyn base15(<sym yi>, "", <sym initial>);
    goto L45(i144, i145, r96);
  L228():
    r100 = dyn integer();
    check L229() else D58();
  D36():
    deopt 134 [i64, i65, nc5, r64];
  D37():
    deopt 139 [i78, i79, dx15, l7, dx13, nc11];
  D54():
    deopt 203 [i144, i145, yi];
  D58():
    deopt 223 [i144, i145, r100];
  L36(i108, i109, dx28):
    st zLenInd = dx28;
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L199() else L200();
  L177():
    goto L30(i64, i65, nc5, r64);
  L183():
    nc12 = force? nc11;
    checkMissing(nc12);
    is_na1 = ldf `is.na` in base;
    r68 = dyn is_na1(nc12);
    check L184() else D38();
  L194():
    dr14 = tryDispatchBuiltin.1("[", zLenInd1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L196() else L195(i96, i97, dr14);
  L195(i104, i105, zLenInd3):
    _in_ = ldf `%in%`;
    check L197() else D44();
  L223():
    yi1 = force? yi;
    checkMissing(yi1);
    initial1 = ld initial;
    check L224() else D55();
  L229():
    st upperBlockIndex = r100;
    sym16 = ldf cumsum;
    base16 = ldf cumsum in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L230() else L231();
  D38():
    deopt 142 [i78, i79, dx15, l7, dx13, r68];
  D44():
    deopt 163 [i104, i105, zLenInd3];
  D55():
    deopt 206 [i144, i145, initial1];
  L37(i114, i115, r86):
    c15 = `as.logical`(r86);
    if c15 then L203() else L38();
  L47(i164, i165, r102):
    st lens = r102;
    st first = TRUE;
    width1 = ld width;
    check L234() else D61();
  L184():
    goto L32(i78, i79, dx15, l7, dx13, r68);
  L196():
    dx27 = getTryDispatchBuiltinValue(dr14);
    goto L36(i96, i97, dx27);
  L197():
    p11 = prom<V +>{
      zLenInd4 = ld zLenInd;
      zLenInd5 = force? zLenInd4;
      checkMissing(zLenInd5);
      return zLenInd5;
    };
    p13 = prom<V +>{
      grep = ldf grep;
      p12 = prom<V +>{
        words4 = ld words;
        words5 = force? words4;
        checkMissing(words5);
        return words5;
      };
      r79 = dyn grep[, , perl, useBytes]("[.?!][)\"']{0,1}$", p12, TRUE, TRUE);
      r80 = `+`(r79, 1);
      visible.0();
      return r80;
    };
    r82 = dyn _in_(p11, p13);
    check L198() else D45();
  L199():
    zLenInd6 = ld zLenInd;
    check L201() else D46();
  L200():
    r85 = dyn base13(<sym zLenInd>);
    goto L37(i108, i109, r85);
  L224():
    initial2 = force? initial1;
    checkMissing(initial2);
    c19 = ldf c in base;
    r98 = dyn c19(yi1, "", initial2);
    check L225() else D56();
  L230():
    nc21 = ld nc;
    check L232() else D59();
  L231():
    r101 = dyn base16(<lang `+`(nc, 1)>);
    goto L47(i144, i145, r101);
  D45():
    deopt 166 [i104, i105, zLenInd3, r82];
  D46():
    deopt 172 [i108, i109, zLenInd6];
  D56():
    deopt 209 [i144, i145, r98];
  D59():
    deopt 227 [i144, i145, nc21];
  D61():
    deopt 237 [i164, i165, width1];
  L38():
    goto L41(i114, i115, NULL);
  L41(i136, i137, dx33):
    goto L42(i136, i137);
  L198():
    r83 = `!`(r82);
    __5 = ldf `[` in base;
    r84 = dyn __5(zLenInd3, r83);
    goto L36(i104, i105, r84);
  L201():
    zLenInd7 = force? zLenInd6;
    checkMissing(zLenInd7);
    length = ldf length in base;
    r87 = dyn length(zLenInd7);
    check L202() else D47();
  L203():
    words6 = ld words;
    check L204() else D48();
  L225():
    goto L45(i144, i145, r98);
  L232():
    nc22 = force? nc21;
    checkMissing(nc22);
    r103 = `+`(nc22, 1);
    cumsum = ldf cumsum in base;
    r104 = dyn cumsum(r103);
    check L233() else D60();
  L234():
    width2 = force? width1;
    checkMissing(width2);
    sym17 = ldf nchar;
    base17 = ldf nchar in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L235() else L236();
  D47():
    deopt 175 [i108, i109, r87];
  D48():
    deopt 176 [i114, i115, words6];
  D60():
    deopt 232 [i144, i145, r104];
  L48(i170, i171, width5, r106):
    r108 = `-`(width5, r106);
    indent3 = ld indent;
    check L239() else D64();
  L202():
    goto L37(i108, i109, r87);
  L204():
    words7 = force? words6;
    checkMissing(words7);
    c16 = `is.object`(words7);
    if c16 then L205() else L206(i114, i115, words7);
  L233():
    goto L47(i144, i145, r104);
  L235():
    initial3 = ld initial;
    check L237() else D62();
  L236():
    r105 = dyn base17[, type](<sym initial>, "w");
    goto L48(i164, i165, width2, r105);
  D62():
    deopt 240 [i164, i165, width2, initial3];
  D64():
    deopt 247 [i170, i171, r108, indent3];
  L39(i126, i127, dx30):
    st words = dx30;
    nc17 = ld nc;
    check L209() else D50();
  L205():
    dr16 = tryDispatchBuiltin.1("[", words7);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L207() else L206(i114, i115, dr16);
  L206(i122, i123, words9):
    zLenInd8 = ld zLenInd;
    check L208() else D49();
  L237():
    initial4 = force? initial3;
    checkMissing(initial4);
    nchar2 = ldf nchar in base;
    r107 = dyn nchar2(initial4, "w", FALSE, NA_LGL);
    check L238() else D63();
  L239():
    indent4 = force? indent3;
    checkMissing(indent4);
    r109 = `-`(r108, indent4);
    st maxLength = r109;
    goto L74(i170, i171);
  D49():
    deopt 178 [i122, i123, words9, zLenInd8];
  D50():
    deopt 183 [i126, i127, nc17];
  D63():
    deopt 246 [i164, i165, width2, r107];
  L74(i172, i173):
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L240() else L241();
  L207():
    dx29 = getTryDispatchBuiltinValue(dr16);
    goto L39(i114, i115, dx29);
  L208():
    zLenInd9 = force? zLenInd8;
    checkMissing(zLenInd9);
    r88 = `-`(<missing>, zLenInd9);
    __6 = ldf `[` in base;
    r89 = dyn __6(words9, r88);
    goto L39(i122, i123, r89);
  L209():
    nc18 = force? nc17;
    checkMissing(nc18);
    c17 = `is.object`(nc18);
    if c17 then L210() else L211(i126, i127, nc18);
  L238():
    goto L48(i164, i165, width2, r107);
  L40(i134, i135, dx32):
    st nc = dx32;
    goto L41(i134, i135, dx32);
  L49(i178, i179, r111):
    c20 = `as.logical`(r111);
    if c20 then L244() else L50();
  L210():
    dr18 = tryDispatchBuiltin.1("[", nc18);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L212() else L211(i126, i127, dr18);
  L211(i130, i131, nc20):
    zLenInd10 = ld zLenInd;
    check L213() else D51();
  L240():
    lens = ld lens;
    check L242() else D65();
  L241():
    r110 = dyn base18(<sym lens>);
    goto L49(i172, i173, r110);
  D51():
    deopt 185 [i130, i131, nc20, zLenInd10];
  D65():
    deopt 253 [i172, i173, lens];
  L50():
    sym28 = ldf length;
    base28 = ldf length in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L322() else L323();
  L212():
    dx31 = getTryDispatchBuiltinValue(dr18);
    goto L40(i126, i127, dx31);
  L213():
    zLenInd11 = force? zLenInd10;
    checkMissing(zLenInd11);
    r90 = `-`(<missing>, zLenInd11);
    __7 = ldf `[` in base;
    r91 = dyn __7(nc20, r90);
    goto L40(i130, i131, r91);
  L242():
    lens1 = force? lens;
    checkMissing(lens1);
    length2 = ldf length in base;
    r112 = dyn length2(lens1);
    check L243() else D66();
  L244():
    sym19 = ldf max;
    base19 = ldf max in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L245() else L246();
  D66():
    deopt 256 [i172, i173, r112];
  L51(i188, i189, r114):
    st k = r114;
    first = ld first;
    check L253() else D71();
  L75(i304, i305, r165):
    st nBlocks = r165;
    paste0 = ldf paste0;
    check L326() else D105();
  L243():
    goto L49(i172, i173, r112);
  L245():
    sym20 = ldf sum;
    base20 = ldf sum in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L247() else L248();
  L246():
    r113 = dyn base19(<lang sum(`<=`(lens, maxLength))>, 1);
    goto L51(i178, i179, r113);
  L322():
    upperBlockIndex4 = ld upperBlockIndex;
    check L324() else D103();
  L323():
    r164 = dyn base28(<sym upperBlockIndex>);
    goto L75(i178, i179, r164);
  D71():
    deopt 271 [i188, i189, first];
  D103():
    deopt 396 [i178, i179, upperBlockIndex4];
  D105():
    deopt 402 [i304, i305];
  L52(i194, i195, r116):
    max = ldf max in base;
    r119 = dyn max(r116, 1);
    check L252() else D70();
  L247():
    lens2 = ld lens;
    check L249() else D67();
  L248():
    r115 = dyn base20(<lang `<=`(lens, maxLength)>);
    goto L52(i178, i179, r115);
  L253():
    first1 = force? first;
    checkMissing(first1);
    c21 = `as.logical`(first1);
    if c21 then L254() else L53();
  L324():
    upperBlockIndex5 = force? upperBlockIndex4;
    checkMissing(upperBlockIndex5);
    length5 = ldf length in base;
    r166 = dyn length5(upperBlockIndex5);
    check L325() else D104();
  L326():
    p14 = prom<V +>{
      sym29 = ldf c;
      base29 = ldf c in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L2() else L3();
    L0(r168):
      return r168;
    L2():
      initial5 = ld initial;
      initial6 = force? initial5;
      checkMissing(initial6);
      sym30 = ldf `rep.int`;
      base30 = ldf `rep.int` in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L4() else L5();
    L3():
      r167 = dyn base29(<sym initial>, <lang rep.int(prefix, `-`(nBlocks, 1))>);
      goto L0(r167);
    L1(r170):
      c33 = ldf c in base;
      r173 = dyn c33(initial6, r170);
      goto L0(r173);
    L4():
      prefix5 = ld prefix;
      prefix6 = force? prefix5;
      checkMissing(prefix6);
      nBlocks = ld nBlocks;
      nBlocks1 = force? nBlocks;
      checkMissing(nBlocks1);
      r171 = `-`(nBlocks1, 1);
      rep_int = ldf `rep.int` in base;
      r172 = dyn rep_int(prefix6, r171);
      goto L1(r172);
    L5():
      r169 = dyn base30(<sym prefix>, <lang `-`(nBlocks, 1)>);
      goto L1(r169);
    };
    p15 = prom<V +>{
      sym31 = ldf c;
      base31 = ldf c in base;
      guard31 = `==`.4(sym31, base31);
      if guard31 then L2() else L3();
    L0(r176):
      return r176;
    L2():
      indentString = ld indentString;
      indentString1 = force? indentString;
      checkMissing(indentString1);
      sym32 = ldf `rep.int`;
      base32 = ldf `rep.int` in base;
      guard32 = `==`.4(sym32, base32);
      if guard32 then L4() else L5();
    L3():
      r175 = dyn base31(<sym indentString>, <lang rep.int(exdentString, `-`(nBlocks, 1))>);
      goto L0(r175);
    L1(r178):
      c34 = ldf c in base;
      r181 = dyn c34(indentString1, r178);
      goto L0(r181);
    L4():
      exdentString = ld exdentString;
      exdentString1 = force? exdentString;
      checkMissing(exdentString1);
      nBlocks2 = ld nBlocks;
      nBlocks3 = force? nBlocks2;
      checkMissing(nBlocks3);
      r179 = `-`(nBlocks3, 1);
      rep_int1 = ldf `rep.int` in base;
      r180 = dyn rep_int1(exdentString1, r179);
      goto L1(r180);
    L5():
      r177 = dyn base32(<sym exdentString>, <lang `-`(nBlocks, 1)>);
      goto L1(r177);
    };
    r183 = dyn paste0(p14, p15);
    check L327() else D106();
  D67():
    deopt 261 [i178, i179, lens2];
  D70():
    deopt 269 [i194, i195, r119];
  D104():
    deopt 399 [i178, i179, r166];
  D106():
    deopt 405 [i304, i305, r183];
  L53():
    goto L55(i188, i189);
  L55(i206, i207):
    currentIndex = ld currentIndex;
    check L262() else D76();
  L249():
    lens3 = force? lens2;
    checkMissing(lens3);
    maxLength = ld maxLength;
    check L250() else D68();
  L252():
    goto L51(i194, i195, r119);
  L254():
    st first = FALSE;
    width6 = ld width;
    check L255() else D72();
  L325():
    goto L75(i178, i179, r166);
  L327():
    st s = r183;
    prefix7 = ld prefix;
    check L328() else D107();
  D68():
    deopt 262 [i178, i179, lens3, maxLength];
  D72():
    deopt 276 [i188, i189, width6];
  D76():
    deopt 292 [i206, i207, currentIndex];
  D107():
    deopt 407 [i304, i305, prefix7];
  L250():
    maxLength1 = force? maxLength;
    checkMissing(maxLength1);
    r117 = `<=`(lens3, maxLength1);
    sum = ldf sum in base;
    r118 = dyn sum(r117);
    check L251() else D69();
  L255():
    width7 = force? width6;
    checkMissing(width7);
    sym21 = ldf nchar;
    base21 = ldf nchar in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L256() else L257();
  L262():
    currentIndex1 = force? currentIndex;
    checkMissing(currentIndex1);
    k = ld k;
    check L263() else D77();
  L328():
    prefix8 = force? prefix7;
    checkMissing(prefix8);
    st initial = prefix8;
    sym33 = ldf seq_len;
    base33 = ldf seq_len in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L329() else L330();
  D69():
    deopt 266 [i178, i179, r118];
  D77():
    deopt 293 [i206, i207, currentIndex1, k];
  L54(i204, i205, width10, r121):
    r123 = `-`(width10, r121);
    exdent3 = ld exdent;
    check L260() else D75();
  L76(i310, i311, r185):
    s2 = toForSeq(r185);
    l11 = length(s2);
    i312 = 0;
    goto L77(i310, i311, i312);
  L251():
    goto L52(i178, i179, r118);
  L256():
    prefix3 = ld prefix;
    check L258() else D73();
  L257():
    r120 = dyn base21[, type](<sym prefix>, "w");
    goto L54(i188, i189, width7, r120);
  L263():
    k1 = force? k;
    checkMissing(k1);
    r126 = `+`(currentIndex1, k1);
    st currentIndex = r126;
    nc23 = ld nc;
    check L264() else D78();
  L329():
    nBlocks4 = ld nBlocks;
    check L331() else D108();
  L330():
    r184 = dyn base33(<sym nBlocks>);
    goto L76(i304, i305, r184);
  D73():
    deopt 279 [i188, i189, width7, prefix3];
  D75():
    deopt 286 [i204, i205, r123, exdent3];
  D78():
    deopt 297 [i206, i207, nc23];
  D108():
    deopt 411 [i304, i305, nBlocks4];
  L77(i313, i314, i315):
    i316 = `+`.1(i315, 1);
    c35 = `<`.1(l11, i316);
    if c35 then L332() else L79();
  L258():
    prefix4 = force? prefix3;
    checkMissing(prefix4);
    nchar3 = ldf nchar in base;
    r122 = dyn nchar3(prefix4, "w", FALSE, NA_LGL);
    check L259() else D74();
  L260():
    exdent4 = force? exdent3;
    checkMissing(exdent4);
    r124 = `-`(r123, exdent4);
    st maxLength = r124;
    goto L55(i204, i205);
  L264():
    nc24 = force? nc23;
    checkMissing(nc24);
    c22 = `is.object`(nc24);
    if c22 then L265() else L266(i206, i207, nc24);
  L331():
    nBlocks5 = force? nBlocks4;
    checkMissing(nBlocks5);
    r186 = seq_len(nBlocks5);
    goto L76(i304, i305, r186);
  D74():
    deopt 285 [i188, i189, width7, r122];
  L56(i214, i215, dx36):
    r128 = `==`(dx36, 0);
    c23 = `as.logical`(r128);
    if c23 then L269() else L57();
  L79():
    x19 = `[[`(s2, i316, NULL, TRUE);
    st k = x19;
    paste1 = ldf paste0;
    check L333() else D109();
  L259():
    goto L54(i188, i189, width7, r122);
  L265():
    dr20 = tryDispatchBuiltin.1("[", nc24);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L267() else L266(i206, i207, dr20);
  L266(i210, i211, nc26):
    currentIndex2 = ld currentIndex;
    check L268() else D79();
  L332():
    sym34 = ldf c;
    base34 = ldf c in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L339() else L340();
  D79():
    deopt 299 [i210, i211, nc26, currentIndex2];
  D109():
    deopt 415 [i313, i314, i316];
  L57():
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L276() else L277();
  L59(i226, i227):
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L281() else L282();
  L80(i339, i340, r203):
    st yi = r203;
    goto L22(i339, i340);
  L267():
    dx35 = getTryDispatchBuiltinValue(dr20);
    goto L56(i206, i207, dx35);
  L268():
    currentIndex3 = force? currentIndex2;
    __8 = ldf `[` in base;
    r127 = dyn __8(nc26, currentIndex3);
    goto L56(i210, i211, r127);
  L269():
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L270() else L271();
  L333():
    p16 = prom<V +>{
      s3 = ld s;
      s4 = force? s3;
      checkMissing(s4);
      c36 = `is.object`(s4);
      if c36 then L1() else L2(s4);
    L0(dx48):
      return dx48;
    L1():
      dr28 = tryDispatchBuiltin.1("[", s4);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(s6):
      k12 = ld k;
      k13 = force? k12;
      __12 = ldf `[` in base;
      r187 = dyn __12(s6, k13);
      goto L0(r187);
    L3():
      dx47 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx47);
    };
    p18 = prom<V +>{
      paste2 = ldf paste;
      p17 = prom<V +>{
        words12 = ld words;
        words13 = force? words12;
        checkMissing(words13);
        c37 = `is.object`(words13);
        if c37 then L3() else L4(words13);
      L0(dx50):
        return dx50;
      L3():
        dr30 = tryDispatchBuiltin.1("[", words13);
        dc15 = getTryDispatchBuiltinDispatched(dr30);
        if dc15 then L5() else L4(dr30);
      L4(words15):
        lowerBlockIndex2 = ld lowerBlockIndex;
        lowerBlockIndex3 = force? lowerBlockIndex2;
        checkMissing(lowerBlockIndex3);
        c38 = `is.object`(lowerBlockIndex3);
        if c38 then L6() else L7(words15, lowerBlockIndex3);
      L1(words19, dx52):
        upperBlockIndex6 = ld upperBlockIndex;
        upperBlockIndex7 = force? upperBlockIndex6;
        checkMissing(upperBlockIndex7);
        c39 = `is.object`(upperBlockIndex7);
        if c39 then L9() else L10(words19, dx52, upperBlockIndex7);
      L5():
        dx49 = getTryDispatchBuiltinValue(dr30);
        goto L0(dx49);
      L6():
        dr32 = tryDispatchBuiltin.1("[", lowerBlockIndex3);
        dc16 = getTryDispatchBuiltinDispatched(dr32);
        if dc16 then L8() else L7(words15, dr32);
      L7(words17, lowerBlockIndex5):
        k14 = ld k;
        k15 = force? k14;
        __13 = ldf `[` in base;
        r189 = dyn __13(lowerBlockIndex5, k15);
        goto L1(words17, r189);
      L2(words23, dx57, dx58):
        r191 = `:`(dx57, dx58);
        __15 = ldf `[` in base;
        r192 = dyn __15(words23, r191);
        goto L0(r192);
      L8():
        dx51 = getTryDispatchBuiltinValue(dr32);
        goto L1(words15, dx51);
      L9():
        dr34 = tryDispatchBuiltin.1("[", upperBlockIndex7);
        dc17 = getTryDispatchBuiltinDispatched(dr34);
        if dc17 then L11() else L10(words19, dx52, dr34);
      L10(words21, dx54, upperBlockIndex9):
        k16 = ld k;
        k17 = force? k16;
        __14 = ldf `[` in base;
        r190 = dyn __14(upperBlockIndex9, k17);
        goto L2(words21, dx54, r190);
      L11():
        dx56 = getTryDispatchBuiltinValue(dr34);
        goto L2(words19, dx52, dx56);
      };
      r194 = dyn paste2[, collapse](p17, " ");
      return r194;
    };
    r196 = dyn paste1(p16, p18);
    check L334() else D110();
  L339():
    yi2 = ld yi;
    check L341() else D112();
  L340():
    r202 = dyn base34(<sym yi>, <sym s>, <sym prefix>);
    goto L80(i313, i314, r202);
  D110():
    deopt 418 [i313, i314, i316, r196];
  D112():
    deopt 429 [i313, i314, yi2];
  L58(i224, i225, r130):
    st upperBlockIndex = r130;
    goto L59(i224, i225);
  L60(i232, i233, r135):
    st upperBlockIndex = r135;
    goto L59(i232, i233);
  L61(i238, i239, r138):
    k2 = ld k;
    check L285() else D88();
  L270():
    upperBlockIndex = ld upperBlockIndex;
    check L272() else D80();
  L271():
    r129 = dyn base22(<sym upperBlockIndex>, <lang `-`(currentIndex, 1)>);
    goto L58(i214, i215, r129);
  L276():
    upperBlockIndex2 = ld upperBlockIndex;
    check L278() else D83();
  L277():
    r134 = dyn base23(<sym upperBlockIndex>, <sym currentIndex>);
    goto L60(i214, i215, r134);
  L281():
    lens4 = ld lens;
    check L283() else D86();
  L282():
    r137 = dyn base24(<sym lens>);
    goto L61(i226, i227, r137);
  L334():
    l12 = ld s;
    c40 = `is.object`(l12);
    if c40 then L335() else L336(i313, i314, i316, r196, l12);
  L341():
    yi3 = force? yi2;
    checkMissing(yi3);
    s7 = ld s;
    check L342() else D113();
  D80():
    deopt 306 [i214, i215, upperBlockIndex];
  D83():
    deopt 317 [i214, i215, upperBlockIndex2];
  D86():
    deopt 326 [i226, i227, lens4];
  D88():
    deopt 329 [i238, i239, r138, k2];
  D113():
    deopt 431 [i313, i314, s7];
  L78(i332, i333, i334, dx60):
    st s = dx60;
    goto L77(i332, i333, i334);
  L272():
    upperBlockIndex1 = force? upperBlockIndex;
    checkMissing(upperBlockIndex1);
    currentIndex4 = ld currentIndex;
    check L273() else D81();
  L278():
    upperBlockIndex3 = force? upperBlockIndex2;
    checkMissing(upperBlockIndex3);
    currentIndex6 = ld currentIndex;
    check L279() else D84();
  L283():
    lens5 = force? lens4;
    checkMissing(lens5);
    length3 = ldf length in base;
    r139 = dyn length3(lens5);
    check L284() else D87();
  L285():
    k3 = force? k2;
    checkMissing(k3);
    r140 = `>`(r138, k3);
    c26 = `as.logical`(r140);
    if c26 then L286() else L62();
  L335():
    dr36 = tryDispatchBuiltin.0("[<-", l12, r196);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L337() else L336(i313, i314, i316, r196, dr36);
  L336(i326, i327, i328, r198, l14):
    k18 = ld k;
    check L338() else D111();
  L342():
    s8 = force? s7;
    checkMissing(s8);
    prefix9 = ld prefix;
    check L343() else D114();
  D81():
    deopt 308 [i214, i215, currentIndex4];
  D84():
    deopt 319 [i214, i215, currentIndex6];
  D87():
    deopt 329 [i226, i227, r139];
  D111():
    deopt 420 [i326, i327, i328, r198, l14, r196, k18];
  D114():
    deopt 433 [i313, i314, prefix9];
  L62():
    goto L67(i238, i239);
  L67(i264, i265):
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L302() else L303();
  L273():
    currentIndex5 = force? currentIndex4;
    checkMissing(currentIndex5);
    r131 = `-`(currentIndex5, 1);
    c24 = ldf c in base;
    r132 = dyn c24(upperBlockIndex1, r131);
    check L274() else D82();
  L279():
    currentIndex7 = force? currentIndex6;
    checkMissing(currentIndex7);
    c25 = ldf c in base;
    r136 = dyn c25(upperBlockIndex3, currentIndex7);
    check L280() else D85();
  L284():
    goto L61(i226, i227, r139);
  L286():
    nc27 = ld nc;
    check L287() else D89();
  L337():
    dx59 = getTryDispatchBuiltinValue(dr36);
    goto L78(i313, i314, i316, dx59);
  L338():
    k19 = force? k18;
    ___2 = ldf `[<-` in base;
    r201 = dyn ___2(l14, r196, k19);
    goto L78(i326, i327, i328, r201);
  L343():
    prefix10 = force? prefix9;
    checkMissing(prefix10);
    c41 = ldf c in base;
    r204 = dyn c41(yi3, s8, prefix10);
    check L344() else D115();
  D82():
    deopt 313 [i214, i215, r132];
  D85():
    deopt 322 [i214, i215, r136];
  D89():
    deopt 332 [i238, i239, nc27];
  D115():
    deopt 436 [i313, i314, r204];
  L68(i270, i271, r153):
    k6 = ld k;
    check L306() else D98();
  L274():
    goto L58(i214, i215, r132);
  L280():
    goto L60(i214, i215, r136);
  L287():
    nc28 = force? nc27;
    checkMissing(nc28);
    c27 = `is.object`(nc28);
    if c27 then L288() else L289(i238, i239, nc28);
  L302():
    lens6 = ld lens;
    check L304() else D96();
  L303():
    r152 = dyn base26(<sym lens>);
    goto L68(i264, i265, r152);
  L344():
    goto L80(i313, i314, r204);
  D96():
    deopt 368 [i264, i265, lens6];
  D98():
    deopt 371 [i270, i271, r153, k6];
  L63(i250, i251, dx38):
    r143 = `==`(dx38, 0);
    c28 = `as.logical`(r143);
    if c28 then L292() else L64();
  L288():
    dr22 = tryDispatchBuiltin.1("[", nc28);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L290() else L289(i238, i239, dr22);
  L289(i246, i247, nc30):
    currentIndex8 = ld currentIndex;
    check L291() else D90();
  L304():
    lens7 = force? lens6;
    checkMissing(lens7);
    length4 = ldf length in base;
    r154 = dyn length4(lens7);
    check L305() else D97();
  L306():
    k7 = force? k6;
    checkMissing(k7);
    r155 = `>`(r153, k7);
    c30 = `as.logical`(r155);
    if c30 then L307() else L69();
  D90():
    deopt 334 [i246, i247, nc30, currentIndex8];
  D97():
    deopt 371 [i264, i265, r154];
  L64():
    goto L65(i250, i251);
  L65(i256, i257):
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L296() else L297();
  L69():
    st lens = NULL;
    goto L73(i270, i271);
  L73(i298, i299):
    goto L74(i298, i299);
  L290():
    dx37 = getTryDispatchBuiltinValue(dr22);
    goto L63(i238, i239, dx37);
  L291():
    currentIndex9 = force? currentIndex8;
    checkMissing(currentIndex9);
    r141 = `+`(currentIndex9, 1);
    __9 = ldf `[` in base;
    r142 = dyn __9(nc30, r141);
    goto L63(i246, i247, r142);
  L292():
    currentIndex10 = ld currentIndex;
    check L293() else D91();
  L305():
    goto L68(i264, i265, r154);
  L307():
    lens8 = ld lens;
    check L308() else D99();
  D91():
    deopt 341 [i250, i251, currentIndex10];
  D99():
    deopt 374 [i270, i271, lens8];
  L66(i262, i263, r148):
    st lowerBlockIndex = r148;
    goto L67(i262, i263);
  L293():
    currentIndex11 = force? currentIndex10;
    checkMissing(currentIndex11);
    r144 = `+`(currentIndex11, 1);
    st currentIndex = r144;
    k4 = ld k;
    check L294() else D92();
  L296():
    lowerBlockIndex = ld lowerBlockIndex;
    check L298() else D93();
  L297():
    r147 = dyn base25(<sym lowerBlockIndex>, <lang `+`(currentIndex, 1)>);
    goto L66(i256, i257, r147);
  L308():
    lens9 = force? lens8;
    checkMissing(lens9);
    c31 = `is.object`(lens9);
    if c31 then L309() else L310(i270, i271, lens9);
  D92():
    deopt 346 [i250, i251, k4];
  D93():
    deopt 355 [i256, i257, lowerBlockIndex];
  L70(i282, i283, dx40):
    lens15 = ld lens;
    check L315() else D101();
  L294():
    k5 = force? k4;
    checkMissing(k5);
    r145 = `+`(k5, 1);
    st k = r145;
    goto L65(i250, i251);
  L298():
    lowerBlockIndex1 = force? lowerBlockIndex;
    checkMissing(lowerBlockIndex1);
    currentIndex12 = ld currentIndex;
    check L299() else D94();
  L309():
    dr24 = tryDispatchBuiltin.1("[", lens9);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L311() else L310(i270, i271, dr24);
  L310(i278, i279, lens11):
    sym27 = ldf seq_len;
    base27 = ldf seq_len in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L312() else L313();
  D94():
    deopt 357 [i256, i257, currentIndex12];
  D101():
    deopt 381 [i282, i283, dx40, lens15];
  L71(i288, i289, lens14, r157):
    r159 = `-`(<missing>, r157);
    __10 = ldf `[` in base;
    r160 = dyn __10(lens14, r159);
    goto L70(i288, i289, r160);
  L299():
    currentIndex13 = force? currentIndex12;
    checkMissing(currentIndex13);
    r149 = `+`(currentIndex13, 1);
    c29 = ldf c in base;
    r150 = dyn c29(lowerBlockIndex1, r149);
    check L300() else D95();
  L311():
    dx39 = getTryDispatchBuiltinValue(dr24);
    goto L70(i270, i271, dx39);
  L312():
    k8 = ld k;
    check L314() else D100();
  L313():
    r156 = dyn base27(<sym k>);
    goto L71(i278, i279, lens11, r156);
  L315():
    lens16 = force? lens15;
    checkMissing(lens16);
    c32 = `is.object`(lens16);
    if c32 then L316() else L317(i282, i283, dx40, lens16);
  D95():
    deopt 362 [i256, i257, r150];
  D100():
    deopt 377 [i278, i279, lens11, k8];
  L72(i296, i297, dx45, dx46):
    r162 = `-`(dx45, dx46);
    st lens = r162;
    goto L73(i296, i297);
  L300():
    goto L66(i256, i257, r150);
  L314():
    k9 = force? k8;
    checkMissing(k9);
    r158 = seq_len(k9);
    goto L71(i278, i279, lens11, r158);
  L316():
    dr26 = tryDispatchBuiltin.1("[", lens16);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L318() else L317(i282, i283, dx40, dr26);
  L317(i292, i293, dx42, lens18):
    k10 = ld k;
    check L319() else D102();
  D102():
    deopt 383 [i292, i293, dx42, lens18, k10];
  L318():
    dx44 = getTryDispatchBuiltinValue(dr26);
    goto L72(i282, i283, dx40, dx44);
  L319():
    k11 = force? k10;
    __11 = ldf `[` in base;
    r161 = dyn __11(lens18, k11);
    goto L72(i292, i293, dx42, r161);
  }
}
fun `inner-910700624`(s) {
  (reg s:*) -+> V { var s:*, reg Encoding:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg which:cls, reg e:*, reg e1:V, reg r4:V, reg p1:p(V +), reg r6:V, reg length:cls, reg r7:V, reg c:L, reg iconv:cls, reg s3:*, reg s4:V, reg c1:L, reg s6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg p2:*, reg p3:V, reg __:cls, reg r8:V, reg p4:p(V +), reg r10:V, reg l:*, reg c2:L, reg r12:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r14:V, reg dx3:V, reg p5:*, reg p6:V, reg ___:cls, reg r15:V, reg s7:*, reg s8:V |
    mkenv;
    st s = s;
    Encoding = ldf Encoding;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    r1 = dyn Encoding(p);
    check L5() else D1();
  D1():
    deopt 3 [r1];
  L5():
    st e = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r3):
    c = `as.logical`(r3);
    if c then L11() else L1();
  L6():
    which = ldf which;
    check L8() else D2();
  L7():
    r2 = dyn base(<lang `<-`(p, which(`==`(e, "UTF-8")))>);
    goto L0(r2);
  D2():
    deopt 8 [];
  L1():
    goto L3();
  L3():
    s7 = ld s;
    check L19() else D8();
  L8():
    p1 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      r4 = `==`(e1, "UTF-8");
      return r4;
    };
    r6 = dyn which(p1);
    check L9() else D3();
  L11():
    iconv = ldf iconv;
    check L12() else D5();
  D3():
    deopt 10 [r6];
  D5():
    deopt 15 [];
  D8():
    deopt 29 [s7];
  L9():
    st p = r6;
    length = ldf length in base;
    r7 = dyn length(r6);
    check L10() else D4();
  L12():
    p4 = prom<V +>{
      s3 = ld s;
      s4 = force? s3;
      checkMissing(s4);
      c1 = `is.object`(s4);
      if c1 then L1() else L2(s4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", s4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(s6):
      p2 = ld p;
      p3 = force? p2;
      __ = ldf `[` in base;
      r8 = dyn __(s6, p3);
      goto L0(r8);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r10 = dyn iconv[, , , sub](p4, "UTF-8", "latin1", "byte");
    check L13() else D6();
  L19():
    s8 = force? s7;
    checkMissing(s8);
    popenv;
    return s8;
  D4():
    deopt 13 [r7];
  D6():
    deopt 21 [r10];
  L10():
    goto L0(r7);
  L13():
    l = ld s;
    c2 = `is.object`(l);
    if c2 then L14() else L15(r10, l);
  L2(r14, dx3):
    st s = dx3;
    goto L3();
  L14():
    dr2 = tryDispatchBuiltin.0("[<-", l, r10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L16() else L15(r10, dr2);
  L15(r12, l2):
    p5 = ld p;
    check L17() else D7();
  D7():
    deopt 23 [r12, l2, r10, p5];
  L16():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(r10, dx2);
  L17():
    p6 = force? p5;
    ___ = ldf `[<-` in base;
    r15 = dyn ___(l2, r10, p6);
    goto L2(r12, r15);
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg substring:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st x = x;
    substring = ldf substring;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn substring("aaaaaaaaaa", 1.0, p);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner148564522(m) {
  (reg m:*) -+> V { var m:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg m1:*, reg m2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r4:V, reg r5:V, reg strwrap:cls, reg x:*, reg x1:V, reg p:p(V +), reg m3:*, reg m4:V, reg p1:p(V +), reg r8:V, reg nchar:cls, reg r9:V, reg max:cls, reg r10:V, reg c:cls, reg r11:V |
    mkenv;
    st m = m;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    popenv;
    return r1;
  L3():
    m1 = ld m;
    check L5() else D0();
  L4():
    r = dyn base[target, actual](<sym m>, <lang max(nchar(strwrap(x, m)))>);
    goto L0(r);
  D0():
    deopt 2 [m1];
  L5():
    m2 = force? m1;
    checkMissing(m2);
    sym1 = ldf max;
    base1 = ldf max in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L1(r3):
    c = ldf c in base;
    r11 = dyn c(m2, r3);
    check L14() else D5();
  L6():
    sym2 = ldf nchar;
    base2 = ldf nchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L8() else L9();
  L7():
    r2 = dyn base1(<lang nchar(strwrap(x, m))>);
    goto L1(r2);
  D5():
    deopt 23 [r11];
  L2(r5):
    max = ldf max in base;
    r10 = dyn max(r5);
    check L13() else D4();
  L8():
    strwrap = ldf strwrap;
    check L10() else D1();
  L9():
    r4 = dyn base2(<lang strwrap(x, m)>);
    goto L2(r4);
  L14():
    goto L0(r11);
  D1():
    deopt 10 [];
  D4():
    deopt 20 [r10];
  L10():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p1 = prom<V +>{
      m3 = ld m;
      m4 = force? m3;
      checkMissing(m4);
      return m4;
    };
    r8 = dyn strwrap(p, p1);
    check L11() else D2();
  L13():
    goto L1(r10);
  D2():
    deopt 13 [r8];
  L11():
    nchar = ldf nchar in base;
    r9 = dyn nchar(r8, "chars", FALSE, NA_LGL);
    check L12() else D3();
  D3():
    deopt 18 [r9];
  L12():
    goto L2(r9);
  }
}