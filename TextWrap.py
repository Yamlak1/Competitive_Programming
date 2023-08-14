import textwrap

def wrap(string, max_width):
    wrapped_string = textwrap.fill(string, max_width)
    return wrapped_string
if __name__ == '__main__':
