#pragma once



namespace NoteRecognizer
{
	class Note
	{
	public:
		// ��������� � ���� � �� ����� ������
		Note(int noteNumber) : noteNumber(noteNumber)
		{

		}

		// ��������� � ����� ������ c ����
		Note(int noteNumber, int octaveNumber)
			: noteNumber(noteNumber + octaveNumber * 12)
		{
			
		}

		auto operator<=>(const Note & otherNote) const = default;

	private:
		int noteNumber;
	};
}
