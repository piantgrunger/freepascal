{
    x86 format converters for HERMES
    Some routines Copyright (c) 1998 Christian Nentwich (c.nentwich@cs.ucl.ac.uk)
    Some routines are (c) Glenn Fiedler (ptc@gaffer.org), used with permission

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version
    with the following modification:

    As a special exception, the copyright holders of this library give you
    permission to link this library with independent modules to produce an
    executable, regardless of the license terms of these independent modules,and
    to copy and distribute the resulting executable under terms of your choice,
    provided that you also meet, for each linked independent module, the terms
    and conditions of the license of that module. An independent module is a
    module which is not derived from or based on this library. If you modify
    this library, you may extend this exception to your version of the library,
    but you are not obligated to do so. If you do not wish to do so, delete this
    exception statement from your version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
}

{ _Copy*
 Paramters:
   ESI = source
   EDI = dest
   ECX = amount (NOT 0!!! (the _ConvertX86 routine checks for that though))
 Destroys:
   EAX, EBX, EDX
}

procedure CopyX86p_4byte_S(CONVERT_PARAMETERS); cdecl; nostackframe; assembler;
asm
        jmp _X86RETURN_S
end;

procedure CopyX86p_3byte_S(CONVERT_PARAMETERS); cdecl; nostackframe; assembler;
asm
        jmp _X86RETURN_S
end;

procedure CopyX86p_2byte_S(CONVERT_PARAMETERS); cdecl; nostackframe; assembler;
asm
        jmp _X86RETURN_S
end;

procedure CopyX86p_1byte_S(CONVERT_PARAMETERS); cdecl; nostackframe; assembler;
asm
        jmp _X86RETURN_S
end;
