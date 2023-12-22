const segment = [63, 6, 91, 79, 102, 109, 125, 7, 127, 111];
const input = 'ZYXW', output = 'ABCDEFG';

function sevenSegment(num) {
  SS = [], Biner = [];

  for(let i = 0; i < output.length; i++)
    SS.push(segment[num] & (1 << i) ? 1 : 0);

  for(let i = 0; i < input.length; i++)
    Biner.push(num & (1 << i) ? 1 : 0);

  for(let i = 0; i < output.length; i++){
    document.getElementById(output[i]).
    style.opacity = SS[i] ? '1' : '0.1';

    document.getElementById('Output' + output[i]).
    textContent = SS[i];
  }

  for(let i = 0; i < input.length; i++)
    document.getElementById('Input' + input[i]).
    textContent = Biner[i]; 
}


